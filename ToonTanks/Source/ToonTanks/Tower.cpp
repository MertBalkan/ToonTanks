#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// Find the distance to the tank, if it's not null
	if(Tank)
	{
		float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());
		// Check to see if the Tank is in range

		if(Distance <= FiringRange)
		{
			// If in range, rotate turret toward Tank
			RotateTurret(Tank->GetActorLocation());
		}
	}
}