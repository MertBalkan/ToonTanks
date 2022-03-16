#include "Tank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

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
}

void ATank::Move(float Value)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("%f:"), Value));
	const FVector DeltaLocation(Value * TankMoveSpeed, 0, 0);
	AddActorLocalOffset(DeltaLocation);
}
