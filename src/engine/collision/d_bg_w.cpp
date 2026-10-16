//cpp
/* leftovers:
 * The func_0203938c..020393d4 accessors and func_020396c0 / func_020396d0
 * retain their existing free-function interfaces for the query TUs and
 * derived colliders. Their original member/free-function form is not
 * established by the address names. Definitions retain their source order.
 * ShouldPassThroughImpl keeps the int* view of CLPS and the unsigned char*
 * view of the query. data_020a0c80 is the 0x18-entry enabled-collider
 * table Enable fills and dScStage_c::ResetMeshColliders clears.
 */
/* dBgW: root of the KCL collider family. Type name 0x02099370, typeinfo
 * 0x02099378, vtable 0x02099388, 13 slots. This TU also defines
 * dScStage_c::ResetMeshColliders and dBgCh::ShouldPassThroughImpl.
 */
#include "dBgW.h"
#include "dBgW_Kc.h"
#include "dBgCh.h"
#include "dScStage_c.h"
#include "dActor_c.h"
#include "decl_common.h"

extern "C" {
extern dBgW *data_020a0c80[];
extern int SurfaceInfo_TestFlag0x20(int *p);
extern int func_02037e38(unsigned int *p);
}

/* Preserve the address-based helper ABI while using the declared callback type. */
typedef void (*BeforeClsnCallback)(dBgW *, dActor_c *, dBgPi *, Vector3 *,
                                   Vector3_16 *, Vector3_16 *);

// @symbol func_020396d0
extern "C" void func_020396d0(int *collider, int faceDotThreshold)
{
    reinterpret_cast<dBgW_Kc *>(collider)->unk_44 = faceDotThreshold;
}

// @symbol func_020396c0
extern "C" void func_020396c0(void *collider, int edgeToleranceShift)
{
    dBgW_Kc *mesh = static_cast<dBgW_Kc *>(collider);
    if (edgeToleranceShift < 0) edgeToleranceShift = 0;
    mesh->unk_48 = edgeToleranceShift;
}

// @symbol _ZN4dBgWC2Ev
dBgW::dBgW()
{
    func_02039624((char *)this);
}

// @symbol _ZN4dBgWD2Ev
// @symbol _ZN4dBgWD0Ev
// @symbol _ZN4dBgWD1Ev
dBgW::~dBgW()
{
}

// @symbol func_02039624
extern "C" void func_02039624(char *object)
{
    dBgW *collider = (dBgW *)object;
    collider->owner = 0;
    collider->ownerUniqueID = -1;
    collider->slotIdx = 0x18;
    collider->beforeClsnCallback = 0;
    collider->unk_1c = 0;
    collider->unk_0c = -0x1000;
    collider->unk_10 = 0;
}

// @symbol _ZN4dBgW9Virtual08Ev
void dBgW::Virtual08()
{
}

// @symbol func_020395fc
extern "C" void func_020395fc(dBgW *collider, dActor_c *actor)
{
    if (actor == 0) {
        collider->owner = 0;
        collider->ownerUniqueID = -1;
    } else {
        collider->owner = actor;
        collider->ownerUniqueID = actor->uniqueID;
    }
}

// @symbol _ZN5dBgCh21ShouldPassThroughImplEPvRK4CLPSRKS_b
/* Special surface rules use their own query flags. If no rule applies,
   the ordinary-surface flag decides whether the query ignores this surface. */
bool dBgCh::ShouldPassThroughImpl(void *unused, const CLPS &surfaceProperties,
                                  const dBgCh &query, bool checkType14)
{
    int *clpsWords = (int *)&surfaceProperties;
    unsigned char *queryBytes = (unsigned char *)&query;
    int hasSurfaceRule = 0;

    if (SurfaceInfo_TestFlag0x20(clpsWords)) {
        hasSurfaceRule = 1;
        if (func_0203547c(queryBytes) == 0) return hasSurfaceRule;
    }
    if (func_02037e20(clpsWords)) {
        hasSurfaceRule = 1;
        if (func_0203543c(queryBytes) == 0) return hasSurfaceRule;
    }
    if (func_02037e2c(clpsWords)) {
        hasSurfaceRule = 1;
        if (func_0203545c(queryBytes) != 0) return hasSurfaceRule;
    }
    if (func_02037e14(clpsWords)) {
        hasSurfaceRule = 1;
        if (func_0203545c(queryBytes) == 0) return hasSurfaceRule;
    }
    if (func_02037e38((unsigned int *)clpsWords) == 0x11) {
        hasSurfaceRule = 1;
        if (func_02035408(queryBytes) != 0) return hasSurfaceRule;
    }
    if (checkType14 != 0 && func_02037e38((unsigned int *)clpsWords) == 0x14) {
        hasSurfaceRule = 1;
        if (func_020353d4(queryBytes) != 0) return hasSurfaceRule;
    }
    if (hasSurfaceRule == 0) {
        if (func_020354b0(queryBytes) == 0) return 1;
    }
    return 0;
}

