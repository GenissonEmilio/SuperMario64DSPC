//cpp
/* dBgCh_Actr -- an actor's mesh-collision query: the sphere-plus-raycast pair
 * every actor embeds (vtable address point 0x02099204; _ZTS10dBgCh_Actr at
 * 0x020991ec). Derives from dBgCh; nothing derives from it, so no D2/C2 ever
 * emitted.
 *
 * Owns the contiguous text run 0x0203553c..0x02037464, between dBgCh's own
 * functions below and dBgCh_Gnd's workers above. Deferred codegen emits the
 * lifecycle group at the tail -- D0 0x020373b8, D1 0x020373f8, C1 0x02037430 --
 * so the ctor and dtor are defined first and the plain functions land in
 * reverse definition order. The func_0203* workers inside the run are its
 * unnamed mFlags plumbing, sub-object accessors, and step helpers; the ROM
 * gives them no member name, so they stay extern "C" free functions taking
 * the object by raw pointer. */
// leftovers: Init stays a free definition spelling its own mangled name (the
// Fix12i params travel by value in the mangling, wall 6az). dBgPiLoc is a
// manually laid-out dBgPi image (UpdateExtraContinous copies a wall result
// field by field, so it needs names without the constructor). The
// func_0203* workers keep address names (no member evidence names them).
// The two-result continuous routines retain explicit hit-record lifetimes:
// automatic dBgPi locals change their instructions under 2004/b56. The
// three-result UpdateExtraContinous uses ordinary automatic dBgPi objects.

#include "types.h"
#include "common.h"
#include "dBgCh_Actr.h"
#include "dBgCh_Gnd.h"
#include "dActor_c.h"
#include "Player.h"

extern "C" {

/* dBgCh's unnamed flag helpers, from the run just below this one. Each of
   the four fan-out workers below calls one of them on both sub-objects. */
void func_020353e0(char *self);
void func_020353f4(char *self);
void func_02035414(char *self);
void func_02035428(char *self);

/* Checker-family helpers shared across the collision TUs, spelled as
   defined. */
int  func_02037dc4(int p);   /* SurfaceInfo * -> Vector3 * (the hit normal) */
void func_02038234(int a, int b);
void func_02038324(void *arg, int b, int c, int d);
int  func_0203842c(char *self);
int  func_0203859c(void *obj);
int  func_02039794(int x);
int  SurfaceInfo_TestFlag0x20(int *p);
/* local extern: the radius travels by value inside the mangled name
   (wall 6az), so the call spells the symbol with Fix12i rather than going
   through the member. */
void _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
    dBgCh_SphCrr *self, const Vector3 *pos, Fix12i radius, dActor_c *actor);
/* local extern: explicit lifetimes of the two-result routines' hit records
   and the manually copied wall snapshot. Their POD storage has no methods. */
dBgPi *_ZN5dBgPiD1Ev(dBgPi *self);
dBgPi *_ZN5dBgPiC1Ev(dBgPi *self);
extern int data_02099368[];  /* _ZTV5dBgPi -- same address, see symbols.txt */

/* This TU's own workers, defined below. */
int  func_0203553c(int *p);       /* (mFlags & 0x4000) == 0 -- water-tracking bit */
void func_02035550(char *self);   /* mFlags |= 0x4000 */
int  func_020355a0(int *p);       /* (mFlags & 0x800) == 0 */
int  func_020355dc(int *p);       /* mFlags & 0x400 */
void func_020356d4(char *self);   /* mFlags |= 0x40 -- left ground */
int  func_02035764(int *p);       /* mFlags & 0x200 */
void func_0203573c(char *self);   /* mFlags |= 0x20 -- just hit ground */
void func_020371b0(dBgCh_Actr *clsn, s32 justHit);  /* floor-result commit */

}

/* Manually laid-out dBgPi image used by UpdateExtraContinous's savedWallResult: the
   body copies a wall result's fields one at a time, so it needs the field
   names without the constructor. Layout is dBgPi's own. */
struct dBgPiLoc
{
    u32 *vt;
    SurfaceInfo si;
    unsigned short tri;
    unsigned short clsn;
    u32 objID;
    void *obj;
    void *mesh;
};

/* Lifecycle first; the group emits at the run's tail. Both bodies are empty:
   the class header supplies the base step, the vtable store, the two typed
   member constructions, and the collision-heap delete. */

// @symbol _ZN10dBgCh_ActrC1Ev
dBgCh_Actr::dBgCh_Actr() {}

// @symbol _ZN10dBgCh_ActrD0Ev
// @symbol _ZN10dBgCh_ActrD1Ev
dBgCh_Actr::~dBgCh_Actr()
{
}

/* Init stays a free definition spelling its own mangled name: the Fix12i
   parameters travel by value inside the mangling (wall 6az), so no member
   spelling is available in this TU. */

// @symbol _ZN10dBgCh_Actr4InitEP8dActor_c5Fix12IiES3_P10Vector3_16S5_
extern "C" void _ZN10dBgCh_Actr4InitEP8dActor_c5Fix12IiES3_P10Vector3_16S5_(
    dBgCh_Actr *self, int actor, int radius, int height, int a, int b)
{
    self->mActor = (dActor_c *)actor;
    self->mRadius = radius;
    self->mHeight = height;
    self->mFlags = 0;
    self->mSphereClsn.unk_10c = a;
    self->unk_130 = b;
    self->mScale = 0x1000;
}

// @symbol func_02037318
extern "C" void func_02037318(char *self)
{
    dBgCh_Actr *clsn = (dBgCh_Actr *)self;
    const int *src;

    clsn->mFlags &= ~0x100;
    if (clsn->IsOnGround() == 0)
        return;
    if (((Player *)clsn->mActor)->IsInAir())
        return;
    clsn->mFlags |= 0x100;
    src = &clsn->mSphereClsn.unk_0fc;
    *(int *)(self + 0x1ac) = src[0];
    *(int *)(self + 0x1b0) = src[1];
    *(int *)(self + 0x1b4) = src[2];
}

// @symbol func_020371fc
/* The ground-snap step run once per landing: when the sphere query flagged a
   floor hit and the actor is close to a dBgCh_Gnd probed surface, snap the
   actor's position onto it and raise the on-ground state. */
