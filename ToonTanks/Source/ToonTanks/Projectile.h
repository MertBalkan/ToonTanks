#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AProjectile();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(Category="Projectile Components", BlueprintReadOnly, VisibleDefaultsOnly, meta=(AllowPrivateAccess="true"))
	UStaticMeshComponent* SM_Projectile;

};
