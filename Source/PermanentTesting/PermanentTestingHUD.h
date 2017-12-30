// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PermanentTestingHUD.generated.h"

UCLASS()
class APermanentTestingHUD : public AHUD
{
	GENERATED_BODY()

public:
	APermanentTestingHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