extern "C" void func_020371fc(char *self)
{
    dBgCh_Actr *clsn = (dBgCh_Actr *)self;
    if ((clsn->mSphereClsn.flags & 1) == 0) return;
    if ((clsn->mSphereClsn.flags & 8) == 0) return;
    if ((clsn->mFlags & 0x100) == 0) return;
    if (*(int *)(self + 0x1b0) >= 0xf20) return;
    if (((Player *)clsn->mActor)->IsInAir()) return;
    {
        Vector3 pos;
        Vector3 *position = (Vector3 *)&clsn->mActor->mPosX;
        dBgCh_Gnd groundQuery;
        pos.x = position->x;
        pos.y = position->y + clsn->mRadius;
        pos.z = position->z;
        groundQuery.SetObjAndPos(pos, clsn->mActor);
        if (groundQuery.DetectClsn() != 0) {
            int floorY = groundQuery.clsnY;
            int heightAboveFloor = position->y - floorY;
            if (heightAboveFloor > 0 && heightAboveFloor < (clsn->mRadius << 1)) {
                position->y = floorY;
                clsn->mSphereClsn.flags |= 4;
                clsn->mSphereClsn.mClsnResult1 = groundQuery;
                clsn->SetGroundFlag();
            }
        }
    }
}

// @symbol func_020371b0
/* Floor-result commit: hand the hit record to the actor, raise on-ground,
   and kill vertical speed unless limited movement is set. `justHit` is the
   frame's ground state on entry, so the just-hit flag only fires on the
   transition. */
extern "C" void func_020371b0(dBgCh_Actr *clsn, s32 justHit)
{
    if (justHit == 0)
        func_0203573c((char *)clsn);
    func_02038234((int)clsn->GetFloorResult(), (int)clsn->mActor);
    clsn->SetGroundFlag();
    if (clsn->GetLimMovFlag() == 0)
        clsn->mActor->mVertSpeed = 0;
}

// @symbol _ZN10dBgCh_Actr20UpdateDiscreteNoLavaEv
void dBgCh_Actr::UpdateDiscreteNoLava()
{
    int wasOnGround;
    int positionY;
    Vector3 sphereCenter;
    Vector3 *displacement;
    dActor_c *actor = mActor;
    Vector3 *position = (Vector3 *)&actor->mPosX;
    Vector3 *previousPosition = (Vector3 *)&actor->mPrevPosX;

    if (IsOnGround() && func_020355a0((int *)this)
        && ShouldUpdatePos()) {
        func_02038324((void *)mSphereClsn.GetFloorResult(), (int)position,
                      mSphereClsn.unk_10c, unk_130);
    }
    wasOnGround = IsOnGround();
    ClearAllGroundFlags();
    sphereCenter.x = position->x;
    positionY = position->y;
    sphereCenter.y = positionY;
    sphereCenter.z = position->z;
    sphereCenter.y = positionY + mHeight;
    _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
        &mSphereClsn, &sphereCenter, mRadius, mActor);
    mSphereClsn.mScale = mScale;
    if (position->y - previousPosition->y > 0) {
        mSphereClsn.flags |= 0x20;
    }
    if (mSphereClsn.DetectClsn()) {
        displacement = &mSphereClsn.disp;
        if (mSphereClsn.flags & 4) {
            func_020371b0(this, wasOnGround);
        }
        if (ShouldUpdatePos()) {
            position->x += displacement->x;
            if (ShouldUpdatePosY()) {
                position->y += displacement->y;
            }
            position->z += displacement->z;
        }
    }
    if (wasOnGround == 0)
        return;
    if (IsOnGround())
        return;
    func_020356d4(((char *)this));
}

// @symbol _ZN10dBgCh_Actr22UpdateDiscreteNoLava_2Ev
void dBgCh_Actr::UpdateDiscreteNoLava_2()
{
    int wasOnGround;
    int positionY;
    Vector3 sphereCenter;
    Vector3 *displacement;
    Vector3 *position = (Vector3 *)&mActor->mPosX;
    dActor_c *actor = mActor;

    wasOnGround = IsOnGround();
    ClearAllGroundFlags();
    sphereCenter.x = position->x;
    positionY = position->y;
    sphereCenter.y = positionY;
    sphereCenter.z = position->z;
    sphereCenter.y = positionY + mHeight;
    _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
        &mSphereClsn, &sphereCenter, mRadius, mActor);
    mSphereClsn.mScale = mScale;
    if (position->y - actor->mPrevPosY > 0) {
        mSphereClsn.flags |= 0x20;
    }
    if (mSphereClsn.func_02038a38()) {
        displacement = &mSphereClsn.disp;
        if (mSphereClsn.flags & 4) {
            func_020371b0(this, wasOnGround);
        }
        if (ShouldUpdatePos()) {
            position->x += displacement->x;
            if (ShouldUpdatePosY()) {
                position->y += displacement->y;
            }
            position->z += displacement->z;
        }
    }
    if (wasOnGround == 0)
        return;
    if (IsOnGround())
        return;
    func_020356d4(((char *)this));
}

/* func_02036acc is UpdateContinuous's free twin: the same wall/floor probing
   sequence but taking the query by raw pointer and running the func_0203842c/
   func_02038824 detection variants. The ROM keeps its unmangled name, so it
   stays extern "C". */

#pragma opt_common_subs off

