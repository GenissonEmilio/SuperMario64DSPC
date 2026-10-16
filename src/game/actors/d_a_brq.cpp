//cpp
/* daBrq_c -- the Amp (BIRIKYU 266), ov070.
 *
 * It circles its spawn point -- radius 180.0 when param1 bit 1 is set,
 * otherwise 360.0, its direction set by param1 bit 0 -- bobbing and pulsing
 * in size, with its loop sound playing. Once its 15-frame start timer runs
 * out, a Mario who touches it is shocked (Player::Shock) and it rests for 60
 * frames (state 0) before circling again. A hit with collider flag 0x10
 * defeats it instead: it counts a mega kill, flies off tumbling and poofs on
 * landing or after 45 frames (state 2).
 *
 * daBrq_c_classInit and g_profile_BIRIKYU are reconstructed source-style
 * names (historical aliases Amp_Spawn and Amp_SpawnInfo); the private
 * state-machine spellings are inferred.
 *
 * Source is reverse ROM order: the factory first, the destructor group
 * last. InitResources is the key function; the inline destructor in the
 * header emits retail D1 then D0 plus the complete class data group.
 * common.h comes first so Matrix4x3 is the flat 12-word spelling.
 *
 * Leftover: BrqMatrixWords block-copies IDENTITY_MATRIX4X3 through
 *   int[12] -- a Matrix4x3 assignment scalarizes. Vector3 overlays on
 *   mCamSpacePosX / mScaleX / mPosX stand in where no member exists at
 *   those addresses. SetRanges, dCcAcPos_c::Init, dBgCh_Actr::Init,
 *   ModelAnim::SetAnim, TextureSequence::SetFile,
 *   TextureTransformer::SetFile, DropShadowRadHeight and
 *   Particle::System::NewSimple stay mangled extern "C" spellings -- they
 *   take Fix12<int> by value (notes/mwccarm-codegen.md 6az).
 *   UpdateDefeatedState calls the interworking veneer
 *   dBgCh_Actr_UpdateDiscreteNoLava_veneer (0x02038420), not the method
 *   body at 0x02037024. The data_ov070_* resource handles and the PMF
 *   state table keep linker names. Their storage is defined here; the
 *   initializer at 0x02122d80 still writes the file ids, the cylinder
 *   offset and the state records. SharedFilePtr+4 is read as the
 *   BMD/BTP pointer (Prepare/SetFile) -- the header has no field for it.
 *   The factory's `new` odr-uses inline ~Vector3; its vague D1 is a
 *   deadstrip duplicate of arm9:0x020072c0.
 */

#include "common.h"
#include "daBrq_c.h"
#include "SharedFilePtr.h"

struct BrqSpawnInfo {
    daBrq_c *(*classInit)();
    s16 profileIDAndExecuteOrder;
    s16 drawOrder;
    u32 actorFlags;
    Fix12i clipOffsetY;
    Fix12i clipRadius;
    Fix12i clipDistance;
    Fix12i farDistance;
};

typedef char BrqSpawnInfo_size_must_be_0x1c[
    sizeof(BrqSpawnInfo) == 0x1c ? 1 : -1];

// @symbol daBrq_c_classInit
extern "C" daBrq_c *daBrq_c_classInit()
{
    return new daBrq_c();
}

extern "C" BrqSpawnInfo g_profile_BIRIKYU = {
    daBrq_c_classInit,
    0x010a,
    0x007d,
    0x00000003,
    0,
    0x00028000,
    0x01000000,
    0x00a28000
};

/* SetRanges / dCcAcPos_c::Init / dBgCh_Actr::Init stay mangled (Fix12 by
 * value, notes/mwccarm-codegen.md 6az). */
struct SharedFilePtr;
struct BMD_File;
struct BTA_File;
struct dActor_c;
struct Vector3;
struct Vector3_16;

extern "C" void _ZN8dActor_c9SetRangesE5Fix12IiES1_S1_S1_(dActor_c *self, int a, int b, int c, int d);
extern "C" void _ZN10dCcAcPos_c4InitEP8dActor_cRK7Vector35Fix12IiES6_jj(void *self, dActor_c *a, Vector3 const &b, int c, int d, unsigned int e, unsigned int f);
extern "C" void _ZN10dBgCh_Actr4InitEP8dActor_c5Fix12IiES3_P10Vector3_16S5_(void *self, dActor_c *a, int b, int c, Vector3_16 *d, Vector3_16 *e);

