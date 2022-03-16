// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
public:
	ATank();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(Category="Movement", EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
	float TankMoveSpeed = 250.0f;

	UPROPERTY(Category="Movement", EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess ="true"))
	float TurnRate = 45.0f;
	
	UPROPERTY(Category="Tank Components", BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess="true"))
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(Category="Tank Components", BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess="true"))
	class UCameraComponent* CameraComponent;

	void Move(float Value);
	void Turn(float Value);
};
