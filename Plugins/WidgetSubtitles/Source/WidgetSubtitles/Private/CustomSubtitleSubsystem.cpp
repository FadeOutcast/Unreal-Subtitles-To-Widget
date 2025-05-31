// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomSubtitleSubsystem.h"
#include <SubtitleManager.h>

void UCustomSubtitleSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Display, TEXT("Subtitle Subsystem Initialized"));
	FSubtitleManager::GetSubtitleManager()->OnSetSubtitleText().AddUObject(this, &UCustomSubtitleSubsystem::ForwardDelegate);

}

void UCustomSubtitleSubsystem::ForwardDelegate(const FText& SubtitleText)
{
	if (SubtitleDelegate.IsBound()) {
		SubtitleDelegate.Broadcast(SubtitleText);
	}

}