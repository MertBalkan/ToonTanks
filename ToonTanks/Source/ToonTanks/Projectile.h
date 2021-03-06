#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
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

	UPROPERTY(Category="Projectile Components", VisibleAnywhere, meta=(AllowPrivateAccess="true"))
	UProjectileMovementComponent* ProjectileMovementComponent;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp,
		AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere)
	float Damage = 50.0f;

	UPROPERTY(EditAnywhere, Category="Projectile Components")
	UParticleSystem* HitParticle;

	UPROPERTY(Category="Projectile Components", BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess="true"))
	UParticleSystemComponent* TrailsParticles;

	UPROPERTY(EditAnywhere, Category="Projectile Sounds")
	USoundBase* LaunchSound;
	
	UPROPERTY(EditAnywhere, Category="Projectile Sounds")
	USoundBase* HitSound;

	UPROPERTY(EditAnywhere, Category="Projectile Components")
	TSubclassOf<UCameraShakeBase> HitCameraShakeClass;
};