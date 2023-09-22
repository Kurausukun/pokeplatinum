#ifndef POKEPLATINUM_CONSTANTS_BATTLE_SIDE_EFFECTS_H
#define POKEPLATINUM_CONSTANTS_BATTLE_SIDE_EFFECTS_H

#define MOVE_SIDE_EFFECT_BREAK_SCREENS      (1 << 23)
#define MOVE_SIDE_EFFECT_APPLY_WITH_NO_HP   (1 << 24)
#define MOVE_SIDE_EFFECT_CHECK_FLAGS        (1 << 25)
#define MOVE_SIDE_EFFECT_PROBABILISTIC      (1 << 26)
#define MOVE_SIDE_EFFECT_CANNOT_PREVENT     (1 << 27)
#define MOVE_SIDE_EFFECT_NO_DAMAGE_REQUIRED (1 << 28)
#define MOVE_SIDE_EFFECT_ON_HIT             (1 << 29)

#define MOVE_SIDE_EFFECT_TO_ATTACKER        (1 << 30)
#define MOVE_SIDE_EFFECT_TO_DEFENDER        (1 << 31)

#endif // POKEPLATINUM_CONSTANTS_BATTLE_SIDE_EFFECTS_H