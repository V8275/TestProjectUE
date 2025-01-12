#pragma once
#include "CoreMinimal.h"
#include "AEnvActor.h"
#include "GameFramework/Actor.h"
#include "AEnvironmentActor.generated.h"

UCLASS()
class AEnvironmentActor : public AAEnvActor
{
	GENERATED_BODY()

public:
	AEnvironmentActor();
	void SetMesh(UStaticMesh* NewMesh);

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;
};
