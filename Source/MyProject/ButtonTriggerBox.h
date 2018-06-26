// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "ButtonTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AButtonTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	
	virtual void BeginPlay() override;

public:
	AButtonTriggerBox();

	UFUNCTION()
	void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, AActor* OtherActor);
	
	
	
};
