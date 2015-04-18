// Fill out your copyright notice in the Description page of Project Settings.

#include "Chromodynamic.h"
#include "BasicChromoTile.h"


// Sets default values
ABasicChromoTile::ABasicChromoTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicChromoTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicChromoTile::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

