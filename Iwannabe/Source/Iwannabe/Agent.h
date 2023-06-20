// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>
#include <vector>
#include <list>
#include "Knowledgebase.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Agent.generated.h"

UCLASS()
class IWANNABE_API AAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent();
	BehaviorSet* behaviorSet;
	map<Knowledge, vector<float>> knowledgebase;
	map<Precondition, bool> conditions;
	list<Action> possibleActions;
	Action winningAction;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetKnowledge(Knowledge knowledge, vector<float> values);

	void SetConditions(Precondition precondition, bool state);
};
