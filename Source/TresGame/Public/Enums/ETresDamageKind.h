#pragma once
#include "CoreMinimal.h"
#include "ETresDamageKind.generated.h"

UENUM(BlueprintType)
enum ETresDamageKind {
    TRES_DMG_KIND_NONE,
    TRES_DMG_KIND_SMALL,
    TRES_DMG_KIND_BLOW,
    TRES_DMG_KIND_SIDESPIN,
    TRES_DMG_KIND_VERTICALROLL,
    TRES_DMG_KIND_BILLIARD,
    TRES_DMG_KIND_FLOAT,
    TRES_DMG_KIND_TOSS,
    TRES_DMG_KIND_LAUNCH,
    TRES_DMG_KIND_BEAT,
    TRES_DMG_KIND_PARABOLA,
    TRES_DMG_KIND_PARABOLA_NO_RECOVERY,
    TRES_DMG_KIND_WITHOUT,
    TRES_DMG_KIND_RECOVER,
    TRES_DMG_KIND_KILL,
    TRES_DMG_KIND_STOP,
    TRES_DMG_KIND_MAGNET,
    TRES_DMG_KIND_CATCH,
    TRES_DMG_KIND_BIND,
    TRES_DMG_KIND_SUCTION,
    TRES_DMG_KIND_EAT,
    TRES_DMG_KIND_SHIELD_BLOW,
    TRES_DMG_KIND_SHIELD_TOSS,
    TRES_DMG_KIND_FREE_FLOW,
    TRES_DMG_KIND_SHOOTING_RIDE,
    TRES_DMG_KIND_MERRYGOROUND,
    TRES_DMG_KIND_ZEROGRAVITY,
    TRES_DMG_KIND_SWALLOW,
    TRES_DMG_KIND_UNIQUE,
    TRES_DMG_KIND_SWIRL_UP,
    TRES_DMG_KIND_POLE_SPIN,
    TRES_DMG_KIND_POLE_SWING,
    TRES_DMG_KIND_RALPH_BIND,
    TRES_DMG_KIND_VIKINGSHIP_FRONT,
    TRES_DMG_KIND_VIKINGSHIP_BACK,
    TRES_DMG_KIND_DRILL_BIND,
    TRES_DMG_KIND_YO_BIND,
    TRES_DMG_KIND_EX071_BIND,
    TRES_DMG_KIND_GOOFY_TORNADO,
    TRES_DMG_KIND_ENERGYBURST_ATTRACT,
    TRES_DMG_KIND_EX301_BIND,
    TRES_DMG_KIND_PUDDING_EAT,
    TRES_DMG_KIND_MAX UMETA(Hidden),
};

