extern "C" {
#include "z_en_brob.hpp"

#define FLAGS 0x00000005

void EnBrob_Init(Actor* actor, GameState* state);
void EnBrob_Destroy(Actor* actor, GameState* state);
void EnBrob_Update(Actor* actor, GameState* state);
void EnBrob_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Brob.data.o")

ActorInit En_Brob_InitVars = {
    ACTOR_EN_BROB,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BROB,
    sizeof(EnBrob),
    (ActorFunc)EnBrob_Init,
    (ActorFunc)EnBrob_Destroy,
    (ActorFunc)EnBrob_Update,
    (ActorFunc)EnBrob_Draw,
};

GLOBAL_ASM("asm/EnBrob_Init.s")

GLOBAL_ASM("asm/EnBrob_Destroy.s")

GLOBAL_ASM("asm/EnBrob_Update.s")

GLOBAL_ASM("asm/EnBrob_Draw.s")
}
