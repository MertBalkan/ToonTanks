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
	ABasePawn();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
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
