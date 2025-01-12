#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AEnvironmentActor.generated.h"

UCLASS()
class AEnvironmentActor : public AActor
{
	GENERATED_BODY()

public:
	AEnvironmentActor();
	void SetMesh(UStaticMesh* NewMesh);

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;
};
