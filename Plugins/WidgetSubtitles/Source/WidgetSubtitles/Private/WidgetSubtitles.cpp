// Copyright Epic Games, Inc. All Rights Reserved.

#include "WidgetSubtitles.h"
#include <SubtitleManager.h>

#define LOCTEXT_NAMESPACE "FWidgetSubtitlesModule"


void FWidgetSubtitlesModule::ForwardDelegate(const FText& SubtitleText)
{

	//if (SubtitleDelegate.IsBound()) {
		//SubtitleDelegate.Broadcast(SubtitleText);
	//}

}

void FWidgetSubtitlesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//FSubtitleManager::GetSubtitleManager()->OnSetSubtitleText().AddUObject(this, &FWidgetSubtitlesModule::ForwardDelegate);
}

void FWidgetSubtitlesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWidgetSubtitlesModule, WidgetSubtitles)