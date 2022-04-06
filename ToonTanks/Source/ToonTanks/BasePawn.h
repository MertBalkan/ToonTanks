#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	ABasePawn();

	virtual void HandleDestruction();
	
protected:
	void RotateTurret(FVector LookAtTarget) const;
	void Fire();
	
	UPROPERTY(EditAnywhere, Category="Base Pawn Particles")
	UParticleSystem* DeathParticle;
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class UStaticMeshComponent* SM_BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class UStaticMeshComponent* SM_Turret;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class USceneComponent* BulletSpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Combat", meta=(AllowPrivateAccess="true"))
	TSubclassOf<class AProjectile> ProjectileClass;

};
