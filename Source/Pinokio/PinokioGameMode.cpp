// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PinokioGameMode.h"
#include "PinokioCharacter.h"

APinokioGameMode::APinokioGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APinokioCharacter::StaticClass();	
}