/* Retail file handles are 8 bytes. SharedFilePtr has no fields. */
struct BrqFile {
    int words[2];
};
struct BrqVector3Words { int x, y, z; };

typedef char BrqFile_size_must_be_0x8[sizeof(BrqFile) == 0x8 ? 1 : -1];

extern "C" BrqFile data_ov070_021235fc;
extern "C" BrqFile data_ov070_02123604;
extern "C" SharedFilePtr *const data_ov070_021222e0[2];
extern "C" BrqFile data_ov070_021235ec;
extern "C" unsigned int data_ov070_021231f4[6];
extern "C" BrqVector3Words data_ov070_0212365c;
extern char IDENTITY_MATRIX4X3;

struct BrqMatrixWords { int words[12]; };

// @symbol _ZN7daBrq_c13InitResourcesEv
int daBrq_c::InitResources()
{
    BMD_File *bmd;
    bmd = (BMD_File *)Model::LoadFile(*(SharedFilePtr *)&data_ov070_021235fc);
    mModelAnim.SetFile(bmd, 1, 1);
    bmd = (BMD_File *)Model::LoadFile(*(SharedFilePtr *)&data_ov070_02123604);
    mModel.SetFile(bmd, 1, 1);

    int i;
    for (i = 0; i < 2; i++) {
        dExtFrameCtrl_c::LoadFile(*data_ov070_021222e0[i]);
    }

    BMD_File *bmd2 = *(BMD_File **)((char *)&data_ov070_02123604 + 4);
    BTP_File *btp = (BTP_File *)TextureSequence::LoadFile(*(SharedFilePtr *)&data_ov070_021235ec);
    TextureSequence::Prepare(*bmd2, *btp);

    bmd2 = *(BMD_File **)((char *)&data_ov070_02123604 + 4);
    TextureTransformer::Prepare(*bmd2, *(BTA_File *)data_ov070_021231f4);

    if (!mShadowModel.InitCylinder())
        return 0;

    if ((unsigned char)((param1 >> 1) & 1)) {
        _ZN8dActor_c9SetRangesE5Fix12IiES1_S1_S1_(this, 0, 0x20d000, 0x1000000, 0xa28000);
    } else {
        _ZN8dActor_c9SetRangesE5Fix12IiES1_S1_S1_(this, 0, 0x2c1000, 0x1000000, 0xa28000);
    }

    _ZN10dCcAcPos_c4InitEP8dActor_cRK7Vector35Fix12IiES6_jj(&mdCcAcPos_c, this, *(Vector3 *)&data_ov070_0212365c, 0x2d000, 0x50000, 0x200002, 0x8000);
    _ZN10dBgCh_Actr4InitEP8dActor_c5Fix12IiES3_P10Vector3_16S5_(&mWithMeshClsn, this, 0x2d000, 0x2d000, 0, 0);

    mVertAccel = 0;
    mTerminalVelocity = 0;
    SetState(1);

    *(BrqMatrixWords *)&mMat4x3 =
        *(BrqMatrixWords *)&IDENTITY_MATRIX4X3;

    UpdateModelTransform();
    return 1;
}

// @symbol _ZN7daBrq_c8BehaviorEv
int daBrq_c::Behavior()
{
    UpdateState();
    mCylinderOffset.y += data_ov070_0212365c.y;
    mdCcAcPos_c.SetPosRelativeToActor(mCylinderOffset);
    mdCcAcPos_c.Clear();
    mdCcAcPos_c.Update();
    UpdateModelTransform();
    return 1;
}

// @symbol _ZN7daBrq_c6RenderEv
int daBrq_c::Render()
{
    mModelAnim.Render(0);

    if (mState != 0 && mState != 2) {
        mTextureSequence.Update(mModel.data);
        mTextureTransformer.Update(mModel.data);
        mModel.Render((Vector3 *)&mScaleX);
    }

    return 1;
}

// @symbol _ZN7daBrq_c16OnPendingDestroyEv
void daBrq_c::OnPendingDestroy()
{
}

extern "C" BrqFile data_ov070_021235fc;
extern "C" BrqFile data_ov070_02123604;
extern "C" SharedFilePtr *const data_ov070_021222e0[2];
extern "C" BrqFile data_ov070_021235ec;

