#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
private:
	class ATank* Tank;
	FTimerHandle FireRateTimerHandle;

	UPROPERTY(Category="Combat", EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	float FiringRange = 300.0f;
	float FireRate = 2.0f; 
	
	void CheckFireCondition();
	bool InFireRange() const;
};