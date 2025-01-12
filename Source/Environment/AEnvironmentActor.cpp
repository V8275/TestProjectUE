#include "AEnvironmentActor.h"

AEnvironmentActor::AEnvironmentActor()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}