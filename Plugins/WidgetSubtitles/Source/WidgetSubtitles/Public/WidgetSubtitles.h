// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Engine/EngineTypes.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerPickedUpItem);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubtitleManagerDelegate, const FText&)


//UCLASS()
class FWidgetSubtitlesModule : public IModuleInterface
{
public:
	/** HACK: Delegate for allowing displays to hijack subtitle text from the subtitle manager and get around the Canvas display */
	//UDELEGATE(BlueprintAuthorityOnly);
	//UDELEGATE()
	
	UFUNCTION()
	void ForwardDelegate(const FText& SubtitleText);


	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	//FSubtitleManagerDelegate SubtitleDelegate;
};