// @symbol func_02036acc
extern "C" void func_02036acc(char *c)
{
    int hasFloorHit;
    int hasWallHit;
    int height;
    int wasOnGround;
    int* pos;
    int* prev;
    int floorCommitted;
    dBgPiLoc floorResult;
    dBgPiLoc wallResult;
    Vector3 lineStart, lineEnd;
    char* a;
    dBgCh_Actr *self = (dBgCh_Actr *)c;

    a = (char*)self->mActor;
    pos = (int*)(a + 0x5c);
    prev = (int*)(a + 0x68);

    if (self->IsOnGround() && func_020355a0((int*)c) && self->ShouldUpdatePos())
        func_02038324((void*)self->mSphereClsn.GetFloorResult(), (int)pos,
                      self->mSphereClsn.unk_10c, self->unk_130);

    hasFloorHit = 0;
    _ZN5dBgPiC1Ev((dBgPi *)&floorResult);
    hasWallHit = 0;
    _ZN5dBgPiC1Ev((dBgPi *)&wallResult);

    height = self->mHeight;
    {
        int tx = prev[0];
        int tz = prev[2];
        int ty = prev[1] + height;
        lineStart.x = tx;
        lineStart.y = ty;
        lineStart.z = tz;
    }
    {
        int tx = pos[0];
        int tz = pos[2];
        int ty = pos[1] + height;
        lineEnd.x = tx;
        lineEnd.y = ty;
        lineEnd.z = tz;
    }
    self->mRaycastLine.SetObjAndLine(lineStart, lineEnd, self->mActor);
    if (func_0203842c((char*)&self->mRaycastLine))
    {
        int r;
        Vector3 clsnPos = self->mRaycastLine.GetClsnPos();
        Vector3 normal, newStart, newEnd;
        self->mRaycastLine.surface.CopyNormalTo(normal);
        newStart.x = clsnPos.x + (normal.x >> 2);
        newStart.y = (normal.y >> 2) + clsnPos.y;
        newStart.z = clsnPos.z + (normal.z >> 2);
        newEnd.x = newStart.x;
        newEnd.y = newStart.y - height;
        newEnd.z = newStart.z;
        r = func_02039794(normal.y);
        if (r == 1) {
            hasWallHit = 1;
            self->mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&wallResult);
        } else if (r == 0) {
            hasFloorHit = 1;
            self->mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&floorResult);
        }
        self->mRaycastLine.SetObjAndLine(newStart, newEnd, self->mActor);
        if (func_0203842c((char*)&self->mRaycastLine)) {
            Vector3 clsnPos2 = self->mRaycastLine.GetClsnPos();
            Vector3 normal2;
            self->mRaycastLine.surface.CopyNormalTo(normal2);
            if (func_02039794(normal2.y) == 0) {
                hasFloorHit = 1;
                self->mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&floorResult);
            }
            if (self->ShouldUpdatePos()) {
                pos[0] = clsnPos2.x - (normal2.x >> 2);
                pos[1] = clsnPos2.y - (normal2.y >> 2) - (height >> 1);
                pos[2] = clsnPos2.z - (normal2.z >> 2);
            }
        } else if (self->ShouldUpdatePos()) {
            pos[0] = newStart.x;
            pos[1] = newStart.y - height;
            pos[2] = newStart.z;
        }
    }

    wasOnGround = self->IsOnGround();
    floorCommitted = 0;
    self->ClearAllGroundFlags();
    Vector3 sphereCenter;
    sphereCenter.x = pos[0];
    sphereCenter.y = pos[1];
    sphereCenter.z = pos[2];
    sphereCenter.y += height;
    _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
        &self->mSphereClsn, &sphereCenter, self->mRadius, self->mActor);
    if (func_0203553c((int*)c) == 0)
        self->mSphereClsn.flags |= 0x40;
    self->mSphereClsn.mScale = self->mScale;
    if (pos[1] - prev[1] > 0)
        self->mSphereClsn.flags |= 0x20;
    if (hasFloorHit != 0) {
        self->mSphereClsn.flags |= 4;
        self->mSphereClsn.SetFloorResult(*(const dBgPi *)&floorResult);
        self->mSphereClsn.flags |= 1;
        (dBgPi &)self->mSphereClsn = *(const dBgPi *)&floorResult;
        func_020371b0(self, wasOnGround);
        floorCommitted = 1;
    }
    if (hasWallHit != 0) {
        self->mSphereClsn.flags |= 8;
        self->mSphereClsn.SetWallResult(*(const dBgPi *)&wallResult);
        self->mSphereClsn.flags |= 1;
        (dBgPi &)self->mSphereClsn = *(const dBgPi *)&wallResult;
    }
    if (self->mSphereClsn.func_02038824()) {
        prev = (int*)&self->mSphereClsn.disp;
        if ((self->mSphereClsn.flags & 4) && floorCommitted == 0)
            func_020371b0(self, wasOnGround);
        if (self->ShouldUpdatePos()) {
            pos[0] += prev[0];
            if (self->ShouldUpdatePosY())
                pos[1] += prev[1];
            pos[2] += prev[2];
        }
    }
    if (wasOnGround && self->IsOnGround() == 0)
        func_020356d4(c);
    _ZN5dBgPiD1Ev((dBgPi *)&wallResult);
    _ZN5dBgPiD1Ev((dBgPi *)&floorResult);
}

#pragma opt_common_subs on

#pragma opt_common_subs off

