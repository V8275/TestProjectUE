#include "AEnvironmentActor.h"

AEnvironmentActor::AEnvironmentActor()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

void AEnvironmentActor::SetMesh(UStaticMesh* NewMesh)
{
	if (NewMesh)
	{
		MeshComponent->SetStaticMesh(NewMesh);
	}
}