//cpp
/* The constructor precedes the destructor definition. C2 and D2 have no
 * cartridge home. func_0203aa10, func_0203aa74 and func_0203aad0 retain
 * their address names and C linkage; DetectClsn and GetNormal call them
 * by address, and daObjKm2_Nobiru_c reads scaleY through func_0203aad0.
 * SetFile and SetScaleY stay mangled: the scale arguments are Fix12 by
 * value. func_0203aa74 multiplies y by invScaleY after the parent's inverse
 * matrix; func_0203aa10 applies scaleY before the parent's scaled matrix.
 */
/* dBgW_KcMbgSclY: mesh collider stretched in y (Snowman's body, lift
 * chains). Type name 0x02099474, typeinfo 0x02099468, vtable 0x02099490.
 */
#include "types.h"
#include "dBgW_KcMbgSclY.h"
#include "dBgCh_Lin.h"
#include "dBgCh_Gnd.h"
#include "dBgCh_SphCrr.h"
#include "dBgPi.h"

extern "C" {
/* This TU's own free helpers, called from the members below. */
void func_0203aa10(dBgW_KcMbgSclY *self, Vector3 *v, Vector3 *res);
void func_0203aa74(dBgW_KcMbgSclY *self, Vector3 *v, Vector3 *res);
s32 func_0203aad0(dBgW_KcMbgSclY *self);

/* Shared math workers. */
void MulVec3Mat4x3(Vector3 *v, Matrix4x3 *m, Vector3 *res);
void NormalizeVec3(Vector3 *src, Vector3 *dst);
void func_02039db8(dBgW_KcMbg *self, Vector3 *v, Vector3 *res);
int func_02053200(int v);

/* Collision-query plumbing shared with the KcMbg checkers. */
void func_02035394(void *dst, void *src);

/* local extern: the radius is Fix12 by value, so the call spells the symbol. */
void _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(
    dBgCh_SphCrr *sphere, const Vector3 *pos, Fix12i radius, dActor_c *actor);
void _ZN10dBgW_KcMbg7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(
    void *thiz, void *f, const Matrix4x3 *m, int fix, short s, void *b);

extern dBgCh_Lin data_020a0d0c;   /* the scratch line, in collider space */
extern Vector3   data_020a0d60;   /* == data_020a0d0c.lineEnd  (+0x54) */
extern dBgPi     data_020a0d1c;   /* == data_020a0d0c's dBgPi   (+0x10) */
}

// @symbol _ZN14dBgW_KcMbgSclYC1Ev
dBgW_KcMbgSclY::dBgW_KcMbgSclY()
{
}

// @symbol _ZN14dBgW_KcMbgSclYD0Ev
// @symbol _ZN14dBgW_KcMbgSclYD1Ev
dBgW_KcMbgSclY::~dBgW_KcMbgSclY()
{
}

// @symbol _ZN14dBgW_KcMbgSclY7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block
extern "C" void _ZN14dBgW_KcMbgSclY7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(
    dBgW_KcMbgSclY *self, KCL_File *file, const Matrix4x3 *transform, Fix12i uniformScale, s16 angle, CLPS_Block *clps)
{
    _ZN10dBgW_KcMbg7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(self, file, transform, uniformScale, angle, clps);
    self->scaleY = 0x1000;
    self->invScaleY = 0x1000;
}

// @symbol _ZN14dBgW_KcMbgSclY9SetScaleYE5Fix12IiE
extern "C" void _ZN14dBgW_KcMbgSclY9SetScaleYE5Fix12IiE(dBgW_KcMbgSclY *self, Fix12i newScaleY)
{
    self->scaleY = newScaleY;
    if (self->scaleY == 0) return;
    self->invScaleY = func_02053200(self->scaleY);
}

// @symbol func_0203aad0
extern "C" s32 func_0203aad0(dBgW_KcMbgSclY *self)
{
    return self->scaleY;
}

/* World -> collider space: the parent's inverse-scale matrix, then a divide
 * out of the y stretch. */
