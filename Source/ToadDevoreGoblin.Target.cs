// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ToadDevoreGoblinTarget : TargetRules
{
	public ToadDevoreGoblinTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("ToadDevoreGoblin");
	}
}
