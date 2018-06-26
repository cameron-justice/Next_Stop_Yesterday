// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CharacterInfoComponent.generated.h"

UENUM(BlueprintType)
enum class ERaceEnum : uint8
{
	RE_African			UMETA(DisplayName = "African"),
	RE_Antarctican		UMETA(DisplayName = "Antarctican"),
	RE_Asian			UMETA(DisplayName = "Asian"),
	RE_Australian		UMETA(DisplayName = "Australian"),
	RE_European			UMETA(DisplayName = "European"),
	RE_NorthAmerican	UMETA(DisplayName = "North American"),
	RE_SouthAmerican	UMETA(DisplayName = "South American")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UCharacterInfoComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterInfoComponent();

	UPROPERTY(EditAnywhere, Category="Character Info")
	FString PlayerName;
	UPROPERTY(EditAnywhere, Category = "Character Info")
	uint8 PlayerAge;
	UPROPERTY(EditAnywhere, Category = "Character Info")
	ERaceEnum race;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/*
	UFUNCTION(BlueprintGetter)
	FString GetPlayerName();

	UFUNCTION(BlueprintGetter)
	uint8 GetPlayerAge();

	UFUNCTION(BlueprintGetter)
	FString GetPlayerRace();
	*/
	
};
