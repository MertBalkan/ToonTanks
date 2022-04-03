#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GetWorldTimerManager().SetTimer
	(
		FireRateTimerHandle,
		this,
		&ATower::CheckFireCondition,
		FireRate,
		true
	);
}
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(InFireRange())
	{
		// If in range, rotate turret toward Tank
		if(Tank)
		{
			RotateTurret(Tank->GetActorLocation());
		}
	}
}

void ATower::HandleDestruction()
{
	Super::HandleDestruction();
	Destroy();
}

void ATower::CheckFireCondition()
{
	if(InFireRange())
	{
		Fire();
	}
}

bool ATower::InFireRange() const
{
	float Distance = 0;
	
	// Find the distance to the tank, if it's not null
	if(Tank)
	{
		Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
	}
	return Distance <= FiringRange;
}