// @symbol _ZN4dBgW10DetectClsnER9dBgCh_Gnd
int dBgW::DetectClsn(dBgCh_Gnd &ray)
{
    return 0;
}

// @symbol _ZN4dBgW10DetectClsnER9dBgCh_Lin
int dBgW::DetectClsn(dBgCh_Lin &ray)
{
    return 0;
}

// @symbol _ZN4dBgW10DetectClsnER12dBgCh_SphCrr
int dBgW::DetectClsn(dBgCh_SphCrr &sphere)
{
    return 0;
}

// @symbol _ZN4dBgW10BeforeClsnER5dBgPiP8dActor_cR7Vector3P10Vector3_16S7_
void dBgW::BeforeClsn(dBgPi &res, dActor_c *actor, Vector3 &pos,
                                  Vector3_16 *motionAng, Vector3_16 *ang)
{
    beforeClsnCallback(this, actor, &res, &pos, motionAng, ang);
}

// @symbol _ZN4dBgW12TransformPosERK7Vector3RS0_
int dBgW::TransformPos(const Vector3 &pos, Vector3 &res)
{
    return 0;
}

// @symbol _ZN4dBgW14GetAngularVelYEv
s16 dBgW::GetAngularVelY()
{
    return 0;
}

// @symbol _ZN4dBgW11GetVelocityER7Vector3
void dBgW::GetVelocity(Vector3 &res)
{
    res.z = 0;
    res.y = res.z;
    res.x = res.y;
}

// @symbol func_02039404
extern "C" int func_02039404(dBgW *collider)
{
    return collider->slotIdx;
}

// @symbol func_020393fc
extern "C" void func_020393fc(dBgW *collider, int slot)
{
    collider->slotIdx = slot;
}

// @symbol func_020393f0
extern "C" void func_020393f0(dBgW *collider)
{
    collider->slotIdx = 0x18;
}

// @symbol _ZN4dBgW9IsEnabledEv
int dBgW::IsEnabled()
{
    u8 v = slotIdx;
    if (v != 0x18)
        return 1;
    return 0;
}

// @symbol func_020393d4
extern "C" void func_020393d4(int *collider, int callbackAddress)
{
    reinterpret_cast<dBgW *>(collider)->beforeClsnCallback =
        reinterpret_cast<BeforeClsnCallback>(callbackAddress);
}

// @symbol func_020393cc
extern "C" int func_020393cc(int *collider)
{
    return reinterpret_cast<int>(reinterpret_cast<dBgW *>(collider)->beforeClsnCallback);
}

// @symbol func_020393c4
extern "C" void func_020393c4(int *collider, int callbackAddress)
{
    reinterpret_cast<dBgW *>(collider)->unk_1c = callbackAddress;
}

// @symbol func_020393bc
extern "C" int func_020393bc(int *collider)
{
    return reinterpret_cast<dBgW *>(collider)->unk_1c;
}

// @symbol func_020393b4
extern "C" int func_020393b4(int *collider)
{
    return reinterpret_cast<int>(reinterpret_cast<dBgW *>(collider)->owner);
}

// @symbol func_020393ac
extern "C" int func_020393ac(int *collider)
{
    return reinterpret_cast<dBgW *>(collider)->ownerUniqueID;
}

// @symbol func_020393a4
extern "C" void func_020393a4(int *collider, int clipDistance)
{
    reinterpret_cast<dBgW *>(collider)->unk_0c = clipDistance;
}

// @symbol func_0203939c
extern "C" int func_0203939c(int *collider)
{
    return reinterpret_cast<dBgW *>(collider)->unk_0c;
}

