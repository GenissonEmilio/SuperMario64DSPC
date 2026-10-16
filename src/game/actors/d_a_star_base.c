// @symbol daStarBase_c_classInit
/* recovered: vtable identified, globals resolved, declarations from a shared header */
#include "decl_Actor.h"
#include "decl_ActorBase.h"
#include "decl_Model.h"
#include "decl_dCcAcPos_c.h"
#include "decl_ShadowModel.h"
#include "decl_common.h"
/* recovered: vtable identified, globals resolved */
/* resolved: VT0 = _ZTV12daStarBase_c */
/* Reconstructed source-style name: SM64DS proves daStarBase_c through RTTI,
 * allocation size, vtable identity, and the STARBASE registry profile;
 * later EAD lineage supplies classInit. Exact original spelling is not
 * preserved. Historical alias: StarMarker_Spawn. */
int *daStarBase_c_classInit(void)
{
    int *p = (int *)_ZN7fBase_cnwEj(476);
    if (p) {
        _ZN8dActor_cC2Ev(p);
        p[0] = (int)_ZTV12daStarBase_c;
        _ZN10dCcAcPos_cC1Ev((char *)p + 0xd4);
        _ZN5ModelC1Ev((char *)p + 0x114);
        _ZN17dExtShadowModel_cC1Ev((char *)p + 0x164);
    }
    return p;
}

int _ZTV12daStarBase_c[33] = {
    0x20eb204, 0x2011268, 0x2011244, 0x20eabcc, 0x2011220, 0x2011214, 0x20ead90, 0x2010fd4,
    0x2010fc8, 0x20eacb8, 0x2010f78, 0x2010f6c, 0x20eab8c, 0x204357c, 0x204349c, 0x2043494,
    0x20e6cf4, 0x20e6d34, 0x2010160, 0x2010154, 0x201014c, 0x2010148, 0x2010144, 0x2010140,
    0x201013c, 0x2010138, 0x2010134, 0x2010130, 0x201012c, 0x2010124, 0x20100dc, 0,
    0x210aa24
};
