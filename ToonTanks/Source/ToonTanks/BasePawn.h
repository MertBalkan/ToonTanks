// Fill out your copyright notice in the Description page of Project Settings.

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
	// Sets default values for this pawn's properties
	ABasePawn();

	UPROPERTY(VisibleInstanceOnly)
	int32 VisibleInstanceOnlyInt = 11;

	UPROPERTY(VisibleDefaultsOnly)
	int32 VisibleDefaultsOnlyInt = 5;

	UPROPERTY(EditDefaultsOnly)
	int32 EditDefaultsOnlyInt = 9;

	UPROPERTY(EditInstanceOnly, meta=(AllowPrivateAccess="true"))
	int32 EditInstanceOnlyInt = 14;

	UPROPERTY(Category="Deneme", VisibleAnywhere, BlueprintReadWrite)
	float Health = 100.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Deneme", meta=(AllowPrivateAccess="true"))
	int32 VisibleAnywhereInt = 20;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Deneme", meta=(AllowPrivateAccess="true"))
	int32 EditAnywhereInt = 20;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class UStaticMeshComponent* SM_BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class UStaticMeshComponent* SM_Turret;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Base Pawn Components", meta=(AllowPrivateAccess="true"))
	class USceneComponent* BulletSpawnPoint;
};