// @symbol _ZN7daBrq_c16CleanupResourcesEv
int daBrq_c::CleanupResources()
{
    (*(SharedFilePtr *)&data_ov070_021235fc).Release();
    (*(SharedFilePtr *)&data_ov070_02123604).Release();

    int i = 0;
    do {
        data_ov070_021222e0[i]->Release();
        i++;
    } while (i < 2);

    (*(SharedFilePtr *)&data_ov070_021235ec).Release();
    return 1;
}

extern "C" int data_ov070_02123668[];
// @symbol _ZN7daBrq_c8SetStateEi
void daBrq_c::SetState(s32 state)
{
    mStateHandlers = &((daBrq_c::State *)data_ov070_02123668)[state];
    EnterState();
}

// @symbol _ZN7daBrq_c10EnterStateEv
void daBrq_c::EnterState()
{
    StateFn *handler = &mStateHandlers->enter;
    (this->**handler)();
}

// @symbol _ZN7daBrq_c11UpdateStateEv
void daBrq_c::UpdateState()
{
    StateFn *handler = &mStateHandlers->update;
    (this->**handler)();
}

extern "C" void _ZN9ModelAnim7SetAnimEP8BCA_Filei5Fix12IiEj(
    ModelAnim *model, BCA_File *file, int flags, int speed, u32 startFrame);
extern int data_ov070_0212360c[];
// @symbol _ZN7daBrq_c18EnterCooldownStateEv
s32 daBrq_c::EnterCooldownState()
{
    _ZN9ModelAnim7SetAnimEP8BCA_Filei5Fix12IiEj(
        &mModelAnim, (BCA_File *)data_ov070_0212360c[1],
        0x40000000, 0x1000, 0);
    mStateTimer = 0x3c;
    mState = 0;
    return 1;
}

extern "C" unsigned char DecIfAbove0_Byte(unsigned char *p);

// @symbol _ZN7daBrq_c19UpdateCooldownStateEv
s32 daBrq_c::UpdateCooldownState()
{
    mModelAnim.Advance();
    unsigned char timeLeft = DecIfAbove0_Byte(&mStateTimer);
    if (timeLeft == 0) {
        SetState(1);
    }
    return 1;
}

typedef int Fix12i;
struct BCA_File; struct BTP_File; struct BTA_File;
/* (ModelAnim/TextureSequence/TextureTransformer: real header types in scope) */

extern "C" unsigned int _ZN15TextureSequence7SetFileER8BTP_Filei5Fix12IiEj(
    TextureSequence*, BTP_File&, int, Fix12i, unsigned int);
extern "C" unsigned int _ZN18TextureTransformer7SetFileER8BTA_Filei5Fix12IiEj(
    TextureTransformer*, BTA_File&, int, Fix12i, unsigned int);

struct BrqAnimationResource { int state; BCA_File *file; };
struct BrqTextureResource { int state; BTP_File *file; };
extern "C" BrqAnimationResource data_ov070_021235f4;
extern "C" unsigned int data_ov070_021231f4[6];

// @symbol _ZN7daBrq_c16EnterActiveStateEv
s32 daBrq_c::EnterActiveState()
{
    _ZN9ModelAnim7SetAnimEP8BCA_Filei5Fix12IiEj(
        &mModelAnim, data_ov070_021235f4.file, 0, 0x1000, 0);
    mModelAnim.speed = 0x1000;
    _ZN15TextureSequence7SetFileER8BTP_Filei5Fix12IiEj(
        &mTextureSequence,
        *((BrqTextureResource *)&data_ov070_021235ec)->file,
        0, 0x1000, 0);
    mTextureSequence.speed = 0x1000;
    _ZN18TextureTransformer7SetFileER8BTA_Filei5Fix12IiEj(
        &mTextureTransformer, *(BTA_File *)data_ov070_021231f4, 0, 0x1000, 0);
    mTextureTransformer.speed = 0x2000;
    mStateTimer = 0xf;
    mTurnSpeed = 0;
    mSpinAngle = 0;
    mScaleX = 0x1000;
    mScaleY = 0x1000;
    mScaleZ = 0x1000;
    mState = 1;
    return 1;
}

