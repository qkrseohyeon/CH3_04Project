// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CH3PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class CH3_04PROJECT_API ACH3PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACH3PlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inputs")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inputs")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inputs")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inputs")
	UInputAction* FlyAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inputs")
	UInputAction* RollAction;

protected:
	virtual void BeginPlay() override;
	
};