// @symbol _ZN10dBgCh_Actr16UpdateContinuousEv
void dBgCh_Actr::UpdateContinuous()
{
    int hasFloorHit;
    int hasWallHit;
    int height;
    int wasOnGround;
    int* pos;
    int* prev;
    int floorCommitted;
    dBgPiLoc floorResult;
    dBgPiLoc wallResult;
    Vector3 lineStart, lineEnd;
    char* a;

    a = (char*)mActor;
    pos = (int*)(a + 0x5c);
    prev = (int*)(a + 0x68);

    if (IsOnGround() && func_020355a0((int*)this) && ShouldUpdatePos())
        func_02038324((void *)mSphereClsn.GetFloorResult(), (int)pos,
                      mSphereClsn.unk_10c, unk_130);

    hasFloorHit = 0;
    _ZN5dBgPiC1Ev((dBgPi *)&floorResult);
    hasWallHit = 0;
    _ZN5dBgPiC1Ev((dBgPi *)&wallResult);

    height = mHeight;
    {
        int tx = prev[0];
        int tz = prev[2];
        int ty = prev[1] + height;
        lineStart.x = tx;
        lineStart.y = ty;
        lineStart.z = tz;
    }
    {
        int tx = pos[0];
        int tz = pos[2];
        int ty = pos[1] + height;
        lineEnd.x = tx;
        lineEnd.y = ty;
        lineEnd.z = tz;
    }
    mRaycastLine.SetObjAndLine(lineStart, lineEnd, mActor);
    if (mRaycastLine.DetectClsn())
    {
        int r;
        Vector3 clsnPos = mRaycastLine.GetClsnPos();
        Vector3 normal, newStart, newEnd;
        mRaycastLine.surface.CopyNormalTo(normal);
        newStart.x = clsnPos.x + (normal.x >> 2);
        newStart.y = (normal.y >> 2) + clsnPos.y;
        newStart.z = clsnPos.z + (normal.z >> 2);
        newEnd.x = newStart.x;
        newEnd.y = newStart.y - height;
        newEnd.z = newStart.z;
        r = func_02039794(normal.y);
        if (r == 1) {
            hasWallHit = 1;
            mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&wallResult);
        } else if (r == 0) {
            hasFloorHit = 1;
            mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&floorResult);
        }
        mRaycastLine.SetObjAndLine(newStart, newEnd, mActor);
        if (mRaycastLine.DetectClsn()) {
            Vector3 clsnPos2 = mRaycastLine.GetClsnPos();
            Vector3 normal2;
            mRaycastLine.surface.CopyNormalTo(normal2);
            if (func_02039794(normal2.y) == 0) {
                hasFloorHit = 1;
                mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&floorResult);
            }
            if (ShouldUpdatePos()) {
                pos[0] = clsnPos2.x - (normal2.x >> 2);
                pos[1] = clsnPos2.y - (normal2.y >> 2) - (height >> 1);
                pos[2] = clsnPos2.z - (normal2.z >> 2);
            }
        } else if (ShouldUpdatePos()) {
            pos[0] = newStart.x;
            pos[1] = newStart.y - height;
            pos[2] = newStart.z;
        }
    }

    wasOnGround = IsOnGround();
    floorCommitted = 0;
    ClearAllGroundFlags();
    Vector3 sphereCenter;
    sphereCenter.x = pos[0];
    sphereCenter.y = pos[1];
    sphereCenter.z = pos[2];
    sphereCenter.y += height;
    _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
        &mSphereClsn, &sphereCenter, mRadius, mActor);
    if (func_0203553c((int*)this) == 0)
        mSphereClsn.flags |= 0x40;
    mSphereClsn.mScale = mScale;
    if (pos[1] - prev[1] > 0)
        mSphereClsn.flags |= 0x20;
    if (hasFloorHit != 0) {
        mSphereClsn.flags |= 4;
        mSphereClsn.SetFloorResult(*(const dBgPi *)&floorResult);
        mSphereClsn.flags |= 1;
        (dBgPi &)mSphereClsn = *(const dBgPi *)&floorResult;
        func_020371b0(this, wasOnGround);
        floorCommitted = 1;
    }
    if (hasWallHit != 0) {
        mSphereClsn.flags |= 8;
        mSphereClsn.SetWallResult(*(const dBgPi *)&wallResult);
        mSphereClsn.flags |= 1;
        (dBgPi &)mSphereClsn = *(const dBgPi *)&wallResult;
    }
    if (mSphereClsn.DetectClsn()) {
        prev = (int*)&mSphereClsn.disp;
        if ((mSphereClsn.flags & 4) && floorCommitted == 0)
            func_020371b0(this, wasOnGround);
        if (ShouldUpdatePos()) {
            pos[0] += prev[0];
            if (ShouldUpdatePosY())
                pos[1] += prev[1];
            pos[2] += prev[2];
        }
    }
    if (wasOnGround && IsOnGround() == 0)
        func_020356d4(((char*)this));
    _ZN5dBgPiD1Ev((dBgPi *)&wallResult);
    _ZN5dBgPiD1Ev((dBgPi *)&floorResult);
}

#pragma opt_common_subs on

#pragma opt_common_subs off

// @symbol _ZN10dBgCh_Actr22UpdateContinuousNoLavaEv
void dBgCh_Actr::UpdateContinuousNoLava()
{
    int hasFloorHit;
    int hasWallHit;
    int height;
    int wasOnGround;
    int* pos;
    int* prev;
    int floorCommitted;
    dBgPiLoc floorResult;
    dBgPiLoc wallResult;
    Vector3 lineStart, lineEnd;

    {
        char* a = (char*)mActor;
        pos = (int*)((char*)a + 0x5c);
        prev = (int*)((char*)a + 0x68);
    }

    hasFloorHit = 0;
    _ZN5dBgPiC1Ev((dBgPi *)&floorResult);
    hasWallHit = 0;
    _ZN5dBgPiC1Ev((dBgPi *)&wallResult);

    height = mHeight;
    {
        int tx = prev[0];
        int tz = prev[2];
        int ty = prev[1] + height;
        lineStart.x = tx;
        lineStart.y = ty;
        lineStart.z = tz;
    }
    {
        int tx = pos[0];
        int tz = pos[2];
        int ty = pos[1] + height;
        lineEnd.x = tx;
        lineEnd.y = ty;
        lineEnd.z = tz;
    }
    mRaycastLine.SetObjAndLine(lineStart, lineEnd, mActor);
    if (func_0203859c((char*)&mRaycastLine))
    {
        int r;
        Vector3 clsnPos = mRaycastLine.GetClsnPos();
        Vector3 normal, newStart, newEnd;
        mRaycastLine.surface.CopyNormalTo(normal);
        newStart.x = clsnPos.x + (normal.x >> 2);
        newStart.y = (normal.y >> 2) + clsnPos.y;
        newStart.z = clsnPos.z + (normal.z >> 2);
        newEnd.x = newStart.x;
        newEnd.y = newStart.y - height;
        newEnd.z = newStart.z;
        r = func_02039794(normal.y);
        if (r == 1) {
            hasWallHit = 1;
            mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&wallResult);
        }
        mRaycastLine.SetObjAndLine(newStart, newEnd, mActor);
        if (func_0203859c((char*)&mRaycastLine)) {
            Vector3 clsnPos2 = mRaycastLine.GetClsnPos();
            Vector3 normal2;
            mRaycastLine.surface.CopyNormalTo(normal2);
            if (func_02039794(normal2.y) == 0) {
                hasFloorHit = 1;
                mRaycastLine.dBgPi::CopyTo(*(dBgPi *)&floorResult);
            }
            if (ShouldUpdatePos()) {
                pos[0] = clsnPos2.x - (normal2.x >> 2);
                pos[1] = clsnPos2.y - (normal2.y >> 2) - (height >> 1);
                pos[2] = clsnPos2.z - (normal2.z >> 2);
            }
        } else if (ShouldUpdatePos()) {
            pos[0] = newStart.x;
            pos[1] = newStart.y - height;
            pos[2] = newStart.z;
        }
    }

    wasOnGround = IsOnGround();
    ClearAllGroundFlags();
    floorCommitted = 0;
    Vector3 sphereCenter;
    sphereCenter.x = pos[0];
    sphereCenter.y = pos[1];
    sphereCenter.z = pos[2];
    sphereCenter.y += height;
    _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
        &mSphereClsn, &sphereCenter, mRadius, mActor);
    mSphereClsn.mScale = mScale;
    if (pos[1] - prev[1] > 0)
        mSphereClsn.flags |= 0x20;
    if (hasFloorHit != 0) {
        mSphereClsn.flags |= 4;
        mSphereClsn.SetFloorResult(*(const dBgPi *)&floorResult);
        mSphereClsn.flags |= 1;
        (dBgPi &)mSphereClsn = *(const dBgPi *)&floorResult;
        func_020371b0(this, wasOnGround);
        floorCommitted = 1;
    }
    if (hasWallHit != 0) {
        mSphereClsn.flags |= 8;
        mSphereClsn.SetWallResult(*(const dBgPi *)&wallResult);
        mSphereClsn.flags |= 1;
        (dBgPi &)mSphereClsn = *(const dBgPi *)&wallResult;
    }
    if (mSphereClsn.func_02038a38()) {
        prev = (int*)&mSphereClsn.disp;
        if ((mSphereClsn.flags & 4) && floorCommitted == 0)
            func_020371b0(this, wasOnGround);
        if (ShouldUpdatePos()) {
            pos[0] += prev[0];
            if (ShouldUpdatePosY())
                pos[1] += prev[1];
            pos[2] += prev[2];
        }
    }
    if (wasOnGround && IsOnGround() == 0)
        func_020356d4(((char*)this));
    _ZN5dBgPiD1Ev((dBgPi *)&wallResult);
    _ZN5dBgPiD1Ev((dBgPi *)&floorResult);
}

