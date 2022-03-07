// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticActor.h"

// Sets default values
AStaticActor::AStaticActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// testing for git
}

// Called when the game starts or when spawned
void AStaticActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStaticActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

