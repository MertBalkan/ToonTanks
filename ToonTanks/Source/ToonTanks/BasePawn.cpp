#include "BasePawn.h"

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

ABasePawn::ABasePawn()
{
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	RootComponent = CapsuleComponent;

	SM_BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	SM_BaseMesh->SetupAttachment(CapsuleComponent);

	SM_Turret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	SM_Turret->SetupAttachment(SM_BaseMesh);

	BulletSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Bullet Spawn Point"));
	BulletSpawnPoint->SetupAttachment(SM_Turret);
}

void ABasePawn::RotateTurret(const FVector LookAtTarget) const
{
	const FVector ToTarget = LookAtTarget - SM_Turret->GetComponentLocation();
	const FRotator LookAtRotation = FRotator(0.0f, ToTarget.Rotation().Yaw, 0.0f);

	SM_Turret->SetWorldRotation(LookAtRotation);
}

void ABasePawn::Fire()
{
	const FVector ProjectileSpawnPoint = BulletSpawnPoint->GetComponentLocation();
	DrawDebugSphere
	(
		GetWorld(),
		ProjectileSpawnPoint,
		25.0f,
		12,
		FColor::Green,
		false,
		3.0f,
		0,
		2
	);
}