#pragma opt_common_subs on

/* Keep the component load order used by the three-result sweep. */
static inline void CopyVectorAddY(Vector3 &out, const Vector3 *position, s32 height)
{
    s32 x, y, z;
    z = position->z;
    y = position->y;
    x = position->x;
    y = y + height;
    out.x = x;
    out.y = y;
    out.z = z;
}

static inline void CopyVector(Vector3 &out, const Vector3 *position)
{
    s32 x, y, z;
    z = position->z;
    y = position->y;
    x = position->x;
    out.x = x;
    out.y = y;
    out.z = z;
}

#pragma opt_common_subs off

// @symbol _ZN10dBgCh_Actr20UpdateExtraContinousEv
/* The full three-result variant: raycast first for wall/floor/ceiling, then
   the sphere, then a follow-up raycast past the displacement. The dBgPiLoc
   savedWallResult copies a wall result's fields by hand so the compiler's own dBgPi
   copy is not used there. */
void dBgCh_Actr::UpdateExtraContinous()
{
    char *t = (char *)this;
    s32 hasFloorHit, hasWallHit, hasCeilingHit, height, wasOnGround, floorCommitted;
    Vector3 *position, *previousPosition;
    dActor_c *actor;

    actor = mActor;
    position = (Vector3 *)&actor->mPosX;
    previousPosition = (Vector3 *)&actor->mPrevPosX;

    if (IsOnGround() && func_020355a0((int*)t))
        func_02038324((void *)mSphereClsn.GetFloorResult(), (int)position,
                      mSphereClsn.unk_10c, unk_130);

    {

        hasFloorHit = 0;
        dBgPi floorResult;

        hasWallHit = 0;
        dBgPi wallResult;

        hasCeilingHit = 0;
        dBgPi ceilingResult;

        height = mHeight;

        Vector3 sweepStart;

        CopyVectorAddY(sweepStart, previousPosition, height);
        Vector3 previousBase;

        CopyVector(previousBase, previousPosition);
        mRaycastLine.SetObjAndLine(previousBase, sweepStart, mActor);

        if (func_0203859c(&mRaycastLine))
        {
            sweepStart = mRaycastLine.GetClsnPos();
            Vector3 startNormal;
            mRaycastLine.surface.CopyNormalTo(startNormal);
            sweepStart.x = sweepStart.x + (startNormal.x >> 2);
            sweepStart.y = sweepStart.y + (startNormal.y >> 2);
            sweepStart.z = sweepStart.z + (startNormal.z >> 2);
        }

        Vector3 sweepEnd;

        CopyVectorAddY(sweepEnd, position, height);
        mRaycastLine.SetObjAndLine(sweepStart, sweepEnd, mActor);

        if (mRaycastLine.DetectClsn())
        {
            Vector3 sweepNormal;
            mRaycastLine.surface.CopyNormalTo(sweepNormal);
            s32 kind; kind = func_02039794(sweepNormal.y);
            if (kind == 1)
            {
                hasWallHit = 1;
                mRaycastLine.dBgPi::CopyTo(wallResult);
            }
            else if (kind == 2)
            {
                hasCeilingHit = 1;
                mRaycastLine.dBgPi::CopyTo(ceilingResult);
            }
            else if (kind == 0)
            {
                hasFloorHit = 1;
                mRaycastLine.dBgPi::CopyTo(floorResult);
            }

            Vector3 sweepHit = mRaycastLine.GetClsnPos();
            Vector3 downProbeStart;
            downProbeStart.x = sweepHit.x + (sweepNormal.x >> 2);
            downProbeStart.y = sweepHit.y + (sweepNormal.y >> 2);
            downProbeStart.z = sweepHit.z + (sweepNormal.z >> 2);
            Vector3 downProbeEnd;
            downProbeEnd.x = downProbeStart.x;
            downProbeEnd.y = downProbeStart.y - height;
            downProbeEnd.z = downProbeStart.z;
            mRaycastLine.SetObjAndLine(downProbeStart, downProbeEnd, mActor);

            if (mRaycastLine.DetectClsn())
            {
                Vector3 downProbeHit = mRaycastLine.GetClsnPos();
                Vector3 downProbeNormal;
                mRaycastLine.surface.CopyNormalTo(downProbeNormal);
                if (func_02039794(downProbeNormal.y) == 0)
                {
                    hasFloorHit = 1;
                    mRaycastLine.dBgPi::CopyTo(floorResult);
                }
                downProbeHit.x = downProbeHit.x + (downProbeNormal.x << 2);
                downProbeHit.y = downProbeHit.y + (downProbeNormal.y << 2);
                downProbeHit.z = downProbeHit.z + (downProbeNormal.z << 2);
                Vector3 upProbeEnd;
                upProbeEnd.x = downProbeHit.x;
                upProbeEnd.y = downProbeHit.y + (height << 1);
                upProbeEnd.z = downProbeHit.z;
                mRaycastLine.SetObjAndLine(downProbeHit, upProbeEnd, mActor);

                if (mRaycastLine.DetectClsn())
                {
                    Vector3 upProbeHit = mRaycastLine.GetClsnPos();
                    position->x = upProbeHit.x;
                    position->y = ((upProbeHit.y + downProbeHit.y) >> 1) - height;
                    position->z = upProbeHit.z;
                }
                else
                {
                    position->x = downProbeHit.x - (downProbeNormal.x >> 2);
                    position->y = downProbeHit.y - (downProbeNormal.y >> 2) - (height >> 1);
                    position->z = downProbeHit.z - (downProbeNormal.z >> 2);
                }
            }
            else
            {
                position->x = sweepHit.x + (sweepNormal.x >> 2);
                position->y = sweepHit.y + (sweepNormal.y >> 2) - height;
                position->z = sweepHit.z + (sweepNormal.z >> 2);
            }

            Vector3 previousCenter;

            CopyVectorAddY(previousCenter, previousPosition, height);
            Vector3 correctedCenter;

            CopyVectorAddY(correctedCenter, position, height);
            mRaycastLine.SetObjAndLine(previousCenter, correctedCenter, mActor);

            if (mRaycastLine.DetectClsn() &&
                ((Vector3 *)func_02037dc4((int)&mRaycastLine.surface))->y >= 0)
            {
                Vector3 *collisionPosition = &mRaycastLine.lineEnd;
                position->x = collisionPosition->x;
                position->y = collisionPosition->y;
                position->z = collisionPosition->z;
            }
        }

        wasOnGround = IsOnGround();
        ClearAllGroundFlags();
        floorCommitted = 0;

        Vector3 sphereCenter;
        sphereCenter.x = position->x;
        sphereCenter.y = position->y;
        sphereCenter.z = position->z;
        sphereCenter.y = sphereCenter.y + height;
        _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
            &mSphereClsn, &sphereCenter, mRadius, mActor);

        mSphereClsn.mScale = mScale;
        if (func_02035764((int*)t))
            mSphereClsn.flags |= 2;
        if (position->y - previousPosition->y > 0)
            mSphereClsn.flags |= 0x20;

        if (hasFloorHit)
        {
            mSphereClsn.flags |= 4;
            mSphereClsn.SetFloorResult(floorResult);
            mSphereClsn.flags |= 1;
            (dBgPi &)mSphereClsn = floorResult;
            func_020371b0(this, wasOnGround);
            floorCommitted = 1;
        }
        if (hasWallHit)
        {
            mSphereClsn.flags |= 8;
            mSphereClsn.SetWallResult(wallResult);
            mSphereClsn.flags |= 1;
            (dBgPi &)mSphereClsn = wallResult;
        }
        if (hasCeilingHit)
        {
            mSphereClsn.flags |= 0x10;
            mSphereClsn.SetUnderResult(ceilingResult);
            mSphereClsn.flags |= 1;
            (dBgPi &)mSphereClsn = ceilingResult;
        }

        if (mSphereClsn.DetectClsn())
        {
            Vector3 *displacement = &mSphereClsn.disp;
            if ((mSphereClsn.flags & 4) && floorCommitted == 0)
            {
                func_020371b0(this, wasOnGround);
                floorCommitted = 1;
            }
            position->x = position->x + displacement->x;
            if (ShouldUpdatePosY())
                position->y = position->y + displacement->y;
            position->z = position->z + displacement->z;

            if (func_020355dc((int*)t))
            {
                Vector3 upperProbeStart;

                CopyVectorAddY(upperProbeStart, position, (height << 1));
                Vector3 lowerProbeEnd;

                CopyVector(lowerProbeEnd, position);
                mRaycastLine.SetObjAndLine(upperProbeStart, lowerProbeEnd, mActor);
                if (mRaycastLine.DetectClsn())
                {
                    Vector3 *collisionPosition = &mRaycastLine.lineEnd;
                    Vector3 *collisionNormal = (Vector3 *)func_02037dc4((int)&mRaycastLine.surface);
                    position->x = collisionPosition->x + (collisionNormal->x >> 2);
                    position->y = collisionPosition->y + (collisionNormal->y >> 2);
                    position->z = collisionPosition->z + (collisionNormal->z >> 2);
                }
            }

            s32 resultFlags; resultFlags = mSphereClsn.flags;
            if (!(resultFlags & 4) && (resultFlags & 8))
            {
                dBgPiLoc savedWallResult;
                dBgPiLoc *wallResultPtr = (dBgPiLoc *)(int)mSphereClsn.GetWallResult();
                SurfaceInfo *savedWallSurface = &savedWallResult.si;
                {
                    s32 c0, c1;
                    c0 = *(volatile s32 *)&wallResultPtr->si.clps.w0;
                    c1 = *(volatile s32 *)&wallResultPtr->si.clps.w1;
                    savedWallSurface->clps.w0 = c0;
                    savedWallSurface->clps.w1 = c1;
                    savedWallSurface->normal.x = wallResultPtr->si.normal.x;
                    savedWallSurface->normal.y = wallResultPtr->si.normal.y;
                    savedWallSurface->normal.z = wallResultPtr->si.normal.z;
                }
                savedWallResult.vt = (u32 *)data_02099368;
                savedWallResult.tri = wallResultPtr->tri;
                savedWallResult.clsn = wallResultPtr->clsn;
                savedWallResult.objID = wallResultPtr->objID;
                savedWallResult.obj = wallResultPtr->obj;
                savedWallResult.mesh = wallResultPtr->mesh;

                if (((Vector3 *)func_02037dc4((int)savedWallSurface))->y >= 0)
                {
                    Vector3 wallDownStart;

                    CopyVectorAddY(wallDownStart, position, (height << 1));
                    Vector3 wallDownEnd;

                    CopyVector(wallDownEnd, position);
                    mRaycastLine.SetObjAndLine(wallDownStart, wallDownEnd, mActor);
                    if (mRaycastLine.DetectClsn())
                    {
                        Vector3 *collisionPosition = &mRaycastLine.lineEnd;
                        Vector3 *collisionNormal = (Vector3 *)func_02037dc4((int)&mRaycastLine.surface);
                        position->x = collisionPosition->x + (collisionNormal->x >> 2);
                        position->y = collisionPosition->y + (collisionNormal->y >> 2);
                        position->z = collisionPosition->z + (collisionNormal->z >> 2);
                        s32 surfaceKind; surfaceKind = func_02039794(collisionNormal->y);
                        if (surfaceKind == 1 && !(mSphereClsn.flags & 8))
                        {
                            dBgPi *lineResult = (dBgPi *)&mRaycastLine;
                            mSphereClsn.flags |= 8;
                            mSphereClsn.SetWallResult(*(const dBgPi *)lineResult);
                            mSphereClsn.flags |= 1;
                            (dBgPi &)mSphereClsn = *lineResult;
                        }
                        else if (surfaceKind == 0 && !(mSphereClsn.flags & 4))
                        {
                            dBgPi *lineResult = (dBgPi *)&mRaycastLine;
                            mSphereClsn.flags |= 4;
                            mSphereClsn.SetFloorResult(*lineResult);
                            mSphereClsn.flags |= 1;
                            (dBgPi &)mSphereClsn = *lineResult;
                            if (floorCommitted == 0)
                                func_020371b0(this, wasOnGround);
                        }
                        else if (surfaceKind == 2 && !(mSphereClsn.flags & 0x10))
                        {
                            dBgPi *lineResult = (dBgPi *)&mRaycastLine;
                            mSphereClsn.flags |= 0x10;
                            mSphereClsn.SetUnderResult(*(const dBgPi *)lineResult);
                            mSphereClsn.flags |= 1;
                            (dBgPi &)mSphereClsn = *lineResult;
                        }
                    }
                }
                else
                {
                    s32 doubledHeight = height << 1;
                    Vector3 wallUpStart;

                    CopyVector(wallUpStart, position);
                    Vector3 wallUpEnd;

                    CopyVectorAddY(wallUpEnd, position, (height << 1));
                    mRaycastLine.SetObjAndLine(wallUpStart, wallUpEnd, mActor);
                    if (mRaycastLine.DetectClsn())
                    {
                        Vector3 *collisionPosition = &mRaycastLine.lineEnd;
                        Vector3 *collisionNormal = (Vector3 *)func_02037dc4((int)&mRaycastLine.surface);
                        position->x = collisionPosition->x + (collisionNormal->x >> 2);
                        position->y = collisionPosition->y + (collisionNormal->y >> 2) - doubledHeight;
                        position->z = collisionPosition->z + (collisionNormal->z >> 2);
                    }
                }
                _ZN5dBgPiD1Ev((dBgPi *)&savedWallResult);
            }
            else if (mSphereClsn.aabbMin.y <= -height)
            {
                Vector3 fallbackStart;

                CopyVectorAddY(fallbackStart, previousPosition, height);
                Vector3 fallbackEnd;

                CopyVectorAddY(fallbackEnd, position, height);
                mRaycastLine.SetObjAndLine(fallbackStart, fallbackEnd, mActor);
                if (func_0203859c(&mRaycastLine))
                {
                    Vector3 *collisionPosition = &mRaycastLine.lineEnd;
                    Vector3 *collisionNormal = (Vector3 *)func_02037dc4((int)&mRaycastLine.surface);
                    position->x = collisionPosition->x + (collisionNormal->x >> 2);
                    position->y = collisionPosition->y + (collisionNormal->y >> 2);
                    position->z = collisionPosition->z + (collisionNormal->z >> 2);
                }
            }
        }

        if (wasOnGround && !IsOnGround())
            func_020356d4(t);

    }
}

