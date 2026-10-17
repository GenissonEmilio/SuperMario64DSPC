//cpp
/* daObjDlPyramid_c and daObjDlPyramidDummy_c. ov024 0x021111a0..0x021118ac,
 * 16 functions.
 *
 * The pyramid top in Shifting Sand Land and the four invisible tags on its
 * faces. Each tag that is touched looks the top up by unique ID and bumps
 * its count; at four the top plays the secret jingle, spins its way down
 * into the sand and leaves the level-specific event flag set.
 *
 * ROM names from _ZTS16daObjDlPyramid_c and _ZTS21daObjDlPyramidDummy_c.
 * Vtables _ZTV16daObjDlPyramid_c at 0x021138c8 and
 * _ZTV21daObjDlPyramidDummy_c at 0x02113844. The two classInit factories
 * that follow InitResources (0x0211183c, 0x02111874) are zero-gap and folded
 * in here; the next run starts at 0x021118ac.
 *
 * #pragma defer_codegen off lays .text down in source order, so the file
 * reads in ROM order. The four helpers keep their unmangled ROM-only
 * names and take the top by pointer.
 *
 * deslop
 * Leftover: the four helpers keep their unmangled ROM-only names
 *   (func_ov024_021112c0, 02111350, 02111480, 021114c4). They are this TU's
 *   own statics/helpers, not vtable slots, and no header names them.
 * Leftover: dBgW_KcMbg::SetFile, Model::LoadFile and dCcAc_c::Init keep
 *   their mangled extern-C spellings. SetFile takes Fix12<int> by value
 *   (Fix12 wall, notes/mwccarm-codegen.md 6az).
 * The two resource handles below (model gDlPyramidModelFile, collision
 * gDlPyramidCollisionFile) are defined by this TU; mwcc builds
 * __sinit_d_a_obj_dl_pyramid.cpp from them. data_ov024_021129f0 is the
 * collision CLPS block, overlay .data this TU does not own.
 */

/* Runtime asset handles resolved through the overlay 0 file table. */
enum daObjDlPyramid_c_AssetId {
    ASSET_DL_PYRAMID_BMD = 0x05dd,
    ASSET_DL_PYRAMID_KCL = 0x05de
};

#include "daObjDlPyramid_c.h"
#include "daObjDlPyramidDummy_c.h"
#include "common.h"
#include "Sound.h"
#include "SharedFilePtr.h"
#include "dBgW.h"
#include "dMap_c.h"

struct BMD_File;
struct KCL_File;
struct CLPS_Block;

namespace Event { void SetBit(unsigned int bit); int ClearBit(unsigned int bit); }

/* Fix12<int> is passed by value at these call boundaries. Spelled as the
 * class type, mwccarm homes the register arguments and the callers grow, so
 * the measured scalar views stay. */
extern "C" {
void *_ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(u32 id, int x, int y, int z);
int _ZN8Particle6System3NewEjj5Fix12IiES2_S2_PK11Vector3_16fPNS_8CallbackE(
    u32 handle, u32 id, int x, int y, int z, void *dir, void *callback);
void _ZN7dCcAc_c4InitEP8dActor_c5Fix12IiES3_jj(
    void *cylinder, dActor_c *owner, Fix12i radius, Fix12i height, u32 flags, u32 hitFlags);
void _ZN10dBgW_KcMbg7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(
    void *collider, void *kcl, void *mat, int scale, short angY, void *clps);
void Matrix4x3_FromRotationY(void *m, int angleY);
void func_020393d4(int *collider, int callback);

extern s16 data_02082214[];         /* sine/cosine table, interleaved */
extern int data_ov024_021129f0[];   /* the collision CLPS block */

void func_ov024_021112c0(daObjDlPyramid_c *self);
void func_ov024_02111350(daObjDlPyramid_c *self);
void func_ov024_02111480(daObjDlPyramid_c *self);
void func_ov024_021114c4(daObjDlPyramid_c *self);
}

/* The retail static initializer constructs these two 8-byte resource handles
 * in source order (model 1501, then collision 1502) and lets the C++ runtime
 * register their destructors. InitResources loads the model through the first
 * (Model::LoadFile) and the collision through the second (dBgW_Kc::LoadFile);
 * CleanupResources releases both (S19/S31: typed from this TU's callees).
 * The family spellings are reconstructed; the constructor/destructor
 * addresses, file IDs, object widths, BSS order, and registration topology
 * are direct ROM evidence. The intact-TU manifest maps their
 * compiler-generated undefined member imports onto the existing
 * evidence-bounded ROM symbols. */
struct DlPyramidModelFilePtr : SharedFilePtr {

    DlPyramidModelFilePtr(u32 fileID);
    ~DlPyramidModelFilePtr();
};

struct DlPyramidCollisionFilePtr : SharedFilePtr {

    DlPyramidCollisionFilePtr(u32 fileID);
    ~DlPyramidCollisionFilePtr();
};

extern "C" DlPyramidModelFilePtr gDlPyramidModelFile;
extern "C" DlPyramidCollisionFilePtr gDlPyramidCollisionFile;

#pragma defer_codegen off

/* -------------------------------------------------------------------------- */
/* 0x021111a0 _ZN16daObjDlPyramid_cD1Ev, 0x021111ec _ZN16daObjDlPyramid_cD0Ev   */
/* -------------------------------------------------------------------------- */
// @symbol _ZN16daObjDlPyramid_cD1Ev
daObjDlPyramid_c::~daObjDlPyramid_c()
{
}

// @symbol _ZN16daObjDlPyramid_cD0Ev
/* The deleting destructor (D0) has no source of its own: the compiler emits
   it from the definition above. */

/* -------------------------------------------------------------------------- */
/* 0x0211124c _ZN21daObjDlPyramidDummy_cD1Ev,                                  */
/* 0x0211127c _ZN21daObjDlPyramidDummy_cD0Ev                                   */
/* -------------------------------------------------------------------------- */
// @symbol _ZN21daObjDlPyramidDummy_cD1Ev
daObjDlPyramidDummy_c::~daObjDlPyramidDummy_c()
{
}