// @symbol func_0203aa74
extern "C" void func_0203aa74(dBgW_KcMbgSclY *self, Vector3 *worldPos, Vector3 *localPos)
{
    MulVec3Mat4x3(worldPos, &self->invScaledMat, localPos);
    Fix12i inverseVerticalScale = self->invScaleY;
    if (inverseVerticalScale == 0x1000)
        return;
    localPos->y = (Fix12i)(((s64)localPos->y * inverseVerticalScale + 0x800) >> 12);
}

/* Collider -> world space: fold the y stretch in first, then the parent's
 * scaled matrix. */
// @symbol func_0203aa10
extern "C" void func_0203aa10(dBgW_KcMbgSclY *self, Vector3 *localPos, Vector3 *worldPos)
{
    Vector3 scaledPos;
    scaledPos.x = localPos->x;
    scaledPos.y = localPos->y;
    scaledPos.z = localPos->z;
    if (self->scaleY != 0x1000) {
        Fix12i verticalScale = self->scaleY;
        scaledPos.y = (Fix12i)(((s64)scaledPos.y * verticalScale + 0x800) >> 12);
    }
    MulVec3Mat4x3(&scaledPos, &self->newScaledMat, worldPos);
}

// @symbol _ZN14dBgW_KcMbgSclY9Virtual08Ev
void dBgW_KcMbgSclY::Virtual08()
{
}

// @symbol _ZN14dBgW_KcMbgSclY10DetectClsnER9dBgCh_Gnd
int dBgW_KcMbgSclY::DetectClsn(dBgCh_Gnd &ground)
{
    Vector3 localStart;
    Vector3 probePos;
    Vector3 localEnd;
    Vector3 lineEnd;

    ground.GetClsnPos(probePos);
    lineEnd = probePos;

    int probeHeight = ground.mProbeHeight;
    if (ground.hasClsn != 0) {
        int distanceToHit = probePos.y - ground.clsnY;
        if (distanceToHit < probeHeight)
            probeHeight = distanceToHit;
    }
    lineEnd.y -= probeHeight;

    func_0203aa74(this, &probePos, &localStart);
    func_0203aa74(this, &lineEnd, &localEnd);

    dBgCh_Lin ray;
    ray.SetObjAndLine(localStart, localEnd, 0);
    func_02035394(&ray, &ground);

    int hit = dBgW_Kc::DetectClsn(ray);
    if (hit != 0) {
        Vector3 clsnPos = ray.GetClsnPos();
        Vector3 worldPos;
        func_0203aa10(this, &clsnPos, &worldPos);
        (dBgPi &)ground = (dBgPi &)ray;
        ground.clsnY = worldPos.y;
        ground.hasClsn = 1;
    }
    return hit;
}

// @symbol _ZN14dBgW_KcMbgSclY10DetectClsnER12dBgCh_SphCrr
#pragma opt_common_subs off

#define FMUL(a, b) ((int)(((s64)(a) * (b) + 0x800) >> 12))