#pragma opt_common_subs on

// @symbol _ZN10dBgCh_Actr12Unk_0203589cEv
void dBgCh_Actr::Unk_0203589c()
{
    mSphereClsn.func_02037b5c();
}

// @symbol func_02035860
/* Copy a vector into the actor's current and previous position fields. */
extern "C" void func_02035860(char *o, struct Vector3 *newPosition)
{
    dActor_c *actor = ((dBgCh_Actr *)o)->mActor;
    struct Vector3 *position = (Vector3 *)&actor->mPosX;
    position->x = newPosition->x;
    position->y = newPosition->y;
    position->z = newPosition->z;
    struct Vector3 *previousPosition = (Vector3 *)&actor->mPrevPosX;
    previousPosition->x = newPosition->x;
    previousPosition->y = newPosition->y;
    previousPosition->z = newPosition->z;
}

// @symbol _ZN10dBgCh_Actr19StartDetectingWaterEv
/* Forwards to both sub-objects' dBgCh bases, the dBgCh_Lin at 0x134 first and
   the dBgCh_SphCrr at 0x20 second -- that is the ROM's order. */
void dBgCh_Actr::StartDetectingWater()
{
    ((dBgCh *)&mRaycastLine)->StartDetectingWater();
    ((dBgCh *)&mSphereClsn)->StartDetectingWater();
}

