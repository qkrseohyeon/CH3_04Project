// Fill out your copyright notice in the Description page of Project Settings.


#include "CH3PlayerController.h"
#include "EnhancedInputSubsystems.h"

ACH3PlayerController::ACH3PlayerController()
	:InputMappingContext(nullptr),
	MoveAction(nullptr),
	LookAction(nullptr),
	FlyAction(nullptr),
	RollAction(nullptr)
{
}

void ACH3PlayerController::BeginPlay()
{
	Super::BeginPlay();
	//IMCÈ°¼ºÈ­
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}


