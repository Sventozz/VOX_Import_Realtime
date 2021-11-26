// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VOX_Import_2HUD.generated.h"

UCLASS()
class AVOX_Import_2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AVOX_Import_2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