// @symbol _ZN10dBgCh_Actr18StopDetectingWaterEv
/* Mirror of StartDetectingWater: the line sub-object first, then the sphere. */
void dBgCh_Actr::StopDetectingWater()
{
    ((dBgCh *)&mRaycastLine)->StopDetectingWater();
    ((dBgCh *)&mSphereClsn)->StopDetectingWater();
}

// @symbol func_02035800
extern "C" void func_02035800(dBgCh_Actr *self)
{
    func_02035428((char *)&self->mRaycastLine);
    func_02035428((char *)&self->mSphereClsn);
}

// @symbol func_020357e0
extern "C" void func_020357e0(dBgCh_Actr *self)
{
    func_02035414((char *)&self->mRaycastLine);
    func_02035414((char *)&self->mSphereClsn);
}

// @symbol func_020357c0
extern "C" void func_020357c0(dBgCh_Actr *self)
{
    func_020353f4((char *)&self->mRaycastLine);
    func_020353f4((char *)&self->mSphereClsn);
}

// @symbol func_020357a0
extern "C" void func_020357a0(dBgCh_Actr *self)
{
    func_020353e0((char *)&self->mRaycastLine);
    func_020353e0((char *)&self->mSphereClsn);
}

// @symbol func_02035798
extern "C" void func_02035798(int *p, int v)
{
    ((dBgCh_Actr *)p)->mScale = v;
}

// @symbol func_02035784
extern "C" void func_02035784(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x200;
}

// @symbol func_02035770
extern "C" void func_02035770(char *self)
{
    ((dBgCh_Actr *)self)->mFlags &= ~0x200;
}

