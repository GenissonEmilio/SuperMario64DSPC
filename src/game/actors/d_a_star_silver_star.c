// @symbol daStar_c_classInit_SILVER_STAR
/* recovered: vtable identified, globals resolved, declarations from a shared header */
#include "decl_ActorBase.h"
#include "decl_Enemy.h"
#include "decl_ModelAnim.h"
#include "decl_dCcAcPos_c.h"
#include "decl_ShadowModel.h"
#include "decl_dBgCh_Actr.h"
#include "decl_common.h"
/* recovered: vtable identified, globals resolved */
/* resolved: VT0 = _ZTV8daStar_c */
/* Reconstructed source-style name: SM64DS proves daStar_c through RTTI,
 * allocation size, vtable identity, and the SILVER_STAR registry profile;
 * later EAD lineage supplies classInit. Exact original spelling is not
 * preserved. Historical alias: SilverStar_Spawn. */
int *daStar_c_classInit_SILVER_STAR(void)
{
    int *p = (int *)_ZN7fBase_cnwEj(1220);
    if (p) {
        _ZN12dEnemyBase_cC2Ev(p);
        p[0] = (int)_ZTV8daStar_c;
        _ZN10dCcAcPos_cC1Ev((char *)p + 0x110);
        _ZN10dBgCh_ActrC1Ev((char *)p + 0x150);
        _ZN9ModelAnimC1Ev((char *)p + 0x30c);
        _ZN9ModelAnimC1Ev((char *)p + 0x370);
        _ZN17dExtShadowModel_cC1Ev((char *)p + 0x3d4);
    }
    return p;
}

/* .data 0x0210ac00..0x0210ac7c */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
int _ZTV8daTree_c[31] = {
    0x020ec22c, 0x02011268, 0x02011244, 0x020ec020, 0x02011220, 0x02011214, 0x020ec1d8, 0x02010fd4,
    0x02010fc8, 0x020ec0a4, 0x02010f78, 0x02010f6c, 0x020ec0a0, 0x0204357c, 0x0204349c, 0x02043494,
    0x020ebf8c, 0x020ebfcc, 0x02010160, 0x02010154, 0x0201014c, 0x02010148, 0x02010144, 0x02010140,
    0x0201013c, 0x02010138, 0x02010134, 0x02010130, 0x0201012c, 0x02010124, 0x020100dc,
};
#pragma section forcedata end
