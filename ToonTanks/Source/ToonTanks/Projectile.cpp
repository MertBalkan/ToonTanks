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

	SM_Projectile->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	
}
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green,
		FString::Printf(TEXT("HitComp:%s OtherActor:%s OtherComp:%s"),
			*HitComp->GetName(), *OtherActor->GetName(), *OtherComp->GetName()));
}

