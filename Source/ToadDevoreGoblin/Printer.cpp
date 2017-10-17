// Fill out your copyright notice in the Description page of Project Settings.

#include "Printer.h"
#include "Engine.h"


// Sets default values
APrinter::APrinter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrinter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrinter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APrinter::FPrintOutLog()
{
	UE_LOG(LogTemp, Warning, TEXT("Your message"));
}

void APrinter::FPrintToScreen()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(Always)
	}
}

