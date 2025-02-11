#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX359_ComboTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_ComboTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMaxTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMinTractionDistance;
    
    TRESGAME_API FEX359_ComboTractionInfo();
};

