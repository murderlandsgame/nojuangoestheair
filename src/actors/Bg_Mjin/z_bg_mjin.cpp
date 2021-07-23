extern "C" {
#include "z_bg_mjin.hpp"

#define FLAGS 0x80400010

void BgMjin_Init(Actor* actor, GameState* state);
void BgMjin_Destroy(Actor* actor, GameState* state);
void BgMjin_Update(Actor* actor, GameState* state);

/*
ActorInit Bg_Mjin_InitVars = {
    ACTOR_BG_MJIN,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(BgMjin),
    (ActorFunc)BgMjin_Init,
    (ActorFunc)BgMjin_Destroy,
    (ActorFunc)BgMjin_Update,
    (ActorFunc)NULL,
};
*/
}