// @symbol func_02035764
extern "C" int func_02035764(int *p)
{
    return ((dBgCh_Actr *)p)->mFlags & 512;
}

// @symbol _ZN10dBgCh_Actr19ClearAllGroundFlagsEv
void dBgCh_Actr::ClearAllGroundFlags()
{
    mFlags &= ~0x70;
}

// @symbol func_0203573c
extern "C" void func_0203573c(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x20;
}

// @symbol _ZN10dBgCh_Actr22ClearJustHitGroundFlagEv
void dBgCh_Actr::ClearJustHitGroundFlag()
{
    mFlags &= ~0x20;
}

// @symbol _ZNK10dBgCh_Actr13JustHitGroundEv
/* Returns 0 or 0x20, the mask itself -- no normalisation. */
s32 dBgCh_Actr::JustHitGround() const
{
    return mFlags & 0x20;
}

// @symbol _ZN10dBgCh_Actr13SetGroundFlagEv
void dBgCh_Actr::SetGroundFlag()
{
    mFlags |= 0x10;
}

// @symbol _ZN10dBgCh_Actr15ClearGroundFlagEv
void dBgCh_Actr::ClearGroundFlag()
{
    mFlags &= ~0x10;
}

// @symbol _ZNK10dBgCh_Actr10IsOnGroundEv
/* Returns 0 or 0x10, the mask itself -- no normalisation. */
s32 dBgCh_Actr::IsOnGround() const
{
    return mFlags & 0x10;
}

// @symbol func_020356d4
extern "C" void func_020356d4(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x40;
}

// @symbol func_020356c8
extern "C" int func_020356c8(int *p)
{
    return ((dBgCh_Actr *)p)->mFlags & 64;
}

// @symbol _ZN10dBgCh_Actr13SetLimMovFlagEv
void dBgCh_Actr::SetLimMovFlag()
{
    mFlags |= 0x80;
}

// @symbol _ZN10dBgCh_Actr15ClearLimMovFlagEv
void dBgCh_Actr::ClearLimMovFlag()
{
    mFlags &= ~0x80;
}

// @symbol _ZNK10dBgCh_Actr13GetLimMovFlagEv
/* The limited-movement flag: 0 or 0x80, the mask itself. */
s32 dBgCh_Actr::GetLimMovFlag() const
{
    return mFlags & 0x80;
}

// @symbol func_0203568c
extern "C" void func_0203568c(int *p, int v)
{
    ((dBgCh_Actr *)p)->mRadius = v;
}

// @symbol func_02035684
extern "C" void func_02035684(int *p, int v)
{
    ((dBgCh_Actr *)p)->mHeight = v;
}

// @symbol func_0203567c
extern "C" int func_0203567c(int p)
{
    return p + 48;   /* the query's own dBgPi base, &mSphereClsn + 0x10 */
}

// @symbol _ZNK10dBgCh_Actr14GetFloorResultEv
void *dBgCh_Actr::GetFloorResult() const
{
    return (void *)const_cast<dBgCh_SphCrr &>(mSphereClsn).GetFloorResult();
}

// @symbol _ZNK10dBgCh_Actr13GetWallResultEv
void *dBgCh_Actr::GetWallResult() const
{
    return (void *)(int)const_cast<dBgCh_SphCrr &>(mSphereClsn).GetWallResult();
}

// @symbol func_0203564c
extern "C" int func_0203564c(int p)
{
    return (int)((dBgCh_SphCrr *)(p + 0x20))->GetUnderResult();
}

// @symbol func_02035644
extern "C" void func_02035644(int *p, int v)
{
    ((dBgCh_Actr *)p)->mSphereClsn.unk_0ec = v;
}

// @symbol func_02035638
extern "C" int func_02035638(unsigned char *p)
{
    return ((dBgCh_Actr *)p)->mSphereClsn.flags & 0x10;
}

// @symbol _ZNK10dBgCh_Actr8IsOnWallEv
/* Returns 0 or 8, the mask itself -- no normalisation. */
s32 dBgCh_Actr::IsOnWall() const
{
    return mSphereClsn.flags & 0x8;
}

// @symbol _ZNK10dBgCh_Actr14GetResultFlag1Ev
/* True when the sphere query found any collision at all: mClsnFlags & 1. */
s32 dBgCh_Actr::GetResultFlag1() const
{
    return mSphereClsn.flags & 0x1;
}

// @symbol _ZNK10dBgCh_Actr12TouchesWaterEv
s32 dBgCh_Actr::TouchesWater() const
{
    return SurfaceInfo_TestFlag0x20((int *)&mSphereClsn.surface);
}

// @symbol func_020355fc
extern "C" void func_020355fc(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x400;
}

// @symbol func_020355e8
extern "C" void func_020355e8(char *self)
{
    ((dBgCh_Actr *)self)->mFlags &= ~0x400;
}

// @symbol func_020355dc
extern "C" int func_020355dc(int *p)
{
    return ((dBgCh_Actr *)p)->mFlags & 1024;
}

// @symbol func_020355c8
extern "C" void func_020355c8(char *self)
{
    ((dBgCh_Actr *)self)->mFlags &= ~0x800;
}

// @symbol func_020355b4
extern "C" void func_020355b4(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x800;
}

// @symbol func_020355a0
extern "C" int func_020355a0(int *p)
{
    return (((dBgCh_Actr *)p)->mFlags & 2048) == 0;
}

// @symbol func_0203558c
extern "C" void func_0203558c(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x1000;
}

// @symbol _ZNK10dBgCh_Actr16ShouldUpdatePosYEv
/* The inverse of the no-update-pos-Y flag, normalised to 0/1. */
s32 dBgCh_Actr::ShouldUpdatePosY() const
{
    return (mFlags & 0x1000) == 0;
}

// @symbol _ZNK10dBgCh_Actr15ShouldUpdatePosEv
/* The inverse of the no-update-pos flag, normalised to 0/1. */
s32 dBgCh_Actr::ShouldUpdatePos() const
{
    return (mFlags & 0x2000) == 0;
}

// @symbol func_02035550
extern "C" void func_02035550(char *self)
{
    ((dBgCh_Actr *)self)->mFlags |= 0x4000;
}

// @symbol func_0203553c
extern "C" int func_0203553c(int *p)
{
    return (((dBgCh_Actr *)p)->mFlags & 16384) == 0;
}
