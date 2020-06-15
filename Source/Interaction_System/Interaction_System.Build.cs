// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Interaction_System : ModuleRules
{
	public Interaction_System(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
