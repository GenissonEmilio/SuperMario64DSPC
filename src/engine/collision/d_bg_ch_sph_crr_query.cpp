//cpp
/* Collision middle run, arm9 0x02037dc4..0x02039140.
 * func_02037dc4 opens it and dBgCh_Gnd::DetectClsn closes it.
 * dBgW::Disable at 0x02039140 starts the next file.
 * d_bg_ch_lin.cpp and d_bg_ch_sph_crr.cpp stay separate: their this-adjustment
 * thunks are anchored at the end of those files, and this stretch has none.
 *
 * Deferred codegen emits .text in reverse source order, so the definitions
 * below run ROM-descending. dBgPc, dBgPi and CLPS_BlockRef keep the
 * lifecycle order the compiler emits for each class.
 *
 * The query scans keep the spellings that match: an integer centre
 * address, the zero/one locals, and data_020a0c80 by its address name.
 * func_02037de8 copies both CLPS words before storing either, then copies
 * the three normal components in order.
 */

#include "dBgCh_Lin.h"
#include "dBgCh_SphCrr.h"
#include "dBgCh_Gnd.h"
#include "dBgPc.h"
#include "dBgPi.h"
#include "CLPS_BlockRef.h"
#include "dBgW.h"
#include "dActor_c.h"
#include "SurfaceInfo.h"
#include "common.h"

extern "C" {
int func_02035354(void *a, void *b);
Fix12i Vec3_Dist(const Vector3 *a, const Vector3 *b);
int func_020393b4(void *p);
int func_020393ac(void *p);
int func_0203939c(void *p);
int func_0203938c(void *p);
int func_020393cc(void *p);
int func_020393bc(void *p);
void func_02037464(void *c);
void func_02037e9c(char *p);
void func_02037de8(int *dst, int *src);
int func_02038298(void *arg);
void _ZN10dBgCh_Actr20UpdateExtraContinousEv(void);
void _ZN10dBgCh_Actr22UpdateContinuousNoLavaEv(void *self);
void func_02036acc(void);
void _ZN10dBgCh_Actr22UpdateDiscreteNoLava_2Ev(void);
void _ZN10dBgCh_Actr16UpdateContinuousEv(void *self);
void _ZN10dBgCh_Actr20UpdateDiscreteNoLavaEv(void);
extern dBgW *data_020a0c80[];
extern char data_020a0c78;
}

/* Ground and line scans use the real dBgW virtual interface and dActor_c
   clip-volume fields, as the sphere scans do below. Vec3 remains the plain
   three-word copy view. PcAB/PcObj describe func_02037eb0's records;
   ColliderCallback retains its pending stored-callback reconstruction. Position reads
   keep the measured three-word byte view of the actor: direct mPosX/Y/Z
   accesses remove one address-setup instruction from each of three scans. */
struct Vec3 { int x, y, z; };

struct PcAB { int clpsWord0; int clpsWord1; };
struct PcObj { int clpsWord0; int clpsWord1; struct Vector3 normal; };

typedef void (*ColliderCallback)(int collider, int owner, int argument);

extern "C" int Vec3_HorzDist(const Vector3*, const Vector3*);

