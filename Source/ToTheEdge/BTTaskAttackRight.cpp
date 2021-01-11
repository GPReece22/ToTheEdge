// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskAttackRight.h"

EBTNodeResult::Type UBTTaskAttackRight::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::Succeeded;
}

void UBTTaskAttackRight::OnGameplayTaskActivated(UGameplayTask& task)
{
	//got to be included to stop the linker failing
}

