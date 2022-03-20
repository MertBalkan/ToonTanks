#include "Tank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

ATank::ATank()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	CameraComponent->SetupAttachment(SpringArmComponent);
}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATank::Move);
	PlayerInputComponent->BindAxis("Turn", this, &ATank::Turn);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATank::Fire);
}

void ATank::BeginPlay()
{
	Super::BeginPlay();
	PlayerControllerRef = Cast<APlayerController>(GetController());
}

void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (PlayerControllerRef)
	{
		PlayerControllerRef->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult);
		
		CursorPosition = HitResult.ImpactPoint;

		RotateTurret(CursorPosition);
		
		DrawDebugSphere
		(
			this->GetWorld(),
			CursorPosition,
			10.0f,
			30,
			FColor::Red,
			false,
			-1,
			0,
			3
		);
	}

	
}


void ATank::Move(float Value)
{
	const FVector DeltaLocation(Value * TankMoveSpeed, 0, 0);
	AddActorLocalOffset(DeltaLocation * UGameplayStatics::GetWorldDeltaSeconds(this), true);
}

void ATank::Turn(float Value)
{
	const FRotator DeltaRotation(0, Value * TurnRate * UGameplayStatics::GetWorldDeltaSeconds(this), 0);
	AddActorLocalRotation(DeltaRotation);
}