void ApproachLinear(s32 &value, s32 target, s32 step);
extern "C" void AddVec3(Vector3 *a, Vector3 *b, Vector3 *c);
namespace Sound {
u32 PlayLong(u32 handle, u32 bank, u32 soundId,
             const Vector3 &pos, s16 pitch);
}
extern short data_02082214[];

// @symbol _ZN7daBrq_c17UpdateActiveStateEv
s32 daBrq_c::UpdateActiveState()
{
    ApproachLinear(mTurnSpeed, 1000, 20);

    unsigned char bit0 = (unsigned char)(param1 & 1);
    if (bit0) {
        mPrevAngleY = (short)(mPrevAngleY + mTurnSpeed);
    } else {
        mPrevAngleY = (short)(mPrevAngleY - mTurnSpeed);
    }

    mOrbitAngle = (short)(mOrbitAngle + 0xa00);

    unsigned char bit1 = (unsigned char)((param1 >> 1) & 1);
    int orbitRadius = bit1 ? 0xb4000 : 0x168000;

    mOrbitCenter.x = mPosX;
    mOrbitCenter.y = mPosY;
    mOrbitCenter.z = mPosZ;

    {
        int idx = ((unsigned short)mPrevAngleY) >> 4;
        int sinv = data_02082214[idx * 2];
        mCylinderOffset.x = (int)(((s64)orbitRadius * sinv + 0x800) >> 0xc);
    }
    {
        int idx = ((unsigned short)mOrbitAngle) >> 4;
        int sinv = data_02082214[idx * 2];
        mCylinderOffset.y = (int)(((s64)0x14000 * sinv + 0x800) >> 0xc);
    }
    {
        int idx = ((unsigned short)mPrevAngleY) >> 4;
        int cosv = data_02082214[idx * 2 + 1];
        mCylinderOffset.z = (int)(((s64)orbitRadius * cosv + 0x800) >> 0xc);
    }

    AddVec3(&mOrbitCenter, &mCylinderOffset, &mOrbitCenter);

    mSpinAngle = (short)(mSpinAngle + 0x4000);

    {
        int idx = ((unsigned short)mSpinAngle) >> 4;
        int sinv = data_02082214[idx * 2];
        int scale = (int)(((s64)0x555 * sinv + 0x800) >> 0xc) + 0x800;
        mScaleX = scale;
        mScaleY = scale;
        mScaleZ = scale;
    }

    mModelAnim.Advance();
    mTextureSequence.Advance();
    mTextureTransformer.Advance();

    mSoundHandle = Sound::PlayLong(
        mSoundHandle, 3, 0x183, *(Vector3 *)&mCamSpacePosX, 0);

    if (DecIfAbove0_Byte(&mStateTimer) == 0) {
        HandlePlayerCollision();
    }
    return 1;
}

namespace Sound {
void PlayBank0(u32 soundId, const Vector3 &pos);
}
extern "C" void _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(
    u32 effectId, s32 x, s32 y, s32 z);

// @symbol _ZN7daBrq_c18EnterDefeatedStateEv
s32 daBrq_c::EnterDefeatedState()
{
    Sound::PlayBank0(9, *(Vector3 *)&mCamSpacePosX);
    mFlags &= ~1;
    mVertAccel = -0x2000;
    mTerminalVelocity = -0x3c000;
    mPosX = mOrbitCenter.x;
    mPosY = mOrbitCenter.y;
    mPosZ = mOrbitCenter.z;
    mHorzSpeed = 0xa000;
    mVertSpeed = 0x28000;
    mStateTimer = 0x2d;
    _ZN9ModelAnim7SetAnimEP8BCA_Filei5Fix12IiEj(
        &mModelAnim, (BCA_File *)data_ov070_0212360c[1],
        0x40000000, 0x1000, 0);
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(
        0x43, mPosX, mPosY, mPosZ);
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(
        0x44, mPosX, mPosY, mPosZ);
    mState = 2;
    return 1;
}

/* The ROM calls the interworking veneer at 0x02038420, not the direct
 * dBgCh_Actr::UpdateDiscreteNoLava body at 0x02037024. */
extern "C" void dBgCh_Actr_UpdateDiscreteNoLava_veneer(dBgCh_Actr *collision);

