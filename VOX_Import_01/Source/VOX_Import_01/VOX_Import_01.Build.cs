// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VOX_Import_01 : ModuleRules
{
	public VOX_Import_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
