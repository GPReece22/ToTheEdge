// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskAttackLeft.h"

EBTNodeResult::Type UBTTaskAttackLeft::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::Succeeded;
}

void UBTTaskAttackLeft::OnGameplayTaskActivated(UGameplayTask& task)
{
	//got to be included to stop the linker failing
}

