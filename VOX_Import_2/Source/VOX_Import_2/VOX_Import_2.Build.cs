// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VOX_Import_2 : ModuleRules
{
	public VOX_Import_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