// @symbol _ZN9dBgCh_Gnd10DetectClsnEv
int dBgCh_Gnd::DetectClsn()
{
    int hit = 0;
    func_02037464(this);
    dBgW* firstCollider = (dBgW *)data_020a0c80[0];
    if (firstCollider != 0 && func_02035354(this, (void *)func_020393b4(firstCollider)) == 0 && firstCollider->DetectClsn(*this) != 0) {
        dBgPi::SetCollider(0, func_020393ac(firstCollider), (dActor_c *)func_020393b4(firstCollider), (dBgW *)firstCollider);
        hit = 1;
    }
    int flag = 1;
    int one = 1;
    Vec3 clipCentre;
    for (int slot = 1; slot < 24; slot++) {
        dBgW* collider = (dBgW *)data_020a0c80[slot];
        if (collider == 0) continue;
        dActor_c* owner = (dActor_c *)func_020393b4(collider);
        if (func_02035354(this, owner) != 0) continue;
        if (owner != 0 && ((owner->mFlags & 2) ? flag : 0) != 0) {
            const char *position = (const char *)owner + 0x5c;
            clipCentre.x = *(const s32 *)(position + 0);
            clipCentre.y = *(const s32 *)(position + 4);
            clipCentre.z = *(const s32 *)(position + 8);
            int clipDist = func_0203939c(collider);
            if (clipDist == -0x1000) {
                int clipRadius = owner->mClipRadius;
                clipCentre.y = clipCentre.y + owner->mClipOffsetY;
                clipDist = clipRadius << 3;
            } else {
                clipCentre.y = clipCentre.y + func_0203938c(collider);
            }
            Vector3* queryPos = (Vector3*)((long long)(int)&this->pos);
            if (queryPos->y < clipCentre.y - clipDist) continue;
            if (Vec3_HorzDist(queryPos, (const Vector3 *)&clipCentre) > clipDist) continue;
        }
        if (collider->DetectClsn(*this) != 0) {
            dBgPi::SetCollider(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), (dBgW *)collider);
            hit = one;
        }
    }
    return hit;
}

// @symbol func_02038ea4
/* Slot-0-only Gnd scan: shared with the full scan above, kept under its
   address name. data_020a0c80[0] is read as the single entry (the table
   base holds the slot-0 collider). */
extern "C" int func_02038ea4(void *query)
{
    int hit = 0;
    dBgW *collider;
    func_02037464(query);
    collider = (dBgW *)data_020a0c80[0];
    if (collider != 0) {
        if (func_02035354(query, (void *)func_020393b4(collider)) == 0) {
            if (collider->DetectClsn(*(dBgCh_Gnd *)query) != 0) {
                int ownerID = func_020393ac(collider);
                int ownerAddress = func_020393b4(collider);
                static_cast<dBgCh_Gnd *>(query)->dBgPi::SetCollider(0, ownerID, (dActor_c *)ownerAddress, (dBgW *)collider);
                hit = 1;
            }
        }
    }
    return hit;
}

