extern "C" {
#include "z_actor_1da.hpp"

#define FLAGS 0x00000010

void Actor1DA_Init(Actor* actor, GameState* state);
void Actor1DA_Destroy(Actor* actor, GameState* state);
void Actor1DA_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Actor_1DA.data.o")

ActorInit Actor_1DA_InitVars = {
    ACTOR_1DA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(Actor1DA),
    (ActorFunc)Actor1DA_Init,
    (ActorFunc)Actor1DA_Destroy,
    (ActorFunc)Actor1DA_Update,
    NULL,
};

GLOBAL_ASM("asm/Actor1DA_Init.s")

GLOBAL_ASM("asm/Actor1DA_Destroy.s")

GLOBAL_ASM("asm/Actor1DA_Update.s")
}