// @symbol _ZN21daObjDlPyramidDummy_cD0Ev
/* The deleting destructor (D0) has no source of its own: the compiler emits
   it from the definition above. */

/* The top has finished sinking: four puffs of dust at the old summit, then
 * the top removes itself and raises the event the level script waits on. */
// @symbol func_ov024_021112c0
extern "C" void func_ov024_021112c0(daObjDlPyramid_c *self)
{
    Vector3 v;
    v.x = self->mPosX;
    v.y = self->mPosY;
    v.z = self->mPosZ;
    v.y += 0xfa000;
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(0x1f, v.x, v.y, v.z);
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(0x20, *(volatile int *)&v.x, *(volatile int *)&v.y, *(volatile int *)&v.z);
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(0x21, *(volatile int *)&v.x, *(volatile int *)&v.y, *(volatile int *)&v.z);
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(0x22, *(volatile int *)&v.x, *(volatile int *)&v.y, *(volatile int *)&v.z);
    self->MarkForDestruction();
    Event::SetBit(0xe);
    dMap_c::UpdateLevelSpecific();
}

/* One frame of the descent: wobble along X off the home position, bob up
 * for the first two seconds, then spin up and sink. Keeps the dust
 * particle alive and moves to state 2 at frame 150. */
// @symbol func_ov024_02111350
extern "C" void func_ov024_02111350(daObjDlPyramid_c *self)
{
    s16 *tbl = data_02082214;
    int a1 = ((int)((unsigned int)self->mStateTimer << 0x1e)) >> 0x10;
    self->mPosX = tbl[((u16)a1 >> 4) * 2] * (s16)0x28 + self->mHomePosX;
    if (self->mStateTimer < 0x3c) {
        int a2 = ((int)((unsigned int)self->mStateTimer << 0x1d)) >> 0x10;
        int bob = tbl[((u16)a2 >> 4) * 2] * (s16)0xa;
        if (bob < 0) bob = -bob;
        self->mPosY = self->mHomePosY + bob;
    } else {
        self->mAngVelY += 0x100;
        if (self->mAngVelY > 0x1800) {
            self->mAngVelY = 0x1800;
            self->mVertSpeed = 0x5000;
        }
        self->mAngleY += self->mAngVelY;
        self->mPosY += self->mVertSpeed;
    }
    self->mSpinParticleID = _ZN8Particle6System3NewEjj5Fix12IiES2_S2_PK11Vector3_16fPNS_8CallbackE(
        self->mSpinParticleID, 0x23, self->mPosX, self->mPosY, self->mPosZ, 0, 0);
    if (self->mStateTimer == 150)
        self->mState = 2;
}

/* The collider follows the top: yaw matrix, actor position in the
 * translation row, then hand both to the mesh collider. */
// @symbol func_ov024_02111480
extern "C" void func_ov024_02111480(daObjDlPyramid_c *self)
{
    Matrix4x3_FromRotationY(&self->mClsnMat2, self->mAngleY);
    self->mClsnMat2.t.x = self->mPosX;
    self->mClsnMat2.t.y = self->mPosY;
    self->mClsnMat2.t.z = self->mPosZ;
    self->mMeshCollider.Transform(self->mClsnMat2, self->mAngleY);
}

/* The model follows the top: yaw matrix, position at 1/8 scale. */
// @symbol func_ov024_021114c4
extern "C" void func_ov024_021114c4(daObjDlPyramid_c *self)
{
    Matrix4x3_FromRotationY(&self->mTopModel.mat4x3, self->mAngleY);
    self->mTopModel.mat4x3.t.x = self->mPosX >> 3;
    self->mTopModel.mat4x3.t.y = self->mPosY >> 3;
    self->mTopModel.mat4x3.t.z = self->mPosZ >> 3;
}

// @symbol _ZN16daObjDlPyramid_c16CleanupResourcesEv
int daObjDlPyramid_c::CleanupResources()
{
    mMeshCollider.Disable();
    gDlPyramidModelFile.Release();
    gDlPyramidCollisionFile.Release();
    return 1;
}

// @symbol _ZN16daObjDlPyramid_c6RenderEv
int daObjDlPyramid_c::Render()
{
    mTopModel.Render(0);
    return 1;
}

/* 0: wait for all four tags. 1: jingle, then descend. 2: descend until the
 * jingle has finished, then settle. */
// @symbol _ZN16daObjDlPyramid_c8BehaviorEv
int daObjDlPyramid_c::Behavior()
{
    u8 state = mState;
    switch (state) {
    case 0:
        if (mNumTagsTriggered == 4)
            mState++;
        break;
    case 1:
        Sound::PlaySecretSound(this, (u16 *)&mSoundTimer);
        if (mStateTimer == 0)
            Sound::PlayBank3(0x4b, *(Vector3 *)&mCamSpacePosX);
        func_ov024_02111350(this);
        break;
    case 2:
        if (Sound::PlaySecretSound(this, (u16 *)&mSoundTimer)) {
            Sound::PlayBank3(0x4c, *(Vector3 *)&mCamSpacePosX);
            func_ov024_021112c0(this);
        } else {
            func_ov024_02111350(this);
        }
        break;
    }
    mStateTimer++;
    if (state != mState)
        mStateTimer = 0;
    func_ov024_021114c4(this);
    func_ov024_02111480(this);
    return 1;
}

/* A touched tag counts once on the top it was bound to, then goes away. */
// @symbol _ZN21daObjDlPyramidDummy_c8BehaviorEv
s32 daObjDlPyramidDummy_c::Behavior()
{
    if (mCylinder.otherOwner != 0) {
        if (mPyramidTopID == 0) {
            MarkForDestruction();
            return 1;
        }

        daObjDlPyramid_c *top = (daObjDlPyramid_c *)dActor_c::FindWithID(mPyramidTopID);
        if (top != 0)
            ++top->mNumTagsTriggered;

        MarkForDestruction();
        return 1;
    }

    mCylinder.Clear();
    mCylinder.Update();
    return 1;
}

