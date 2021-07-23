extern "C" {
#include "z_en_hs.hpp"

#define FLAGS 0x00000009

void EnHs_Init(Actor* actor, GameState* state);
void EnHs_Destroy(Actor* actor, GameState* state);
void EnHs_Update(Actor* actor, GameState* state);
void EnHs_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Hs_InitVars = {
    ACTOR_EN_HS,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_HS,
    sizeof(EnHs),
    (ActorFunc)EnHs_Init,
    (ActorFunc)EnHs_Destroy,
    (ActorFunc)EnHs_Update,
    (ActorFunc)EnHs_Draw,
};
*/
}