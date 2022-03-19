#include "Projectile.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	SM_Projectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Component"));
	RootComponent = SM_Projectile;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));

	ProjectileMovementComponent->InitialSpeed = 1000.0f;
	ProjectileMovementComponent->MaxSpeed = 1000.0f;
}
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

