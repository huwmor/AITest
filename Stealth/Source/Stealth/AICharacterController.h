// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AICharacterController.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AAICharacterController : public AAIController
{
	GENERATED_BODY()

	class UBehaviorTreeComponent * BehaviorComp;
	class UBlackboardComponent * BlackboardComp;
	
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName LocationToGoKey;

	TArray<AActor*> AITargetPoints;

	virtual void Possess(APawn* Pawn) override;

public:

	/*----------Constructor----------*/
	AAICharacterController();

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }

	FORCEINLINE TArray<AActor*> GetAvailableTargetPoints() { return AITargetPoints; }
};
