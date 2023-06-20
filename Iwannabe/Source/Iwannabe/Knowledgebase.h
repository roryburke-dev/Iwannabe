// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

using namespace std;
#include <list>
#include <map>
#include <string>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Knowledgebase.generated.h"

UCLASS()
class IWANNABE_API AKnowledgebase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKnowledgebase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

//(BlueprintsType)
#define LIST_OF_KNOWLEDGE                                                      \
  X(health)                                                                    \
  X(boredom)                                                                   \
  X(hunger)                                                                    \
  X(thirst)                                                                    \
  X(loneliness)                                                                \
  X(stamina)

//(BlueprintsType)
#define LIST_OF_PREDEFINEDVALUES                                               \
  X(normie) // Cliques                                                         \
  X(poser)

//(BlueprintsType)
#define LIST_OF_PRECONDITIONS                                                  \
  X(none)                                                                      \
  X(isInKitchen)

//(BlueprintsType)
#define LIST_OF_BEHAVIORS                                                      \
  X(meetNeeds)                                                                 \
  X(skate)

//(BlueprintsType) - reference must be UPROPERTY(EditAnywhere, Instanced,
// Category="AI")
enum Knowledge {
#define X(x) x,
	LIST_OF_KNOWLEDGE
#undef X
};

//(BlueprintsType) - reference must be UPROPERTY(EditAnywhere, Instanced,
// Category="AI")
enum PredefinedValue {
#define X(x) x,
	LIST_OF_PREDEFINEDVALUES
#undef X
};

//(BlueprintsType) - reference must be UPROPERTY(EditAnywhere, Instanced,
// Category="AI")
enum Precondition {
#define X(x) x,
	LIST_OF_PRECONDITIONS
#undef X
};

//(BlueprintsType) - reference must be UPROPERTY(EditAnywhere, Instanced,
// Category="AI")
enum Behavior {
#define X(x) x,
	LIST_OF_BEHAVIORS
#undef X
};

enum KnowledgeType { fixedRange };
enum Axis { percent };

class Consideration;
class Action;
class BehaviorSet;
class Agent;

class KnowledgeConstructor {
public:
	// [0]=value, [1]=min, [2]=max, [n>3]=overloaded value
	Knowledge knowledge;
	vector<float> values = { 0, 0, 0, 0, 0, 0 };
	list<PredefinedValue*> predefVals;
	string name;

	string knowledgeToString(Knowledge knowledge) {
		switch (knowledge) {
#define X(x)                                                                   \
  case x:                                                                      \
    return #x;
			LIST_OF_KNOWLEDGE
#undef X
		}
		return "UNKNOWN";
	}

	KnowledgeConstructor(KnowledgeType knowledgeType, Knowledge k,
		vector<float> v) {
		knowledge = k;
		switch (knowledgeType) {
		case fixedRange:
			name = knowledgeToString(k);
			values = v;
			break;
		}
	}
};

class InputAxis {
public:
	Agent* target;
	KnowledgeConstructor* knowledgeConstructor;
	vector<float> inputParams = { 0, 0 };

	InputAxis(Agent* t, KnowledgeConstructor* k) {
		target = t;
		knowledgeConstructor = k;
		inputParams[0] = k->values[1];
		inputParams[1] = k->values[2];
	};

	// make input normalized through design
	float Axis(Axis type, float x) {
		switch (type) {
		case percent:
			x = x / inputParams[1];
			break;
		}
		return x;
	};
};

class Consideration {
public:
	float score = 0;
	InputAxis* input;
	Knowledge knowledge;
	vector<float> values;
	list<Precondition> preconditions;

	// curveTypes: 0=linear, 1=polynomial, 2=logistic, 3=logit, 4=normal, 5=sine
	// [0]=curveType, [1]=slope(m), [2]=exponent(k), [3]=vertical shift(b),
	// [4]=horizontal shift(c)
	vector<float> responseCurve = { 0, 0, 0, 0, 0 };

	Consideration();
	Consideration(InputAxis* i, float curveType, float m, float k, float b,
		float c, list<Precondition> p) {
		input = i;
		knowledge = i->knowledgeConstructor->knowledge;
		values = i->knowledgeConstructor->values;
		responseCurve[0] = curveType;
		responseCurve[1] = m;
		responseCurve[2] = k;
		responseCurve[3] = b;
		responseCurve[4] = c;
		preconditions = p;
	}
};

struct Knowledgebase {
public:
	list<Knowledge> knowledges;
	map<Knowledge, vector<float>> knowledgebase;

