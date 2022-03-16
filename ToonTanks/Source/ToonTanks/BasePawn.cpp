#include "BasePawn.h"
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

void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
}

void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
