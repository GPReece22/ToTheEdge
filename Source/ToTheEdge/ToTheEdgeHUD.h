// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ToTheEdgeHUD.generated.h"

UCLASS()
class AToTheEdgeHUD : public AHUD
{
	GENERATED_BODY()

public:
	AToTheEdgeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