// @symbol _ZN16daObjDlPyramid_c13InitResourcesEv
int daObjDlPyramid_c::InitResources()
{
    BMD_File *bmd = (BMD_File *)Model::LoadFile(gDlPyramidModelFile);
    mTopModel.SetFile(bmd, 1, -1);
    func_ov024_021114c4(this);
    func_ov024_02111480(this);
    void *kcl = dBgW_Kc::LoadFile(gDlPyramidCollisionFile);
    _ZN10dBgW_KcMbg7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(
        &mMeshCollider, kcl, &mClsnMat2, 0x199, mAngleY, data_ov024_021129f0);
    func_020393d4((int *)&mMeshCollider, (int)&dBgW::UpdatePosAndAngs);
    mMeshCollider.Enable(this);
    mHomePosX = mPosX;
    mHomePosY = mPosY;
    mHomePosZ = mPosZ;
    mAngVelY = 0;
    mNumTagsTriggered = 0;
    mState = 0;
    mSpinParticleID = 0;
    mSoundTimer = 0;
    Event::ClearBit(0xe);
    return 1;
}

/* Binds to the one pyramid top in the level, or removes itself. */
// @symbol _ZN21daObjDlPyramidDummy_c13InitResourcesEv
s32 daObjDlPyramidDummy_c::InitResources()
{
    dActor_c *top = dActor_c::FindWithActorID(0x55, 0);
    if (top == 0) {
        MarkForDestruction();
        return 1;
    }

    mPyramidTopID = top->uniqueID;
    _ZN7dCcAc_c4InitEP8dActor_c5Fix12IiES3_jj(
        &mCylinder, this, 0x7d000, 0x28000, 2, 0x400000);
    return 1;
}

/* -------------------------------------------------------------------------- */
/* Factories. `return new` routes through each class's operator new adapter,
   which forwards to fBase_c::operator new -- the allocator the cartridge's
   own factories call. Spelled by hand they read as a four-step C
   transcription; this is the original shape. */
/* -------------------------------------------------------------------------- */
// @symbol daObjDlPyramidDummy_c_classInit
extern "C" daObjDlPyramidDummy_c *daObjDlPyramidDummy_c_classInit()
{
    return new daObjDlPyramidDummy_c;
}

/* -------------------------------------------------------------------------- */
// @symbol daObjDlPyramid_c_classInit
extern "C" daObjDlPyramid_c *daObjDlPyramid_c_classInit()
{
    return new daObjDlPyramid_c;
}

/* Retail construction order: model 1501, then collision 1502. mwcc emits
 * __sinit_d_a_obj_dl_pyramid.cpp from these two definitions. */
DlPyramidModelFilePtr gDlPyramidModelFile(ASSET_DL_PYRAMID_BMD);
DlPyramidCollisionFilePtr gDlPyramidCollisionFile(ASSET_DL_PYRAMID_KCL);

