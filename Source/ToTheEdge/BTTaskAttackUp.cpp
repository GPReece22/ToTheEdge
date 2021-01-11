// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskAttackUp.h"

EBTNodeResult::Type UBTTaskAttackUp::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::Succeeded;
}

void UBTTaskAttackUp::OnGameplayTaskActivated(UGameplayTask& task)
{
	//got to be included to stop the linker failing
}