// @symbol _ZN12dBgCh_SphCrr10DetectClsnEv
int dBgCh_SphCrr::DetectClsn()
{
    int hit = 0;
    int hits;

    /* Test slot 0 first. The same pointer local then holds the sphere centre;
       separating those lifetimes changes the pinned compiler's registers. */
    char *cursor = (char *)data_020a0c80[0];
    if (cursor != 0) {
        if (func_02035354(this, (void *)func_020393b4(cursor)) == 0) {
            hits = ((dBgW *)cursor)->DetectClsn(*this);
            if (hits != 0) {
                dBgPi::SetCollider(0, func_020393ac(cursor),
                    (dActor_c *)func_020393b4(cursor), (dBgW *)cursor);
                if (hits & 1)
                    func_020379d0(0, func_020393ac(cursor), (dActor_c *)func_020393b4(cursor), (dBgW *)cursor);
                if (hits & 2)
                    func_0203799c(0, func_020393ac(cursor), (dActor_c *)func_020393b4(cursor), (dBgW *)cursor);
                if (hits & 4)
                    func_02037968(0, func_020393ac(cursor), (dActor_c *)func_020393b4(cursor), (dBgW *)cursor);
                hit = 1;
            }
        }
    }

    cursor = (char *)&((dM3dGSph &)*this).centre;
    int sphereReach = ((dM3dGSph &)*this).radius + 0x1000;
    for (int slot = 1; slot < 0x18; slot++) {
        dBgW *collider = data_020a0c80[slot];
        if (collider == 0) continue;
        dActor_c *owner = (dActor_c *)func_020393b4(collider);
        if (func_02035354(this, owner) != 0) continue;
        if (owner != 0) {
            int useClipTest = (owner->mFlags & 2) ? 1 : 0;
            if (useClipTest != 0) {
                Vector3 clipCentre;
                Vector3 *ownerPosPtr = (Vector3 *)&owner->mPosX;
                clipCentre.x = ownerPosPtr->x;
                clipCentre.y = ownerPosPtr->y;
                clipCentre.z = ownerPosPtr->z;
                /* Reuse the result local for the clipping distance. */
                hits = func_0203939c(collider);
                if (hits == -0x1000) {
                    int clipOffsetY = owner->mClipOffsetY;
                    int clipRadius = owner->mClipRadius;
                    clipCentre.y += clipOffsetY;
                    hits = clipRadius << 3;
                } else {
                    clipCentre.y += func_0203938c(collider);
                }
                if (Vec3_Dist((const Vector3 *)cursor, &clipCentre) > hits + sphereReach)
                    continue;
            }
        }
        { int t = ((dBgW *)collider)->DetectClsn(*this); hits = t; }
        if (hits != 0) {
            dBgPi::SetCollider(slot, func_020393ac(collider),
                (dActor_c *)func_020393b4(collider), collider);
            if (hits & 1)
                func_020379d0(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
            if (hits & 2)
                func_0203799c(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
            if (hits & 4)
                func_02037968(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
            hit = 1;
        }
    }
    this->func_02037a38();
    return hit;
}

// @symbol _ZN12dBgCh_SphCrr13func_02038a38Ev
int dBgCh_SphCrr::func_02038a38()
{
    /* same scan against slot 0 only */
    dBgW *collider = data_020a0c80[0];
    int hit = 0;
    int hitMask;
    if (collider != 0 && func_02035354(this, (void *)func_020393b4(collider)) == 0
        && (hitMask = collider->DetectClsn(*this)) != 0) {
        dBgPi::SetCollider(0, func_020393ac(collider),
            (dActor_c *)func_020393b4(collider), collider);
        if (hitMask & 1)
            func_020379d0(0, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
        if (hitMask & 2)
            func_0203799c(0, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
        if (hitMask & 4)
            func_02037968(0, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
        hit = 1;
    }
    this->func_02037a38();
    return hit;
}

// @symbol _ZN12dBgCh_SphCrr13func_02038824Ev
int dBgCh_SphCrr::func_02038824()
{
    /* the full-table scan variant: colliders 1..0x17 only */
    int sphereReach = ((dM3dGSph &)*this).radius + 0x1000;
    int hit = 0;
    int zero = 0;
    int one = 1;
    int slot;
    for (slot = 1; slot < 0x18; slot++) {
        dBgW *collider = data_020a0c80[slot];
        if (collider == 0) continue;
        dActor_c *owner = (dActor_c *)func_020393b4(collider);
        if (func_02035354(this, owner) != 0) continue;
        if (owner != 0 && ((owner->mFlags & 2) ? one : zero)) {
            /* The address local must stay declared int -- a pointer local
               diffs. Its value is the dM3dGSph base's centre. */
            int centreAddress = (int)&((dM3dGSph &)*this).centre;
            Vector3 clipCentre;
            Vector3 *ownerPosPtr = (Vector3 *)&owner->mPosX;
            int clipDist;
            clipCentre.x = ownerPosPtr->x;
            clipCentre.y = ownerPosPtr->y;
            clipCentre.z = ownerPosPtr->z;
            clipDist = func_0203939c(collider);
            if (clipDist == -0x1000) {
                int clipRadius = owner->mClipRadius;
                clipCentre.y = clipCentre.y + owner->mClipOffsetY;
                clipDist = clipRadius << 3;
            } else {
                clipCentre.y = clipCentre.y + func_0203938c(collider);
            }
            if (Vec3_Dist((const Vector3 *)centreAddress, &clipCentre) > clipDist + sphereReach) continue;
        }
        int hitMask = collider->DetectClsn(*this);
        if (hitMask == 0) continue;
        dBgPi::SetCollider(slot, func_020393ac(collider),
            (dActor_c *)func_020393b4(collider), collider);
        if (hitMask & 1) func_020379d0(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
        if (hitMask & 2) func_0203799c(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
        if (hitMask & 4) func_02037968(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), collider);
        hit = one;
    }
    this->func_02037a38();
    return hit;
}

// @symbol _ZN9dBgCh_Lin10DetectClsnEv
bool dBgCh_Lin::DetectClsn()
{
    bool result = false;
    int slot;
    dBgW *collider;
    dActor_c *owner;
    int clipDist;
    char *firstCollider;
    Vector3 *sphereCentre;
    int sphereRadius;
    firstCollider = (char *)data_020a0c80[0];
    if (firstCollider != 0) {
        if (func_02035354(this, (void *)func_020393b4(firstCollider)) == 0) {
            int hit = ((dBgW *)firstCollider)->DetectClsn(*this);
            if (hit != 0) {
                dBgPi::SetCollider(0, func_020393ac(firstCollider), (dActor_c *)func_020393b4(firstCollider), (dBgW *)firstCollider);
                result = true;
            }
        }
    }

    dM3dGSph &sphere = mBoundSphere;
    sphereCentre = &sphere.centre;
    sphereRadius = (int)sphere.radius;
    for (slot = 1; slot < 0x18; slot++) {
        collider = (dBgW *)data_020a0c80[slot];
        if (collider == 0) continue;
        owner = (dActor_c *)func_020393b4(collider);
        if (func_02035354(this, owner) != 0) continue;
        if (owner != 0) {
            int useClipTest = (owner->mFlags & 2) ? 1 : 0;
            if (useClipTest != 0) {
                Vec3 clipCentre;
                const char *position = (const char *)owner + 0x5c;
                clipCentre.x = *(const s32 *)(position + 0);
                clipCentre.y = *(const s32 *)(position + 4);
                clipCentre.z = *(const s32 *)(position + 8);
                clipDist = func_0203939c(collider);
                if (clipDist == -0x1000) {
                    int clipOffsetY = owner->mClipOffsetY;
                    int clipRadius = owner->mClipRadius;
                    clipCentre.y += clipOffsetY;
                    clipDist = clipRadius << 3;
                } else {
                    clipCentre.y += func_0203938c(collider);
                }
                if (Vec3_Dist(sphereCentre, (const Vector3 *)&clipCentre) > clipDist + sphereRadius)
                    continue;
            }
        }
        {
            int hit = collider->DetectClsn(*this);
            if (hit != 0) {
                dBgPi::SetCollider(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), (dBgW *)collider);
                result = true;
            }
        }
    }
    return result;
}

// @symbol func_0203859c
/* Slot-0-only line scan: shared with the full scan above, kept under its
   address name. */
extern "C" int func_0203859c(void *query)
{
    dBgW *collider = (dBgW *)data_020a0c80[0];
    int result = 0;
    if (collider != 0) {
        if (func_02035354(query, (void *)func_020393b4(collider)) == 0) {
            if (collider->DetectClsn(*(dBgCh_Lin *)query) != 0) {
                int ownerID = func_020393ac(collider);
                int ownerAddress = func_020393b4(collider);
                ((dBgCh_Lin *)query)->dBgPi::SetCollider(0, ownerID, (dActor_c *)ownerAddress, (dBgW *)collider);
                result = 1;
            }
        }
    }
    return result;
}

// @symbol func_0203842c
/* Full-table line scan without the slot-0 head: shared with the member
   scans above, kept under its address name. */
extern "C" int func_0203842c(char *self)
{
    int result = 0;
    int slot;
    dBgW *collider;
    dActor_c *owner;
    int clipDist;
    char *sphereCentre;
    int sphereRadius;

    dM3dGSph *boundSphere = &((dBgCh_Lin *)self)->mBoundSphere;
    sphereCentre = (char *)&boundSphere->centre;
    sphereRadius = boundSphere->radius;
    for (slot = 1; slot < 0x18; slot++) {
        collider = (dBgW *)data_020a0c80[slot];
        if (collider == 0) continue;
        owner = (dActor_c *)func_020393b4(collider);
        if (func_02035354(self, owner) != 0) continue;
        if (owner != 0) {
            int useClipTest = (owner->mFlags & 2) ? 1 : 0;
            if (useClipTest != 0) {
                Vector3 clipCentre;
                const char *position = (const char *)owner + 0x5c;
                clipCentre.x = *(const s32 *)(position + 0);
                clipCentre.y = *(const s32 *)(position + 4);
                clipCentre.z = *(const s32 *)(position + 8);
                clipDist = func_0203939c(collider);
                if (clipDist == -0x1000) {
                    int clipOffsetY = owner->mClipOffsetY;
                    int clipRadius = owner->mClipRadius;
                    clipCentre.y += clipOffsetY;
                    clipDist = clipRadius << 3;
                } else {
                    clipCentre.y += func_0203938c(collider);
                }
                if (Vec3_Dist((const Vector3 *)sphereCentre, &clipCentre) > clipDist + sphereRadius)
                    continue;
            }
        }
        {
            int hit = collider->DetectClsn(*(dBgCh_Lin *)self);
            if (hit != 0) {
                ((dBgCh_Lin *)self)->dBgPi::SetCollider(slot, func_020393ac(collider), (dActor_c *)func_020393b4(collider), (dBgW *)collider);
                result = 1;
            }
        }
    }
    return result;
}

// @symbol dBgCh_Actr_UpdateDiscreteNoLava_veneer
/* dBgCh_Actr_UpdateDiscreteNoLava_veneer @ 0x2038420 (arm9) -- tail-call veneer to _ZN10dBgCh_Actr20UpdateDiscreteNoLavaEv (0x2037024). */
extern "C" void dBgCh_Actr_UpdateDiscreteNoLava_veneer(void) {
    _ZN10dBgCh_Actr20UpdateDiscreteNoLavaEv();
}

// @symbol func_02038414
/* func_02038414 @ 0x2038414 (arm9) -- tail-call veneer to _ZN10dBgCh_Actr22UpdateDiscreteNoLava_2Ev (0x2036ee4). */
extern "C" void func_02038414(void) {
    _ZN10dBgCh_Actr22UpdateDiscreteNoLava_2Ev();
}

// @symbol func_02038408
/* func_02038408 @ 0x2038408 (arm9) -- tail-call veneer to func_02036acc (0x2036acc). */
extern "C" void func_02038408(void) {
    func_02036acc();
}

// @symbol dBgCh_Actr_UpdateContinuous_Veneer
/* dBgCh_Actr_UpdateContinuous_Veneer @ 0x20383fc (arm9) -- tail-call veneer to _ZN10dBgCh_Actr16UpdateContinuousEv (0x20366b4).
 * r0 (the dBgCh_Actr) passes straight through to the member. */
extern "C" void dBgCh_Actr_UpdateContinuous_Veneer(void *self) {
    _ZN10dBgCh_Actr16UpdateContinuousEv(self);
}

// @symbol func_020383f0
/* func_020383f0 @ 0x20383f0 (arm9) -- tail-call veneer to _ZN10dBgCh_Actr22UpdateContinuousNoLavaEv (0x2036318).
 * r0 (the dBgCh_Actr) passes straight through to the member. */
extern "C" void func_020383f0(void *self) {
    _ZN10dBgCh_Actr22UpdateContinuousNoLavaEv(self);
}

// @symbol func_020383e4
/* func_020383e4 @ 0x20383e4 (arm9) -- tail-call veneer to _ZN10dBgCh_Actr20UpdateExtraContinousEv (0x20358ac). */
extern "C" void func_020383e4(void) {
    _ZN10dBgCh_Actr20UpdateExtraContinousEv();
}

// @symbol func_02038324
/* Bound-to dispatch: gates on func_02038298, indexes the enabled-collider
   table with dBgPi's collider index and calls its BeforeClsn virtual method. */
extern "C" void func_02038324(void *record, int position, int motionAngles, int angles)
{
    int slot;
    dBgW *collider;
    if (((dBgPi *)record)->HasCollider() == 0) return;
    slot = ((dBgPi *)record)->GetColliderIndex();
    collider = (dBgW *)data_020a0c80[slot];
    if (collider == 0) return;
    if (func_020393cc(collider) == 0) return;
    if (func_02038298(record) == 0) return;
    collider->BeforeClsn(*(dBgPi *)record,
        (dActor_c *)func_020393b4(data_020a0c80[slot]),
        *(Vector3 *)position, (Vector3_16 *)motionAngles, (Vector3_16 *)angles);
}

// @symbol func_02038298
/* Enabled-collider gate: the record must be valid, name a live table slot,
   and re-identify against its entry. Member-called: the mangled free
   spellings emit the same bl and read worse under decl agreement. */
extern "C" int func_02038298(void *record)
{
    int slot; void *collider; int ownerID, ownerAddress;
    if (((dBgPi *)record)->IsValid() == 0) return 0;
    slot = ((dBgPi *)record)->GetColliderIndex();
    if (slot < 0 || slot >= 0x18) return 0;
    collider = data_020a0c80[slot];
    if (collider == 0) return 0;
    ownerID = func_020393ac(collider);
    ownerAddress = func_020393b4(collider);
    return ((dBgPi *)record)->IsHitBy(ownerID, (dActor_c *)ownerAddress, (dBgW *)collider);
}

// @symbol func_02038234
/* The free helper that ends the CLPS_BlockRef run: gates on func_02038298,
   indexes the enabled-collider table with dBgPi's collider index and
   dispatches the collider's stored callback. Calls the gate through a
   two-word function-pointer cast: the definition takes one word while
   this site passes two, and the extra register rides along. */
extern "C" void func_02038234(int record, int argument)
{
    int slot;
    dBgW *collider;
    ColliderCallback callback;
    if (((int (*)(int, int))func_02038298)(record, argument) == 0) return;
    slot = ((dBgPi *)record)->GetColliderIndex();
    collider = data_020a0c80[slot];
    callback = (ColliderCallback)func_020393bc((int *)collider);
    if (callback == 0) return;
    callback((int)collider, func_020393b4((int *)collider), argument);
}

// @symbol _ZN13CLPS_BlockRefC1Ev
CLPS_BlockRef::CLPS_BlockRef() : ptr(0) {}

// @symbol _ZN13CLPS_BlockRefD1Ev
CLPS_BlockRef::~CLPS_BlockRef() {}

// @symbol _ZN13CLPS_BlockRefaSER10CLPS_Block
CLPS_BlockRef &CLPS_BlockRef::operator=(CLPS_Block &block)
{
    ptr = &block;
    return *this;
}

// @symbol func_020381cc
/* CLPS entry lookup: walks the collider table through a pointer-to-pointer
   argument. Written first to land last in the ROM (reverse emission). */
extern "C" {
void func_020381cc(void *blockRef, int entryIndex, void **out)
{
    unsigned char *block = *(unsigned char **)blockRef;
    if (block == 0 || *(unsigned short *)(block + 4) != 8) {
        func_02037e9c(&data_020a0c78);
        *out = &data_020a0c78;
        return;
    }
    *out = block + 8 + (entryIndex * sizeof(CLPS));
}
}

// @symbol _ZN5dBgPiC1Ev
// @symbol _ZN5dBgPiC2Ev
dBgPi::dBgPi()
{
    Reset();
}

// @symbol _ZN5dBgPiD1Ev
// @symbol _ZN5dBgPiD2Ev
// @symbol _ZN5dBgPiD0Ev
dBgPi::~dBgPi()
{
}

void dBgPi::Reset()
{
    triangleID = 0xffff;
    colliderIdx = 0x18;
    clsnID = -1;
    owner = 0;
    collider = 0;
}

// @symbol _ZNK5dBgPi6CopyToERS_
void dBgPi::CopyTo(dBgPi &dst) const
{
    *reinterpret_cast<u64 *>(&dst.surface.clps) =
        *reinterpret_cast<const u64 *>(&surface.clps);
    dst.surface.normal.x = surface.normal.x;
    dst.surface.normal.y = surface.normal.y;
    dst.surface.normal.z = surface.normal.z;
    dst.triangleID = triangleID;
    dst.colliderIdx = colliderIdx;
    dst.clsnID = clsnID;
    dst.owner = owner;
    dst.collider = collider;
}

// @symbol _ZN5dBgPiaSERKS_
dBgPi &dBgPi::operator=(const dBgPi &other)
{
    /* CLPS is one 64-bit record. This spelling also preserves its two loads
       before either store when source and destination might overlap. */
    *reinterpret_cast<u64 *>(&surface.clps) =
        *reinterpret_cast<const u64 *>(&other.surface.clps);
    surface.normal.x = other.surface.normal.x;
    surface.normal.y = other.surface.normal.y;
    surface.normal.z = other.surface.normal.z;
    triangleID = other.triangleID;
    colliderIdx = other.colliderIdx;
    clsnID = other.clsnID;
    owner = other.owner;
    collider = other.collider;
    return *this;
}

// @symbol _ZN5dBgPi11SetColliderEiiP8dActor_cP4dBgW
void dBgPi::SetCollider(int idx, int uid, dActor_c *actor, dBgW *clsn)
{
    SetColliderIndex(idx);
    clsnID = uid;
    owner = actor;
    collider = clsn;
}

// @symbol _ZN5dBgPi9RecordHitEsP11SurfaceInfo
void dBgPi::RecordHit(s16 triID, SurfaceInfo *src)
{
    triangleID = triID;
    func_02037de8(reinterpret_cast<int *>(&surface), reinterpret_cast<int *>(src));
}

// @symbol _ZNK5dBgPi11HasColliderEv
int dBgPi::HasCollider() const
{
    return colliderIdx != 0x18;
}

// @symbol _ZNK5dBgPi7IsValidEv
int dBgPi::IsValid() const
{
    return colliderIdx != 0x18 && triangleID != 0xffff;
}

// @symbol _ZNK5dBgPi7IsHitByEiP8dActor_cP4dBgW
int dBgPi::IsHitBy(int uid, dActor_c *actor, dBgW *clsn) const
{
    return clsnID == uid && owner == actor && collider == clsn;
}

// @symbol _ZN5dBgPi16SetColliderIndexEi
void dBgPi::SetColliderIndex(int idx)
{
    colliderIdx = idx;
}

// @symbol _ZNK5dBgPi16GetColliderIndexEv
int dBgPi::GetColliderIndex() const
{
    return colliderIdx;
}

// @symbol _ZNK5dBgPi9GetClsnIDEv
u32 dBgPi::GetClsnID() const
{
    return clsnID;
}

// @symbol func_02037f44
/* Return the owner stored in the dBgPi hit record at +0x20. The legacy
   external interface returns the address as an integer. */
extern "C" {
int func_02037f44(int *record)
{
    return reinterpret_cast<int>(reinterpret_cast<dBgPi *>(record)->owner);
}
}

/* The constructor is defined before the destructor so the deferred
 * emission order lands the D2,D1 group below the C1,C2 group, matching
 * the ROM's layout (mwccarm emits .text in reverse source order). */
// @symbol _ZN5dBgPcC1Ev
// @symbol _ZN5dBgPcC2Ev
dBgPc::dBgPc()
{
    surface.clps.w0 = 0xfc0;
    surface.clps.w1 = 0xff;
    surface.normal.z = 0;
    surface.normal.y = surface.normal.z;
    surface.normal.x = surface.normal.y;
}

// @symbol _ZN5dBgPcD2Ev
// @symbol _ZN5dBgPcD1Ev
dBgPc::~dBgPc()
{
}

// @symbol func_02037eb0
/* The record init that opens the dBgPc run. Local record spellings travel
 * with the TU to retain its existing by-value ABI. The first two words are
 * CLPS, followed by the surface normal; see SurfaceInfo.h. */
extern "C" {
void func_02037eb0(struct PcObj *surface, struct PcAB clps, struct Vector3 *normal)
{
    surface->clpsWord0 = clps.clpsWord0;
    surface->clpsWord1 = clps.clpsWord1;
    surface->normal.x = normal->x;
    surface->normal.y = normal->y;
    surface->normal.z = normal->z;
}
}

// @symbol func_02037e9c
extern "C" {
void func_02037e9c(char *entry)
{
    CLPS *clps = reinterpret_cast<CLPS *>(entry);
    clps->w0 = 0xfc0;
    clps->w1 = 0xff;
}
}

// @symbol func_02037e90
extern "C" {
int func_02037e90(int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return clps->w1 & 0xff;
}
}

// @symbol func_02037e84
extern "C" {
int func_02037e84(int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return clps->w0 & 0x1f;
}
}

// @symbol SurfaceInfo_TestFlag0x20
extern "C" {
int SurfaceInfo_TestFlag0x20(int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return clps->w0 & 0x20;
}
}

// @symbol func_02037e68
extern "C" {
int func_02037e68(unsigned int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return (clps->w0 >> 6) & 0x3f;
}
}

// @symbol func_02037e58
extern "C" {
int func_02037e58(unsigned int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return (clps->w0 >> 12) & 0x7;
}
}

// @symbol func_02037e48
extern "C" {
int func_02037e48(unsigned int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return (clps->w0 >> 15) & 0xf;
}
}

// @symbol func_02037e38
extern "C" {
int func_02037e38(unsigned int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return (clps->w0 >> 19) & 0x1f;
}
}

// @symbol func_02037e2c
extern "C" {
int func_02037e2c(int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return clps->w0 & 0x01000000;
}
}

// @symbol func_02037e20
extern "C" {
int func_02037e20(int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return clps->w0 & 0x02000000;
}
}

// @symbol func_02037e14
extern "C" {
int func_02037e14(int *entry)
{
    const CLPS *clps = reinterpret_cast<const CLPS *>(entry);
    return clps->w0 & 0x04000000;
}
}

// @symbol func_02037de8
/* Five-word surface copy: read both CLPS words before either store, then
   copy each normal component. The u64 CLPS copy preserves that order. */
extern "C" {
void func_02037de8(int *dst, int *src)
{
    SurfaceInfo *destination = reinterpret_cast<SurfaceInfo *>(dst);
    const SurfaceInfo *source = reinterpret_cast<const SurfaceInfo *>(src);
    *reinterpret_cast<u64 *>(&destination->clps) =
        *reinterpret_cast<const u64 *>(&source->clps);
    destination->normal.x = source->normal.x;
    destination->normal.y = source->normal.y;
    destination->normal.z = source->normal.z;
}
}

// @symbol _ZNK11SurfaceInfo12CopyNormalToER7Vector3
/* SurfaceInfo::CopyNormalTo(Vector3 &out) const -- copy the face normal out.
 * The normal sits at 0x08, after the 8-byte CLPS entry; see include/SurfaceInfo.h
 * for how both halves of this 0x14-byte struct are pinned. */
void SurfaceInfo::CopyNormalTo(Vector3 &out) const
{
    out.x = normal.x;
    out.y = normal.y;
    out.z = normal.z;
}

// @symbol func_02037dc4
extern "C" {
int func_02037dc4(int surfaceAddress)
{
    /* SurfaceInfo::normal follows the eight-byte CLPS entry. */
    return surfaceAddress + sizeof(CLPS);
}
}
