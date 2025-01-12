#include "AEnvironmentActor.h"

AEnvironmentActor::AEnvironmentActor()
{
	PrimaryActorTick.bCanEverTick = true;

	UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/PathToYourMesh.YourMesh'"));
	if (MeshAsset.Succeeded())
	{
		MeshComponent->SetStaticMesh(MeshAsset.Object);
	}
}

void AEnvironmentActor::SetMesh(UStaticMesh* NewMesh)
{
	if (UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(RootComponent))
	{
		MeshComponent->SetStaticMesh(NewMesh);
	}
}