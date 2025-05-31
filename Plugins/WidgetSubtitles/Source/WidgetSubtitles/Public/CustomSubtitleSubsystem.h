// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CustomSubtitleSubsystem.generated.h"

/**
 * 
 */
UDELEGATE(BlueprintCallable)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubtitleDelegate, const FText&, SubtitleText);


UCLASS()
class WIDGETSUBTITLES_API UCustomSubtitleSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FSubtitleDelegate SubtitleDelegate;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

private:
	void ForwardDelegate(const FText& SubtitleText);
};

//class WIDGETSUBTITLES_API UCustomSubtitleSubsystem : public UGameInstanceSubsystem
//{
//	GENERATED_BODY()
//	
//};
