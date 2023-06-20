// Fill out your copyright notice in the Description page of Project Settings.


#include "Agent.h"

// Sets default values
AAgent::AAgent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void AAgent::SetKnowledge(Knowledge knowledge, vector<float> values) {
	knowledgebase[knowledge] = values;
}

void AAgent::SetConditions(Precondition precondition, bool state) {
	conditions[precondition] = state;
}

bool AAgent::CheckPreconditions(list<Precondition> preconditions) {
	for (Precondition p : preconditions) {
		if (conditions[p] == false) {
			return false;
		}
		else {
			return true;
		}
	}
}

float AAgent::CalculateUtility(list<Consideration*> cons) {
	float utility = 1;
	for (Consideration* con : cons) {
		utility = utility * CalculateUtilityPerConsideration(con);
	}
	return utility;
};

float AAgent::CalculateUtilityPerConsideration(Consideration* con) {
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

void AAgent::CalculateWinningAction() {
	float temp = -1;
	for (Action a : possibleActions) {
		float aValue = CalculateUtility(a.considerations);
		if (aValue > temp) {
			winningAction = a;
			temp = aValue;
		}
	}
}


