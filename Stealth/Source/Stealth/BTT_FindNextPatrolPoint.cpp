// Fill out your copyright notice in the Description page of Project Settings.

#include "BTT_FindNextPatrolPoint.h"
#include "AITargetPoint.h"
#include "AICharacterController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTT_FindNextPatrolPoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAICharacterController* AICon = Cast<AAICharacterController>(OwnerComp.GetAIOwner());

	/*If the Controller is valid:
	1)Get the Blackboard Component and the Current Point of the bot
	*/
	if (AICon)
	{

		UBlackboardComponent* BlackboardComp = AICon->GetBlackboardComp();

		TArray<AActor*> AvailableTargetPoints = AICon->GetAvailableTargetPoints();
		int CurrentIndex = BlackboardComp->GetValueAsInt("CurrentIndex");
		int NextIndex = (CurrentIndex+1) % AvailableTargetPoints.Num();

		AAITargetPoint* NextTargetPoint = Cast<AAITargetPoint>(AvailableTargetPoints[NextIndex]);

		BlackboardComp->SetValueAsInt("CurrentIndex", NextIndex);
		
		BlackboardComp->SetValueAsObject("LocationToGo", NextTargetPoint);

		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}