	Knowledge SetKnowledge(Knowledge knowledge, vector<float> values) {
		switch (knowledge) {
#define X(x)                                                                   \
  case x:                                                                      \
    knowledgebase[knowledge] = values;                                         \
    return x;
			LIST_OF_KNOWLEDGE
#undef X
		}
		return health;
	}

	Knowledgebase(Agent* a, list<KnowledgeConstructor*> kcList) {
		for (KnowledgeConstructor* kc : kcList) {
			Knowledge k = SetKnowledge(kc->knowledge, kc->values);
			knowledges.push_back(k);
		}
	}
};

class Action {
public:
	list<Consideration*> considerations;
	string name;

	Action() {}
	Action(string n, list<Consideration*> c) {
		name = n;
		considerations = c;
	}
};

class Agent {
public:
	BehaviorSet* behaviorSet;
	map<Knowledge, vector<float>> knowledgebase;
	map<Precondition, bool> conditions;
	list<Action> possibleActions;
	Action winningAction;

	Agent() {}

	void SetKnowledge(Knowledge knowledge, vector<float> values) {
		knowledgebase[knowledge] = values;
	}

	void SetConditions(Precondition precondition, bool state) {
		conditions[precondition] = state;
	}

	bool CheckPreconditions(list<Precondition> preconditions) {
		for (Precondition p : preconditions) {
			if (conditions[p] == false) {
				return false;
			}
			else {
				return true;
			}
		}
	}

	float CalculateUtility(list<Consideration*> cons) {
		float utility = 1;
		for (Consideration* con : cons) {
			utility = utility * CalculateUtilityPerConsideration(con);
		}
		return utility;
	};

	float CalculateUtilityPerConsideration(Consideration* con) {
		if (CheckPreconditions(con->preconditions) == false) {
			return 0;
		}
		else {
			float x, min, max;
			x = knowledgebase[con->knowledge][0];
			min = con->input->inputParams[0];
			max = con->input->inputParams[1];
			if (x < min)
				x = min;
			if (x > max)
				x = max;
			x = con->input->Axis(percent, x);

			vector<float> resCurve = con->responseCurve;
			float m, k, b, c;
			m = resCurve[1];
			k = resCurve[2];
			b = resCurve[3];
			c = resCurve[4];

			// linear curve
			x = x - b;
			x = x * m;
			x = x + c;
			return x;
		}
	}

	void CalculateWinningAction() {
		float temp = -1;
		for (Action a : possibleActions) {
			float aValue = CalculateUtility(a.considerations);
			if (aValue > temp) {
				winningAction = a;
				temp = aValue;
			}
		}
	}
};

class Considerations {
public:
	Consideration* hungry, * thirsty, * bored;
	list<Consideration*> shouldEat, shouldDrink, shouldGoToKitchen, shouldPlay;

	Considerations(Agent* agent) {
		hungry = new Consideration(
			new InputAxis(agent, new KnowledgeConstructor(fixedRange, hunger,
				vector<float>{0, 0, 10})),
			1, 1, 1, 0, 0, list<Precondition>(isInKitchen));
		thirsty = new Consideration(
			new InputAxis(agent, new KnowledgeConstructor(fixedRange, thirst,
				vector<float>{0, 0, 10})),
			1, 1, 1, 0, 0, list<Precondition>(isInKitchen));
		bored = new Consideration(
			new InputAxis(agent,
				new KnowledgeConstructor(fixedRange, boredom,
					vector<float>{10, 0, 10})),
			1, 1, 1, 0, 0, list<Precondition>(none));

		shouldEat = { hungry };
		shouldDrink = { thirsty };
		shouldGoToKitchen = { hungry, thirsty };
		shouldPlay = { bored };
	}
};

class Actions {
public:
	Action eat;
	Action drink;
	Action goToKitchen;
	Action play;

	Actions(Agent* a) {
		Considerations cons = Considerations(a);
		eat = Action("eat", cons.shouldEat);
		drink = Action("drink", cons.shouldDrink);
		goToKitchen = Action("go to kitchen", cons.shouldGoToKitchen);
		play = Action("play", cons.shouldPlay);
	}
};

class BehaviorSet {
public:
	void SetAction(Agent* agent, Action action) {
		agent->possibleActions.push_back(action);
		for (Consideration* c : action.considerations) {
			agent->SetKnowledge(c->knowledge, c->values);
		}
	}

	// make macro for consideration list construction
	BehaviorSet(Agent* agent, Behavior behavior) {
		Actions actions = Actions(agent);
		switch (behavior) {
		case meetNeeds:
			//     SetAction(agent, actions.eat);
			//     SetAction(agent, actions.drink);
			SetAction(agent, actions.goToKitchen);
			SetAction(agent, actions.play);
			break;
		case skate:
			break;
		}
	};
};
