// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskChasePlayer.h"

EBTNodeResult::Type UBTTaskChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::Succeeded;
}

void UBTTaskChasePlayer::OnGameplayTaskActivated(UGameplayTask& task)
{
	//got to be included to stop the linker failing
}