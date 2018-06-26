// Fill out your copyright notice in the Description page of Project Settings.

#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text)
#define printf(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "ButtonTriggerBox.h"
#include "DrawDebugHelpers.h"

AButtonTriggerBox::AButtonTriggerBox()
{
	OnActorBeginOverlap.AddDynamic(this, &AButtonTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AButtonTriggerBox::OnOverlapEnd);
}

void AButtonTriggerBox::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

void AButtonTriggerBox::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if(OtherActor && (OtherActor != this))
	{
		print("Overlap Begin");
		printf("Overlapped Actor = %s", *OverlappedActor->GetName());


	}
}

void AButtonTriggerBox::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if(OtherActor && (OtherActor != this))
	{
		print("Overlap End");
		printf("Overlapped Actor = %s", *OtherActor->GetName());
	}
}