int dBgW_KcMbgSclY::DetectClsn(dBgCh_SphCrr &sphere)
{
    Vector3 centre;
    Vector3 localCentre;
    /* Keep the bounds in one plain workspace; Vector3 adds object lifetimes. */
    struct CorrectionBounds {
        s32 localMin[3], localMax[3];
        s32 scaledMin[3], scaledMax[3];
    } bounds;
    int inverseScale;
    int localRadius;
    int localExtraExtent;
    int hit;

    sphere.GetCentre(centre);
    func_0203aa74(this, &centre, &localCentre);

    inverseScale = invScale;
    localRadius = FMUL(sphere.radius, inverseScale);
    localExtraExtent = FMUL(sphere.unk_0ec, inverseScale);

    dBgCh_SphCrr localSphere;
    _ZN12dBgCh_SphCrr15SetObjAndSphereERK7Vector35Fix12IiEP8dActor_c(&localSphere, &localCentre, localRadius, 0);
    localSphere.unk_0ec = localExtraExtent;
    localSphere.func_02037940(sphere.flags);
    func_02035394(&localSphere, &sphere);
    hit = dBgW_Kc::DetectClsn(localSphere);
    if (hit) {
        /* Convert the local correction bounds back to the uniform scale. */
        localSphere.func_02037a04((Vector3 *)bounds.localMin, (Vector3 *)bounds.localMax);
        bounds.scaledMin[0] = FMUL(bounds.localMin[0], scale);
        bounds.scaledMin[1] = FMUL(bounds.localMin[1], scale);
        bounds.scaledMin[2] = FMUL(bounds.localMin[2], scale);
        bounds.scaledMax[0] = FMUL(bounds.localMax[0], scale);
        bounds.scaledMax[1] = FMUL(bounds.localMax[1], scale);
        bounds.scaledMax[2] = FMUL(bounds.localMax[2], scale);
        sphere.func_02037a6c(bounds.scaledMin[0], bounds.scaledMin[1], bounds.scaledMin[2],
            bounds.scaledMax[0], bounds.scaledMax[1], bounds.scaledMax[2]);
        (dBgPi &)sphere = (dBgPi &)localSphere;
        sphere.flags |= 1;
        if (localSphere.flags & 4) {
            if (sphere.flags & 4) {
                hit &= ~1;
            } else {
                sphere.SetFloorResult(*localSphere.GetFloorResult());
            }
            sphere.flags |= 4;
            if (sphere.mFloorNormalY < localSphere.mFloorNormalY) {
                sphere.func_0203794c(&localSphere.mFloorNormalX);
            }
        }
        if (localSphere.flags & 8) {
            sphere.SetWallResult(*localSphere.GetWallResult());
            sphere.flags |= 8;
        }
        if (localSphere.flags & 0x10) {
            sphere.SetUnderResult(*localSphere.GetUnderResult());
            sphere.flags |= 0x10;
        }
    }
    return hit;
}

#pragma opt_common_subs on

/* A vertically-scaled mesh collider cannot be tested against a world-space
 * segment directly, so both endpoints are transformed into collider space,
 * the unscaled dBgW_Kc test runs on the scratch line there, and the winning
 * point transforms back out. The qualified dBgW_Kc::DetectClsn call keeps
 * this override from dispatching back into itself. */
// @symbol _ZN14dBgW_KcMbgSclY10DetectClsnER9dBgCh_Lin
int dBgW_KcMbgSclY::DetectClsn(dBgCh_Lin &ray)
{
    Vector3 start, end, worldPos;

    func_0203aa74(this, &ray.start, &start);
    func_0203aa74(this, &ray.lineEnd, &end);

    u8 hadClsn = ray.hasClsn;
    data_020a0d0c.SetObjAndLine(start, end, 0);
    if (hadClsn != 0)
        data_020a0d0c.hasClsn = 1;
    func_02035394(&data_020a0d0c, &ray);

    int hit = dBgW_Kc::DetectClsn(data_020a0d0c);
    if (hit != 0) {
        Fix12i dist = data_020a0d0c.clsnDist;
        func_0203aa10(this, &data_020a0d60, &worldPos);
        ray.SetClsnPos(worldPos);
        ray.clsnDist = dist;
        /* the dBgPi base sub-object, at +0x10 */
        (dBgPi &)ray = data_020a0d1c;
        ray.hasClsn = 1;
    }
    return hit;
}

/* The mesh only stretches in y, so the normal's x and z scale by scaleY
 * and the vector is re-normalized. The double scaleY read mirrors the ROM. */
// @symbol _ZN14dBgW_KcMbgSclY9GetNormalEsR7Vector3
void dBgW_KcMbgSclY::GetNormal(s16 triID, Vector3 &res)
{
    KCL_File *mesh = kclFile;
    u16 normalIndex = mesh->tris[triID].normalIdx;
    s16 *packedNormal = mesh->normals[normalIndex];
    Vector3 normal;
    Fix12i verticalScale;
    normal.x = packedNormal[0] << 2;
    normal.y = packedNormal[1] << 2;
    normal.z = packedNormal[2] << 2;
    verticalScale = scaleY;
    normal.x = (Fix12i)(((s64)normal.x * verticalScale + 0x800) >> 12);
    verticalScale = scaleY;
    normal.z = (Fix12i)(((s64)normal.z * verticalScale + 0x800) >> 12);
    NormalizeVec3(&normal, &normal);
    func_02039db8(this, &normal, &res);
}