/* .rodata 0x021118ac..0x02112808 */
#pragma force_active on
extern "C" {
extern const unsigned int data_ov024_021118ac[];
extern const unsigned int data_ov024_021118b0[];
extern const unsigned int data_ov024_021118b4[];
extern const unsigned int data_ov024_021118bc[];
extern const unsigned int data_ov024_021118f4[];
extern const unsigned int data_ov024_0211190c[];
extern const unsigned int data_ov024_02111928[];
extern const unsigned int data_ov024_0211192c[];
extern const unsigned int data_ov024_02111944[];
extern const unsigned int data_ov024_02111948[];
extern const unsigned int data_ov024_02111960[];
extern const unsigned int data_ov024_02111994[];
extern const unsigned int data_ov024_021119e8[];
extern const unsigned int data_ov024_02111a4c[];
extern const unsigned int data_ov024_02111a58[];
extern const unsigned int data_ov024_02111a78[];
extern const unsigned int data_ov024_02111abc[];
extern const unsigned int data_ov024_02111ad4[];
extern const unsigned int data_ov024_02111af4[];
extern const unsigned int data_ov024_02111b14[];
extern const unsigned int data_ov024_02111b34[];
extern const unsigned int data_ov024_02111b44[];
extern const unsigned int data_ov024_02111b64[];
extern const unsigned int data_ov024_02111b68[];
extern const unsigned int data_ov024_02111b6c[];
extern const unsigned int data_ov024_02111b74[];
extern const unsigned int data_ov024_02111b88[];
extern const unsigned int data_ov024_02111bd4[];
extern const unsigned int data_ov024_02111be0[];
extern const unsigned int data_ov024_02111c20[];
extern const unsigned int data_ov024_02111c54[];
extern const unsigned int data_ov024_02111cbc[];
extern const unsigned int data_ov024_02111cc8[];
extern const unsigned int data_ov024_02111fc0[];
extern const unsigned int data_ov024_0211208c[];
extern const unsigned int data_ov024_021120a4[];
extern const unsigned int data_ov024_021120bc[];
extern const unsigned int data_ov024_021120d8[];
extern const unsigned int data_ov024_021120f8[];
extern const unsigned int data_ov024_02112104[];
extern const unsigned int data_ov024_02112118[];
extern const unsigned int data_ov024_02112138[];
extern const unsigned int data_ov024_02112158[];
extern const unsigned int data_ov024_02112178[];
extern const unsigned int data_ov024_02112198[];
extern const unsigned int data_ov024_021121b8[];
extern const unsigned int data_ov024_021121c0[];
extern const unsigned int data_ov024_021121dc[];
extern const unsigned int data_ov024_021121f8[];
extern const unsigned int data_ov024_02112258[];
extern const unsigned int data_ov024_0211227c[];
extern const unsigned int data_ov024_02112294[];
extern const unsigned int data_ov024_0211229c[];
extern const unsigned int data_ov024_02112320[];
extern const unsigned int data_ov024_02112358[];
extern const unsigned int data_ov024_02112368[];
extern const unsigned int data_ov024_021123e4[];
extern const unsigned int data_ov024_021123f4[];
extern const unsigned int data_ov024_02112404[];
extern const unsigned int data_ov024_0211241c[];
extern const unsigned int data_ov024_02112428[];
extern const unsigned int data_ov024_02112434[];
extern const unsigned int data_ov024_02112438[];
extern const unsigned int data_ov024_0211244c[];
extern const unsigned int data_ov024_02112464[];
extern const unsigned int data_ov024_02112494[];
extern const unsigned int data_ov024_021124ac[];
extern const unsigned int data_ov024_021124c4[];
extern const unsigned int data_ov024_021124d4[];
extern const unsigned int data_ov024_021124ec[];
extern const unsigned int data_ov024_021124f8[];
extern const unsigned int data_ov024_021124fc[];
extern const unsigned int data_ov024_02112530[];
extern const unsigned int data_ov024_02112570[];
extern const unsigned int data_ov024_02112590[];
extern const unsigned int data_ov024_021125cc[];
extern const unsigned int data_ov024_02112610[];
extern unsigned char data_ov024_021128cc[];
extern unsigned char data_ov024_021128c0[];
extern unsigned char data_ov024_021128d8[];
extern unsigned char data_ov024_021128b4[];
extern unsigned char data_ov024_021128e8[];
const unsigned int data_ov024_021118ac[1] = {
    0x00000000u,
};
const unsigned int data_ov024_021118b0[1] = {
    0x00001000u,
};
const unsigned int data_ov024_021118b4[2] = {
    0x00000800u, 0x00001000u,
};
const unsigned int data_ov024_021118bc[14] = {
    0x0000ffffu, (unsigned int)data_ov024_021128b4, 0x00000001u, 0x00010001u,
    0x00000001u, 0x00000028u, 0x00000001u, 0x0000ffffu,
    (unsigned int)data_ov024_021128cc, 0x00000001u, 0x00010001u, 0x00000001u,
    0x00000028u, 0x00000001u,
};
const unsigned int data_ov024_021118f4[6] = {
    0x0000ffffu, (unsigned int)data_ov024_021128e8, 0x00000001u, 0x00000001u,
    0x00000169u, 0x00000001u,
};
const unsigned int data_ov024_0211190c[7] = {
    0x00000001u, 0x0000ffffu, (unsigned int)data_ov024_021128c0, 0x00000001u,
    0x00000001u, 0x00000001u, 0x00000001u,
};
const unsigned int data_ov024_02111928[1] = {
    0x00010169u,
};
const unsigned int data_ov024_0211192c[6] = {
    0x0000ffffu, (unsigned int)data_ov024_021128d8, 0x00000001u, 0x00000001u,
    0x00000001u, 0x016a0169u,
};
const unsigned int data_ov024_02111944[1] = {
    0x016a0169u,
};
const unsigned int data_ov024_02111948[6] = {
    0x00000000u, 0x0000019au, 0x00000333u, 0x000004cdu,
    0x00000666u, 0x00000800u,
};
const unsigned int data_ov024_02111960[13] = {
    0x0000099au, 0x00000b33u, 0x00000ccdu, 0x00000e66u,
    0x00001000u, 0x0000119au, 0x00001333u, 0x000014cdu,
    0x00001666u, 0x00001800u, 0x0000199au, 0x00001b33u,
    0x00001ccdu,
};
const unsigned int data_ov024_02111994[21] = {
    0x00001e66u, 0x00002000u, 0x0000219au, 0x00002333u,
    0x000024cdu, 0x00002666u, 0x00002800u, 0x0000299au,
    0x00002b33u, 0x00002ccdu, 0x00002e66u, 0x00003000u,
    0x0000319au, 0x00003333u, 0x000034cdu, 0x00003666u,
    0x00003800u, 0x0000399au, 0x00003b33u, 0x00003ccdu,
    0x00003e66u,
};
const unsigned int data_ov024_021119e8[25] = {
    0x000b0000u, 0x00220017u, 0x0039002eu, 0x00500044u,
    0x0066005bu, 0x007d0072u, 0x00940089u, 0x00ab009fu,
    0x00c100b6u, 0x00d800cdu, 0x00ef00e4u, 0x010600fau,
    0x011c0111u, 0x01330128u, 0x014a013fu, 0x01610155u,
    0x0177016cu, 0x018e0183u, 0x01a5019au, 0x01bc01b0u,
    0x01d201c7u, 0x01e901deu, 0x020001f5u, 0x0217020bu,
    0x022e0222u,
};
const unsigned int data_ov024_02111a4c[3] = {
    0x02440239u, 0x025b0250u, 0x02720266u,
};
const unsigned int data_ov024_02111a58[8] = {
    0x0289027du, 0x029f0294u, 0x02b602abu, 0x02cd02c1u,
    0x02e402d8u, 0x02fa02efu, 0x03110306u, 0x0328031cu,
};
const unsigned int data_ov024_02111a78[17] = {
    0x033f0333u, 0x0355034au, 0x036c0361u, 0x03830377u,
    0x039a038eu, 0x03b003a5u, 0x03c703bcu, 0x03de03d2u,
    0x03f503e9u, 0x040b0400u, 0x04220417u, 0x0439042eu,
    0x04500444u, 0x0466045bu, 0x047d0472u, 0x04940489u,
    0x04ab049fu,
};
const unsigned int data_ov024_02111abc[6] = {
    0x04c104b6u, 0x04d804cdu, 0x04ef04e4u, 0x050604fau,
    0x051c0511u, 0x05330528u,
};
const unsigned int data_ov024_02111ad4[8] = {
    0x054a053fu, 0x05610555u, 0x0577056cu, 0x058e0583u,
    0x05a5059au, 0x05bc05b0u, 0x05d205c7u, 0x05e905deu,
};
const unsigned int data_ov024_02111af4[8] = {
    0x060005f5u, 0x0617060bu, 0x062e0622u, 0x06440639u,
    0x065b0650u, 0x06720666u, 0x0689067du, 0x069f0694u,
};
const unsigned int data_ov024_02111b14[8] = {
    0x06b606abu, 0x06cd06c1u, 0x06e406d8u, 0x06fa06efu,
    0x07110706u, 0x0728071cu, 0x073f0733u, 0x0755074au,
};
const unsigned int data_ov024_02111b34[4] = {
    0x076c0761u, 0x07830777u, 0x079a078eu, 0x07b007a5u,
};
const unsigned int data_ov024_02111b44[8] = {
    0x07c707bcu, 0x07de07d2u, 0x07f507e9u, 0xf80b0800u,
    0xf822f817u, 0xf839f82eu, 0xf850f844u, 0xf866f85bu,
};
const unsigned int data_ov024_02111b64[1] = {
    0xf87df872u,
};
const unsigned int data_ov024_02111b68[1] = {
    0xf894f889u,
};
const unsigned int data_ov024_02111b6c[2] = {
    0xf8abf89fu, 0xf8c1f8b6u,
};
const unsigned int data_ov024_02111b74[5] = {
    0xf8d8f8cdu, 0xf8eff8e4u, 0xf906f8fau, 0xf91cf911u,
    0xf933f928u,
};
const unsigned int data_ov024_02111b88[19] = {
    0xf94af93fu, 0xf961f955u, 0xf977f96cu, 0xf98ef983u,
    0xf9a5f99au, 0xf9bcf9b0u, 0xf9d2f9c7u, 0xf9e9f9deu,
    0xfa00f9f5u, 0xfa17fa0bu, 0xfa2efa22u, 0xfa44fa39u,
    0xfa5bfa50u, 0xfa72fa66u, 0xfa89fa7du, 0xfa9ffa94u,
    0xfab6faabu, 0xfacdfac1u, 0xfae4fad8u,
};
const unsigned int data_ov024_02111bd4[3] = {
    0xfafafaefu, 0xfb11fb06u, 0xfb28fb1cu,
};
const unsigned int data_ov024_02111be0[16] = {
    0xfb3ffb33u, 0xfb55fb4au, 0xfb6cfb61u, 0xfb83fb77u,
    0xfb9afb8eu, 0xfbb0fba5u, 0xfbc7fbbcu, 0xfbdefbd2u,
    0xfbf5fbe9u, 0xfc0bfc00u, 0xfc22fc17u, 0xfc39fc2eu,
    0xfc50fc44u, 0xfc66fc5bu, 0xfc7dfc72u, 0xfc94fc89u,
};
const unsigned int data_ov024_02111c20[13] = {
    0xfcabfc9fu, 0xfcc1fcb6u, 0xfcd8fccdu, 0xfceffce4u,
    0xfd06fcfau, 0xfd1cfd11u, 0xfd33fd28u, 0xfd4afd3fu,
    0xfd61fd55u, 0xfd77fd6cu, 0xfd8efd83u, 0xfda5fd9au,
    0xfdbcfdb0u,
};
const unsigned int data_ov024_02111c54[26] = {
    0xfdd2fdc7u, 0xfde9fddeu, 0xfe00fdf5u, 0xfe17fe0bu,
    0xfe2efe22u, 0xfe44fe39u, 0xfe5bfe50u, 0xfe72fe66u,
    0xfe89fe7du, 0xfe9ffe94u, 0xfeb6feabu, 0xfecdfec1u,
    0xfee4fed8u, 0xfefafeefu, 0xff11ff06u, 0xff28ff1cu,
    0xff3fff33u, 0xff55ff4au, 0xff6cff61u, 0xff83ff77u,
    0xff9aff8eu, 0xffb0ffa5u, 0xffc7ffbcu, 0xffdeffd2u,
    0xfff5ffe9u, 0x00000000u,
};
const unsigned int data_ov024_02111cbc[3] = {
    0x00000000u, 0x00000000u, 0xffffffc7u,
};
const unsigned int data_ov024_02111cc8[190] = {
    0xffffff8eu, 0xffffff55u, 0xffffff1cu, 0xfffffee4u,
    0xfffffeabu, 0xfffffe72u, 0xfffffe39u, 0xfffffe00u,
    0xfffffdc7u, 0xfffffd8eu, 0xfffffd55u, 0xfffffd1cu,
    0xfffffce4u, 0xfffffcabu, 0xfffffc72u, 0xfffffc39u,
    0xfffffc00u, 0xfffffbc7u, 0xfffffb8eu, 0xfffffb55u,
    0xfffffb1cu, 0xfffffae4u, 0xfffffaabu, 0xfffffa72u,
    0xfffffa39u, 0xfffffa00u, 0xfffff9c7u, 0xfffff98eu,
    0xfffff955u, 0xfffff91cu, 0xfffff8e4u, 0xfffff8abu,
    0xfffff872u, 0xfffff839u, 0xfffff800u, 0xfffff7c7u,
    0xfffff78eu, 0xfffff755u, 0xfffff71cu, 0xfffff6e4u,
    0xfffff6abu, 0xfffff672u, 0xfffff639u, 0xfffff600u,
    0xfffff5c7u, 0xfffff58eu, 0xfffff555u, 0xfffff51cu,
    0xfffff4e4u, 0xfffff4abu, 0xfffff472u, 0xfffff439u,
    0xfffff400u, 0xfffff3c7u, 0xfffff38eu, 0xfffff355u,
    0xfffff31cu, 0xfffff2e4u, 0xfffff2abu, 0xfffff272u,
    0xfffff239u, 0xfffff200u, 0xfffff1c7u, 0xfffff18eu,
    0xfffff155u, 0xfffff11cu, 0xfffff0e4u, 0xfffff0abu,
    0xfffff072u, 0xfffff039u, 0xfffff000u, 0xffffefc7u,
    0xffffef8eu, 0xffffef55u, 0xffffef1cu, 0xffffeee4u,
    0xffffeeabu, 0xffffee72u, 0xffffee39u, 0xffffee00u,
    0xffffedc7u, 0xffffed8eu, 0xffffed55u, 0xffffed1cu,
    0xffffece4u, 0xffffecabu, 0xffffec72u, 0xffffec39u,
    0xffffec00u, 0xffffebc7u, 0xffffeb8eu, 0xffffeb55u,
    0xffffeb1cu, 0xffffeae4u, 0xffffeaabu, 0xffffea72u,
    0xffffea39u, 0xffffea00u, 0xffffe9c7u, 0xffffe98eu,
    0xffffe955u, 0xffffe91cu, 0xffffe8e4u, 0xffffe8abu,
    0xffffe872u, 0xffffe839u, 0xffffe800u, 0xffffe7c7u,
    0xffffe78eu, 0xffffe755u, 0xffffe71cu, 0xffffe6e4u,
    0xffffe6abu, 0xffffe672u, 0xffffe639u, 0xffffe600u,
    0xffffe5c7u, 0xffffe58eu, 0xffffe555u, 0xffffe51cu,
    0xffffe4e4u, 0xffffe4abu, 0xffffe472u, 0xffffe439u,
    0xffffe400u, 0xffffe3c7u, 0xffffe38eu, 0xffffe355u,
    0xffffe31cu, 0xffffe2e4u, 0xffffe2abu, 0xffffe272u,
    0xffffe239u, 0xffffe200u, 0xffffe1c7u, 0xffffe18eu,
    0xffffe155u, 0xffffe11cu, 0xffffe0e4u, 0xffffe0abu,
    0xffffe072u, 0xffffe039u, 0xffffe000u, 0xffffdfc7u,
    0xffffdf8eu, 0xffffdf55u, 0xffffdf1cu, 0xffffdee4u,
    0xffffdeabu, 0xffffde72u, 0xffffde39u, 0xffffde00u,
    0xffffddc7u, 0xffffdd8eu, 0xffffdd55u, 0xffffdd1cu,
    0xffffdce4u, 0xffffdcabu, 0xffffdc72u, 0xffffdc39u,
    0xffffdc00u, 0xffffdbc7u, 0xffffdb8eu, 0xffffdb55u,
    0xffffdb1cu, 0xffffdae4u, 0xffffdaabu, 0xffffda72u,
    0xffffda39u, 0xffffda00u, 0xffffd9c7u, 0xffffd98eu,
    0xffffd955u, 0xffffd91cu, 0xffffd8e4u, 0xffffd8abu,
    0xffffd872u, 0xffffd839u, 0xffffd800u, 0xffffd7c7u,
    0xffffd78eu, 0xffffd755u, 0xffffd71cu, 0xffffd6e4u,
    0xffffd6abu, 0xffffd672u, 0xffffd639u, 0xffffd600u,
    0xffffd5c7u, 0xffffd58eu,
};
const unsigned int data_ov024_02111fc0[51] = {
    0xffffd555u, 0xffffd51cu, 0xffffd4e4u, 0xffffd4abu,
    0xffffd472u, 0xffffd439u, 0xffffd400u, 0xffffd3c7u,
    0xffffd38eu, 0xffffd355u, 0xffffd31cu, 0xffffd2e4u,
    0xffffd2abu, 0xffffd272u, 0xffffd239u, 0xffffd200u,
    0xffffd1c7u, 0xffffd18eu, 0xffffd155u, 0xffffd11cu,
    0xffffd0e4u, 0xffffd0abu, 0xffffd072u, 0xffffd039u,
    0xffffd000u, 0xffffcfc7u, 0xffffcf8eu, 0xffffcf55u,
    0xffffcf1cu, 0xffffcee4u, 0xffffceabu, 0xffffce72u,
    0xffffce39u, 0xffffce00u, 0xffffcdc7u, 0xffffcd8eu,
    0xffffcd55u, 0xffffcd1cu, 0xffffcce4u, 0xffffccabu,
    0xffffcc72u, 0xffffcc39u, 0xffffcc00u, 0xffffcbc7u,
    0xffffcb8eu, 0xffffcb55u, 0xffffcb1cu, 0xffffcae4u,
    0xffffcaabu, 0xffffca72u, 0xffffca39u,
};
const unsigned int data_ov024_0211208c[6] = {
    0xffffca00u, 0xffffc9c7u, 0xffffc98eu, 0xffffc955u,
    0xffffc91cu, 0xffffc8e4u,
};
const unsigned int data_ov024_021120a4[6] = {
    0xffffc8abu, 0xffffc872u, 0xffffc839u, 0xffffc800u,
    0xffffc7c7u, 0xffffc78eu,
};
const unsigned int data_ov024_021120bc[7] = {
    0xffffc755u, 0xffffc71cu, 0xffffc6e4u, 0xffffc6abu,
    0xffffc672u, 0xffffc639u, 0xffffc600u,
};
const unsigned int data_ov024_021120d8[8] = {
    0xffffc5c7u, 0xffffc58eu, 0xffffc555u, 0xffffc51cu,
    0xffffc4e4u, 0xffffc4abu, 0xffffc472u, 0xffffc439u,
};
const unsigned int data_ov024_021120f8[3] = {
    0xffffc400u, 0xffffc3c7u, 0xffffc38eu,
};
const unsigned int data_ov024_02112104[5] = {
    0xffffc355u, 0xffffc31cu, 0xffffc2e4u, 0xffffc2abu,
    0xffffc272u,
};
const unsigned int data_ov024_02112118[8] = {
    0xffffc239u, 0xffffc200u, 0xffffc1c7u, 0xffffc18eu,
    0xffffc155u, 0xffffc11cu, 0xffffc0e4u, 0xffffc0abu,
};
const unsigned int data_ov024_02112138[8] = {
    0xffffc072u, 0xffffc039u, 0xffffc000u, 0xffffbfc7u,
    0xffffbf8eu, 0xffffbf55u, 0xffffbf1cu, 0xffffbee4u,
};
const unsigned int data_ov024_02112158[8] = {
    0xffffbeabu, 0xffffbe72u, 0xffffbe39u, 0xffffbe00u,
    0xffffbdc7u, 0xffffbd8eu, 0xffffbd55u, 0xffffbd1cu,
};
const unsigned int data_ov024_02112178[8] = {
    0xffffbce4u, 0xffffbcabu, 0xffffbc72u, 0xffffbc39u,
    0xffffbc00u, 0xffffbbc7u, 0xffffbb8eu, 0xffffbb55u,
};
const unsigned int data_ov024_02112198[8] = {
    0xffffbb1cu, 0xffffbae4u, 0xffffbaabu, 0xffffba72u,
    0xffffba39u, 0xffffba00u, 0xffffb9c7u, 0xffffb98eu,
};
const unsigned int data_ov024_021121b8[2] = {
    0xffffb955u, 0xffffb91cu,
};
const unsigned int data_ov024_021121c0[7] = {
    0xffffb8e4u, 0xffffb8abu, 0xffffb872u, 0xffffb839u,
    0xffffb800u, 0xffffb7c7u, 0xffffb78eu,
};
const unsigned int data_ov024_021121dc[7] = {
    0xffffb755u, 0xffffb71cu, 0xffffb6e4u, 0xffffb6abu,
    0xffffb672u, 0xffffb639u, 0xffffb600u,
};
const unsigned int data_ov024_021121f8[24] = {
    0xffffb5c7u, 0xffffb58eu, 0xffffb555u, 0xffffb51cu,
    0xffffb4e4u, 0xffffb4abu, 0xffffb472u, 0xffffb439u,
    0xffffb400u, 0xffffb3c7u, 0xffffb38eu, 0xffffb355u,
    0xffffb31cu, 0xffffb2e4u, 0xffffb2abu, 0xffffb272u,
    0xffffb239u, 0xffffb200u, 0xffffb1c7u, 0xffffb18eu,
    0xffffb155u, 0xffffb11cu, 0xffffb0e4u, 0xffffb0abu,
};
const unsigned int data_ov024_02112258[9] = {
    0xffffb072u, 0xffffb039u, 0xffffb000u, 0x00000000u,
    0x0000000bu, 0x00000017u, 0x00000022u, 0x0000002eu,
    0x00000039u,
};
const unsigned int data_ov024_0211227c[6] = {
    0x00000044u, 0x00000050u, 0x0000005bu, 0x00000066u,
    0x00000072u, 0x0000007du,
};
const unsigned int data_ov024_02112294[2] = {
    0x00000089u, 0x00000094u,
};
const unsigned int data_ov024_0211229c[33] = {
    0x0000009fu, 0x000000abu, 0x000000b6u, 0x000000c1u,
    0x000000cdu, 0x000000d8u, 0x000000e4u, 0x000000efu,
    0x000000fau, 0x00000106u, 0x00000111u, 0x0000011cu,
    0x00000128u, 0x00000133u, 0x0000013fu, 0x0000014au,
    0x00000155u, 0x00000161u, 0x0000016cu, 0x00000177u,
    0x00000183u, 0x0000018eu, 0x0000019au, 0x000001a5u,
    0x000001b0u, 0x000001bcu, 0x000001c7u, 0x000001d2u,
    0x000001deu, 0x000001e9u, 0x000001f5u, 0x00000200u,
    0x0000020bu,
};
const unsigned int data_ov024_02112320[14] = {
    0x00000217u, 0x00000222u, 0x0000022eu, 0x00000239u,
    0x00000244u, 0x00000250u, 0x0000025bu, 0x00000266u,
    0x00000272u, 0x0000027du, 0x00000289u, 0x00000294u,
    0x0000029fu, 0x000002abu,
};
const unsigned int data_ov024_02112358[4] = {
    0x000002b6u, 0x000002c1u, 0x000002cdu, 0x000002d8u,
};
const unsigned int data_ov024_02112368[31] = {
    0x000002e4u, 0x000002efu, 0x000002fau, 0x00000306u,
    0x00000311u, 0x0000031cu, 0x00000328u, 0x00000333u,
    0x0000033fu, 0x0000034au, 0x00000355u, 0x00000361u,
    0x0000036cu, 0x00000377u, 0x00000383u, 0x0000038eu,
    0x0000039au, 0x000003a5u, 0x000003b0u, 0x000003bcu,
    0x000003c7u, 0x000003d2u, 0x000003deu, 0x000003e9u,
    0x000003f5u, 0x00000400u, 0x0000040bu, 0x00000417u,
    0x00000422u, 0x0000042eu, 0x00000439u,
};
const unsigned int data_ov024_021123e4[4] = {
    0x00000444u, 0x00000450u, 0x0000045bu, 0x00000466u,
};
const unsigned int data_ov024_021123f4[4] = {
    0x00000472u, 0x0000047du, 0x00000489u, 0x00000494u,
};
const unsigned int data_ov024_02112404[6] = {
    0x0000049fu, 0x000004abu, 0x000004b6u, 0x000004c1u,
    0x000004cdu, 0x000004d8u,
};
const unsigned int data_ov024_0211241c[3] = {
    0x000004e4u, 0x000004efu, 0x000004fau,
};
const unsigned int data_ov024_02112428[3] = {
    0x00000506u, 0x00000511u, 0x0000051cu,
};
const unsigned int data_ov024_02112434[1] = {
    0x00000528u,
};
const unsigned int data_ov024_02112438[5] = {
    0x00000533u, 0x0000053fu, 0x0000054au, 0x00000555u,
    0x00000561u,
};
const unsigned int data_ov024_0211244c[6] = {
    0x0000056cu, 0x00000577u, 0x00000583u, 0x0000058eu,
    0x0000059au, 0x000005a5u,
};
const unsigned int data_ov024_02112464[12] = {
    0x000005b0u, 0x000005bcu, 0x000005c7u, 0x000005d2u,
    0x000005deu, 0x000005e9u, 0x000005f5u, 0x00000600u,
    0x0000060bu, 0x00000617u, 0x00000622u, 0x0000062eu,
};
const unsigned int data_ov024_02112494[6] = {
    0x00000639u, 0x00000644u, 0x00000650u, 0x0000065bu,
    0x00000666u, 0x00000672u,
};
const unsigned int data_ov024_021124ac[6] = {
    0x0000067du, 0x00000689u, 0x00000694u, 0x0000069fu,
    0x000006abu, 0x000006b6u,
};
const unsigned int data_ov024_021124c4[4] = {
    0x000006c1u, 0x000006cdu, 0x000006d8u, 0x000006e4u,
};
const unsigned int data_ov024_021124d4[6] = {
    0x000006efu, 0x000006fau, 0x00000706u, 0x00000711u,
    0x0000071cu, 0x00000728u,
};
const unsigned int data_ov024_021124ec[3] = {
    0x00000733u, 0x0000073fu, 0x0000074au,
};
const unsigned int data_ov024_021124f8[1] = {
    0x00000755u,
};
const unsigned int data_ov024_021124fc[13] = {
    0x00000761u, 0x0000076cu, 0x00000777u, 0x00000783u,
    0x0000078eu, 0x0000079au, 0x000007a5u, 0x000007b0u,
    0x000007bcu, 0x000007c7u, 0x000007d2u, 0x000007deu,
    0x000007e9u,
};
const unsigned int data_ov024_02112530[16] = {
    0x000007f5u, 0x00000800u, 0x0000080bu, 0x00000817u,
    0x00000822u, 0x0000082eu, 0x00000839u, 0x00000844u,
    0x00000850u, 0x0000085bu, 0x00000866u, 0x00000872u,
    0x0000087du, 0x00000889u, 0x00000894u, 0x0000089fu,
};
const unsigned int data_ov024_02112570[8] = {
    0x000008abu, 0x000008b6u, 0x000008c1u, 0x000008cdu,
    0x000008d8u, 0x000008e4u, 0x000008efu, 0x000008fau,
};
const unsigned int data_ov024_02112590[15] = {
    0x00000906u, 0x00000911u, 0x0000091cu, 0x00000928u,
    0x00000933u, 0x0000093fu, 0x0000094au, 0x00000955u,
    0x00000961u, 0x0000096cu, 0x00000977u, 0x00000983u,
    0x0000098eu, 0x0000099au, 0x000009a5u,
};
const unsigned int data_ov024_021125cc[17] = {
    0x000009b0u, 0x000009bcu, 0x000009c7u, 0x000009d2u,
    0x000009deu, 0x000009e9u, 0x000009f5u, 0x00000a00u,
    0x00000a0bu, 0x00000a17u, 0x00000a22u, 0x00000a2eu,
    0x00000a39u, 0x00000a44u, 0x00000a50u, 0x00000a5bu,
    0x00000a66u,
};
const unsigned int data_ov024_02112610[126] = {
    0x00000a72u, 0x00000a7du, 0x00000a89u, 0x00000a94u,
    0x00000a9fu, 0x00000aabu, 0x00000ab6u, 0x00000ac1u,
    0x00000acdu, 0x00000ad8u, 0x00000ae4u, 0x00000aefu,
    0x00000afau, 0x00000b06u, 0x00000b11u, 0x00000b1cu,
    0x00000b28u, 0x00000b33u, 0x00000b3fu, 0x00000b4au,
    0x00000b55u, 0x00000b61u, 0x00000b6cu, 0x00000b77u,
    0x00000b83u, 0x00000b8eu, 0x00000b9au, 0x00000ba5u,
    0x00000bb0u, 0x00000bbcu, 0x00000bc7u, 0x00000bd2u,
    0x00000bdeu, 0x00000be9u, 0x00000bf5u, 0x00000c00u,
    0x00000c0bu, 0x00000c17u, 0x00000c22u, 0x00000c2eu,
    0x00000c39u, 0x00000c44u, 0x00000c50u, 0x00000c5bu,
    0x00000c66u, 0x00000c72u, 0x00000c7du, 0x00000c89u,
    0x00000c94u, 0x00000c9fu, 0x00000cabu, 0x00000cb6u,
    0x00000cc1u, 0x00000ccdu, 0x00000cd8u, 0x00000ce4u,
    0x00000cefu, 0x00000cfau, 0x00000d06u, 0x00000d11u,
    0x00000d1cu, 0x00000d28u, 0x00000d33u, 0x00000d3fu,
    0x00000d4au, 0x00000d55u, 0x00000d61u, 0x00000d6cu,
    0x00000d77u, 0x00000d83u, 0x00000d8eu, 0x00000d9au,
    0x00000da5u, 0x00000db0u, 0x00000dbcu, 0x00000dc7u,
    0x00000dd2u, 0x00000ddeu, 0x00000de9u, 0x00000df5u,
    0x00000e00u, 0x00000e0bu, 0x00000e17u, 0x00000e22u,
    0x00000e2eu, 0x00000e39u, 0x00000e44u, 0x00000e50u,
    0x00000e5bu, 0x00000e66u, 0x00000e72u, 0x00000e7du,
    0x00000e89u, 0x00000e94u, 0x00000e9fu, 0x00000eabu,
    0x00000eb6u, 0x00000ec1u, 0x00000ecdu, 0x00000ed8u,
    0x00000ee4u, 0x00000eefu, 0x00000efau, 0x00000f06u,
    0x00000f11u, 0x00000f1cu, 0x00000f28u, 0x00000f33u,
    0x00000f3fu, 0x00000f4au, 0x00000f55u, 0x00000f61u,
    0x00000f6cu, 0x00000f77u, 0x00000f83u, 0x00000f8eu,
    0x00000f9au, 0x00000fa5u, 0x00000fb0u, 0x00000fbcu,
    0x00000fc7u, 0x00000fd2u, 0x00000fdeu, 0x00000fe9u,
    0x00000ff5u, 0x00001000u,
};
}
#pragma force_active off
