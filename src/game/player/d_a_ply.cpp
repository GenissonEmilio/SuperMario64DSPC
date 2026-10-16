//cpp
// @symbol daPly_c_classInit
#include "Player.h"


extern "C" {
/* bss 0x0210e8d0..0x0210e8d8 */
#pragma force_active on
unsigned char data_ov002_0210e8d0[8];
#pragma force_active off
}

extern "C" {
void *_ZN7fBase_cnwEj(unsigned int size);
Player *_ZN6PlayerC1Ev(Player *player);

/* This address allocates and initializes a Player, but mwccarm cannot emit the
   old C3 spelling: its real constructors are C1/C2. Keep only the allocation
   boundary in C linkage and describe the object itself with the real type. */
/* Reconstructed source-style name: SM64DS proves daPly_c through RTTI,
 * allocation size, vtable identity, and the PLAYER registry profile;
 * later EAD lineage supplies classInit. Exact original spelling is not
 * preserved. Historical alias: Player_Spawn. */
Player *daPly_c_classInit()
{
    Player *player = (Player *)_ZN7fBase_cnwEj(sizeof(Player));
    if (!player)
        return player;

    return _ZN6PlayerC1Ev(player);
}
}
