#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_EnableGroundCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_EnableGroundCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Groups;
    
    UTresAnimNotifyState_Bonamik_EnableGroundCollision();
};

