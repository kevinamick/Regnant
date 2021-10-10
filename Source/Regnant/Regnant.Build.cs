// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Regnant : ModuleRules
{
	public Regnant(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "PhysX", "APEX" });
	}
}