// @symbol func_02039394
extern "C" void func_02039394(int *collider, int clipOffsetY)
{
    reinterpret_cast<dBgW *>(collider)->unk_10 = clipOffsetY;
}

// @symbol func_0203938c
extern "C" int func_0203938c(int *collider)
{
    return reinterpret_cast<dBgW *>(collider)->unk_10;
}

// @symbol _ZN4dBgW22UpdatePosWithTransformERS_P8dActor_cR5dBgPiR7Vector3P10Vector3_16S8_
void dBgW::UpdatePosWithTransform(dBgW &clsn, dActor_c *clsnActor,
                                              dBgPi &res, Vector3 &pos,
                                              Vector3_16 *motionAng, Vector3_16 *ang)
{
    Vector3 local;
    local.x = pos.x;
    local.y = pos.y;
    local.z = pos.z;
    if (clsn.TransformPos(local, pos) == 0)
        return;
    return;
}

// @symbol _ZN4dBgW25UpdateAngsWithAngularVelYERS_P8dActor_cR5dBgPiR7Vector3P10Vector3_16S8_
void dBgW::UpdateAngsWithAngularVelY(dBgW &clsn, dActor_c *clsnActor,
                                                 dBgPi &res, Vector3 &pos,
                                                 Vector3_16 *motionAng, Vector3_16 *ang)
{
    int angularVelocityY = clsn.GetAngularVelY();
    if (ang) {
        short *angleY = (short *)(&ang->y);
        *angleY = *angleY + angularVelocityY;
    }
    if (motionAng) {
        short *angleY = (short *)(&motionAng->y);
        *angleY = *angleY + angularVelocityY;
    }
}

// @symbol _ZN4dBgW16UpdatePosAndAngsERS_P8dActor_cR5dBgPiR7Vector3P10Vector3_16S8_
void dBgW::UpdatePosAndAngs(dBgW &clsn, dActor_c *clsnActor,
                                        dBgPi &res, Vector3 &pos,
                                        Vector3_16 *motionAng, Vector3_16 *ang)
{
    UpdatePosWithTransform(clsn, clsnActor, res, pos, motionAng, ang);
    UpdateAngsWithAngularVelY(clsn, clsnActor, res, pos, motionAng, ang);
}

// @symbol _ZN4dBgW21UpdatePosWithVelocityERS_P8dActor_cR5dBgPiR7Vector3P10Vector3_16S8_
void dBgW::UpdatePosWithVelocity(dBgW &clsn, dActor_c *clsnActor,
                                             dBgPi &res, Vector3 &pos,
                                             Vector3_16 *motionAng, Vector3_16 *ang)
{
    Vector3 velocity;
    clsn.GetVelocity(velocity);
    pos.x = pos.x + velocity.x;
    {
        /* Preserve the separate component address used for this read/write. */
        int *positionY = (int *)(&pos.y);
        *positionY = *positionY + velocity.y;
    }
    {
        int *positionZ = (int *)(&pos.z);
        *positionZ = *positionZ + velocity.z;
    }
}

// @symbol func_02039218
extern "C" void func_02039218(void)
{
    int slot;
    for (slot = 0; slot < 0x18; slot++) data_020a0c80[slot] = 0;
}

// @symbol _ZN10dScStage_c18ResetMeshCollidersEv
void dScStage_c::ResetMeshColliders()
{
    int slot;
    for (slot = 0; slot < 0x18; slot++) data_020a0c80[slot] = 0;
}

// @symbol func_020391f0
extern "C" void func_020391f0(void)
{
}

// @symbol _ZN4dBgW6EnableEP8dActor_c
int dBgW::Enable(dActor_c *actor)
{
    s32 slot = 0;
    for (;;) {
        if (data_020a0c80[slot] == 0) {
            func_020395fc(this, actor);
            func_020393fc(this, slot);
            data_020a0c80[slot] = this;
            return 1;
        }
        slot++;
        if (slot >= 0x18)
            break;
    }
    return 0;
}

// @symbol _ZN4dBgW7DisableEv
int dBgW::Disable()
{
    int slot = func_02039404(this);
    if (slot != 0x18) {
        func_020393f0(this);
        data_020a0c80[slot] = 0;
    }
    return 1;
}
