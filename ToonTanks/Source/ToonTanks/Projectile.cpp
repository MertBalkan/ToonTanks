#include "Projectile.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	SM_Projectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Component"));
	RootComponent = SM_Projectile;
}
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

