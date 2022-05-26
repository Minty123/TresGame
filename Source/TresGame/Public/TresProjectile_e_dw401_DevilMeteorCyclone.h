#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw401_DevilMeteorCyclone.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_dw401_DevilMeteorCyclone : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PCHitEffData;
    
    ATresProjectile_e_dw401_DevilMeteorCyclone();
};