// @symbol _ZN7daBrq_c19UpdateDefeatedStateEv
s32 daBrq_c::UpdateDefeatedState()
{
    mAngleX = (s16)(mAngleX - 0x1000);
    mModelAnim.Advance();
    UpdatePos(&mdCcAcPos_c);
    dBgCh_Actr_UpdateDiscreteNoLava_veneer(&mWithMeshClsn);

    if (mWithMeshClsn.JustHitGround() == 0) {
        if (DecIfAbove0_Byte(&mStateTimer) != 0)
            goto done;
    }

    PoofDust();
    MarkForDestruction();
done:
    return 1;
}

#include "dBgCh_Gnd.h"
extern "C" void Matrix4x3_FromRotationXYZExt(
    Matrix4x3 *matrix, s16 x, s16 y, s16 z);
extern "C" void _ZN8dActor_c19DropShadowRadHeightER17dExtShadowModel_cR9Matrix4x35Fix12IiES5_j(
    dActor_c *actor, dExtShadowModel_c *shadow, Matrix4x3 *matrix,
    s32 radius, s32 depth, u32 opacity);
extern signed char data_0209f2f8[];

// @symbol _ZN7daBrq_c20UpdateModelTransformEv
void daBrq_c::UpdateModelTransform()
{
    int shadowDepth;

    if (mState == 2) {
        Matrix4x3_FromRotationXYZExt(
            &mModelAnim.mat4x3, mAngleX, mAngleY, mAngleZ);
        mModelAnim.mat4x3.m[9] = mPosX >> 3;
        mModelAnim.mat4x3.m[10] = mPosY >> 3;
        mModelAnim.mat4x3.m[11] = mPosZ >> 3;
        mMat4x3.m[9] = mPosX >> 3;
        mMat4x3.m[10] = mPosY >> 3;
        mMat4x3.m[11] = mPosZ >> 3;
    } else {
        mModelAnim.mat4x3.m[9] = mOrbitCenter.x >> 3;
        mModelAnim.mat4x3.m[10] = mOrbitCenter.y >> 3;
        mModelAnim.mat4x3.m[11] = mOrbitCenter.z >> 3;
        mModel.mat4x3 = mModelAnim.mat4x3;
        mMat4x3.m[9] = mOrbitCenter.x >> 3;
        mMat4x3.m[10] = mOrbitCenter.y >> 3;
        mMat4x3.m[11] = mOrbitCenter.z >> 3;
    }

    shadowDepth = 0x1f4000;
    if (data_0209f2f8[0] == 0x11) {
        BrqVector3Words pos;
        int y;
        pos.x = mPosX;
        y = mPosY;
        pos.y = y;
        pos.z = mPosZ;
        pos.y = y - 0xa000;
        dBgCh_Gnd ground;
        ground.SetObjAndPos(*(Vector3 *)&pos, 0);
        if (ground.DetectClsn() != 0) {
            shadowDepth = (mPosY - ground.clsnY) + 0x28000;
        }
    }

    _ZN8dActor_c19DropShadowRadHeightER17dExtShadowModel_cR9Matrix4x35Fix12IiES5_j(
        this, &mShadowModel, &mMat4x3, 0x5a000, shadowDepth, 0xf);
}

#include "Player.h"
extern "C" short Vec3_HorzAngle(const Vector3 *from, const Vector3 *to);

// @symbol _ZN7daBrq_c21HandlePlayerCollisionEv
s32 daBrq_c::HandlePlayerCollision()
{
    u32 id = mdCcAcPos_c.otherOwner;
    if (id == 0)
        return 0;

    dActor_c *other = dActor_c::FindWithID(id);
    if (other == 0)
        goto notPlayer;

    {
        int isPlayer = (other->actorID == 0xbf);
        if (isPlayer != 0)
            goto foundPlayer;
    }

notPlayer:
    return 0;

foundPlayer:
    Player *player = (Player *)other;
    if (player->mIsVanish != 0)
        return 0;

    if (mdCcAcPos_c.hitFlags & 0x10) {
        mPrevAngleY = Vec3_HorzAngle(
            (Vector3 *)&player->mPosX, (Vector3 *)&mPosX);
        mAngleY = (short)(mPrevAngleY + 0x8000);
        player->IncMegaKillCount();
        SetState(2);
    } else {
        if (player->Shock(1) != 0)
            SetState(0);
    }
    return 1;
}
// @symbol _ZN7daBrq_cD1Ev
// @symbol _ZN7daBrq_cD0Ev
/* The inline destructor and InitResources key function emit the retail D1/D0
 * group without a retained D2 or forcing helper. */

