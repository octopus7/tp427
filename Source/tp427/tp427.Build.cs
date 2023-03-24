// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tp427 : ModuleRules
{
	public tp427(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
