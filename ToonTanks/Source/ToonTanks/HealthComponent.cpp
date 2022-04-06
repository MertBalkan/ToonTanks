#include "HealthComponent.h"

#include "Kismet/GameplayStatics.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth;

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::DamageTaken); //bounding callback function to the delegate
	ToonTanksGameMode = Cast<AToonTanksGameMode>(UGameplayStatics::GetGameMode(this));
	
}

void UHealthComponent::DamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* Instigator, AActor* DamageCauser)
{
	if(Damage <= 0.0f) return;

	Health-=Damage;
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, FString::Printf(TEXT("%s's Health:%f"), *this->GetOwner()->GetName(), Health));

	if(Health <= 0.0f && ToonTanksGameMode) ToonTanksGameMode->ActorDied(GetOwner());
	
}

void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}