/* Zero BSS. __sinit_ov070_02122d80 writes the file ids, the registration
 * nodes, the cylinder offset and the three state records. The pointer pair
 * is the retail rodata at 0x021222e0. */
extern "C" {
BrqFile data_ov070_021235ec;
BrqAnimationResource data_ov070_021235f4;
BrqFile data_ov070_021235fc;
BrqFile data_ov070_02123604;
int data_ov070_0212360c[2];
int data_ov070_02123614[3];
int data_ov070_02123620[3];
int data_ov070_0212362c[3];
int data_ov070_02123638[3];
int data_ov070_02123644[3];
int data_ov070_02123650[3];
BrqVector3Words data_ov070_0212365c;
int data_ov070_02123668[12];

/* BTA targets. 0x1000 is one unit. The seven-word record names the material
 * mat_bilikyu2. The long table is the 60 frame values. */
extern const int data_ov070_02122244 = 0x1000;
extern const int data_ov070_02122248 = 0;
char data_ov070_021231e4[16] = "mat_bilikyu2";
extern const unsigned int data_ov070_0212224c[7] = {
    0x0000ffff,
    (unsigned int)&data_ov070_021231e4,
    1,
    1,
    0x3c,
    1,
    1,
};
extern const unsigned int data_ov070_02122268[30] = {
    0x00890044, 0x011100cd, 0x019a0155, 0x022201de, 0x02ab0266, 0x033302ef,
    0x03bc0377, 0x04440400, 0x04cd0489, 0x05550511, 0x05de059a, 0x06660622,
    0x06ef06ab, 0x07770733, 0x080007bc, 0xf889f844, 0xf911f8cd, 0xf99af955,
    0xfa22f9de, 0xfaabfa66, 0xfb33faef, 0xfbbcfb77, 0xfc44fc00, 0xfccdfc89,
    0xfd55fd11, 0xfddefd9a, 0xfe66fe22, 0xfeeffeab, 0xff77ff33, 0x0000ffbc,
};
extern "C" s32 _ZN7daBrq_c18EnterCooldownStateEv(daBrq_c *self);
extern "C" s32 _ZN7daBrq_c16EnterActiveStateEv(daBrq_c *self);
extern "C" s32 _ZN7daBrq_c18EnterDefeatedStateEv(daBrq_c *self);
extern "C" s32 _ZN7daBrq_c19UpdateCooldownStateEv(daBrq_c *self);
extern "C" s32 _ZN7daBrq_c19UpdateDefeatedStateEv(daBrq_c *self);
extern "C" s32 _ZN7daBrq_c17UpdateActiveStateEv(daBrq_c *self);
unsigned int data_ov070_0212320c[2] = { (unsigned int)&_ZN7daBrq_c18EnterCooldownStateEv, 0 };
unsigned int data_ov070_02123214[2] = { (unsigned int)&_ZN7daBrq_c16EnterActiveStateEv, 0 };
unsigned int data_ov070_0212321c[2] = { (unsigned int)&_ZN7daBrq_c18EnterDefeatedStateEv, 0 };
unsigned int data_ov070_02123224[2] = { (unsigned int)&_ZN7daBrq_c19UpdateCooldownStateEv, 0 };
unsigned int data_ov070_0212322c[2] = { (unsigned int)&_ZN7daBrq_c19UpdateDefeatedStateEv, 0 };
unsigned int data_ov070_02123234[2] = { (unsigned int)&_ZN7daBrq_c17UpdateActiveStateEv, 0 };
unsigned int data_ov070_021231f4[6] = {
    0x3c,
    (unsigned int)&data_ov070_02122244,
    (unsigned int)&data_ov070_02122268,
    (unsigned int)&data_ov070_02122248,
    1,
    (unsigned int)&data_ov070_0212224c,
};

SharedFilePtr *const data_ov070_021222e0[2] = {
    (SharedFilePtr *)&data_ov070_021235f4,
    (SharedFilePtr *)&data_ov070_0212360c,
};
}

typedef char BrqStateTable_size_must_be_0x30[
    sizeof(data_ov070_02123668) == 0x30 ? 1 : -1];

