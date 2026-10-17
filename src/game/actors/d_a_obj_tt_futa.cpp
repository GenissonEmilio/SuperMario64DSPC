//cpp
/* Tiny-Huge Island's pounded lid (TT_FUTA). Ground-pounding it bursts
 * particles, plays the bank sound, sets the drain event bit and destroys
 * it. The lid stays shut until event bit 0xe opens it.
 */
// leftovers:
// - Particle::System::NewSimple stays mangled. This TU's pound passes
//   Fix12<int> by value.
// - Event::GetBit and Event::SetBit stay mangled. There is no Event header.
//   InitResources and the pound call them for bit 0xe.
// - dBgW_KcMbg::SetFile stays mangled. InitResources passes Fix12<int> by
//   value, and data_ov033_02111bfc is the CLPS block it takes.
// - dBgActor_c::IsClsnInRange stays mangled. Behavior passes Fix12<int>.

/* Runtime asset handles resolved through the overlay 0 file table. */
enum daObjTtFuta_c_AssetId {
    ASSET_TT_OBJ_FUTA_BMD = 0x06c5,
    ASSET_TT_OBJ_FUTA_KCL = 0x06c6
};

#include "daObjTtFuta_c.h"
#include "SharedFilePtr.h"
#include "Sound.h"

/* 8-byte file handles. The model uses func_02017acc / func_02017ab4 and the
 * collision file func_02017b4c / SharedFilePtr_Destruct_Clsn. The spellings
 * are local; the manifest aliases the generated names to those ROM symbols. */
struct TtFutaModelFilePtr : SharedFilePtr {

    TtFutaModelFilePtr(u32 fileID);
    ~TtFutaModelFilePtr();
};

struct TtFutaCollisionFilePtr : SharedFilePtr {

    TtFutaCollisionFilePtr(u32 fileID);
    ~TtFutaCollisionFilePtr();
};

/* BSS file homes; Init loads them, Cleanup releases them. Defined at the
   end of this file so the constructors do not enter .text. */
extern TtFutaModelFilePtr data_ov033_021124c8;
extern TtFutaCollisionFilePtr data_ov033_021124c0;

extern "C" {
extern void _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(unsigned int a, int x, int y, int z);
extern int data_ov033_02111bfc[];
extern int _ZN5Event6GetBitEj(unsigned int);
extern void _ZN5Event6SetBitEj(unsigned int b);
extern int _ZN10dBgActor_c13IsClsnInRangeE5Fix12IiES1_(void *self, int a, int b);
extern void _ZN10dBgW_KcMbg7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(void*, void*, void*, int, short, void*);
}

/* Emission order is ROM order: the destructor pair must stay first.
 * Do not reorder. */
#pragma defer_codegen off

// @symbol _ZN13daObjTtFuta_cD1Ev
// @symbol _ZN13daObjTtFuta_cD0Ev
/* One out-of-line definition; mwccarm emits D1 and D0 from it, in that
 * order: its own vptr, then dBgActor_c's inlined, then dBgActor_c's
 * Model and dBgW_KcMbg, then dActor_c. */
daObjTtFuta_c::~daObjTtFuta_c()
{
}

// @symbol _ZN13daObjTtFuta_c15OnGroundPoundedER8dActor_c
/* Real member function: `other`'s own position stays a raw pointer read
 * (`(char *)&other + 0x5c`, then `v[0..2]`) rather than three named-field
 * reads: the ROM computes one base address and offsets from it, not three
 * independent field loads -- member-access syntax compiled differently. */
void daObjTtFuta_c::OnGroundPounded(dActor_c &other)
{
    int *v = (int *)(((char *)&other) + 0x5c);
    _ZN8Particle6System9NewSimpleEj5Fix12IiES2_S2_(0x28, v[0], v[1], v[2]);
    Sound::PlayBank3(0xf, *(const Vector3 *)&mCamSpacePosX);
    _ZN5Event6SetBitEj(0xe);
    MarkForDestruction();
}

// @symbol _ZN13daObjTtFuta_c16CleanupResourcesEv
s32 daObjTtFuta_c::CleanupResources() {
    if (mMeshCollider.IsEnabled()) {
        mMeshCollider.Disable();
    }
    data_ov033_021124c8.Release();
    data_ov033_021124c0.Release();
    return 1;
}

// @symbol _ZN13daObjTtFuta_c6RenderEv
s32 daObjTtFuta_c::Render() {
    mModel.Render(0);
    return 1;
}

// @symbol _ZN13daObjTtFuta_c8BehaviorEv
s32 daObjTtFuta_c::Behavior() {
    _ZN10dBgActor_c13IsClsnInRangeE5Fix12IiES1_(this, 0, 0);
    return 1;
}

// @symbol _ZN13daObjTtFuta_c13InitResourcesEv
extern s32 daObjTtFuta_c::InitResources() {
  void *f ;
  mModel.SetFile((BMD_File *)f, 1, -1);
  UpdateModelPosAndRotY();
  UpdateClsnPosAndRot();
  void *k = dBgW_Kc::LoadFile(data_ov033_021124c0);
  _ZN10dBgW_KcMbg7SetFileEP8KCL_FileRK9Matrix4x35Fix12IiEsR10CLPS_Block(&mMeshCollider, k, &mClsnMat, 0x199, mAngleY, data_ov033_02111bfc);
  return _ZN5Event6GetBitEj(0xe) == 0;
}

/* TT_FUTA factory. */
// @symbol daObjTtFuta_c_classInit
extern "C" daObjTtFuta_c *daObjTtFuta_c_classInit()
{
    return new daObjTtFuta_c();
}

/* Source order is construction order: model file 1733, collision file 1734.
 * __sinit_d_a_obj_tt_futa.cpp emits both constructions and registers the
 * destructors; the registration nodes are compiler temporaries. */
// @symbol __sinit_d_a_obj_tt_futa.cpp
TtFutaModelFilePtr data_ov033_021124c8(ASSET_TT_OBJ_FUTA_BMD);
TtFutaCollisionFilePtr data_ov033_021124c0(ASSET_TT_OBJ_FUTA_KCL);

/* .rodata 0x021116c8..0x021119e8 */
#pragma force_active on
extern "C" {
extern const unsigned int data_ov033_021116c8[];
extern const unsigned int data_ov033_021116cc[];
extern const unsigned int data_ov033_021116d0[];
extern const unsigned int data_ov033_021116d4[];
extern const unsigned int data_ov033_021116d8[];
extern const unsigned int data_ov033_021116e0[];
extern const unsigned int data_ov033_021116f4[];
extern const unsigned int data_ov033_02111700[];
extern const unsigned int data_ov033_02111710[];
extern const unsigned int data_ov033_02111720[];
extern const unsigned int data_ov033_02111740[];
extern const unsigned int data_ov033_02111760[];
extern const unsigned int data_ov033_02111768[];
extern const unsigned int data_ov033_02111834[];
extern const unsigned int data_ov033_02111844[];
extern const unsigned int data_ov033_0211187c[];
extern const unsigned int data_ov033_0211190c[];
extern const unsigned int data_ov033_02111928[];
extern const unsigned int data_ov033_0211192c[];
extern const unsigned int data_ov033_02111944[];
extern const unsigned int data_ov033_02111960[];
extern const unsigned int data_ov033_02111994[];
extern unsigned char data_ov033_02111b14[];
const unsigned int data_ov033_021116c8[1] = {
    0x00000000u,
};
const unsigned int data_ov033_021116cc[1] = {
    0x00000000u,
};
const unsigned int data_ov033_021116d0[1] = {
    0x00001000u,
};
const unsigned int data_ov033_021116d4[1] = {
    0x00001000u,
};
const unsigned int data_ov033_021116d8[2] = {
    0x0000ffffu, (unsigned int)data_ov033_02111b14,
};
const unsigned int data_ov033_021116e0[5] = {
    0x00000001u, 0x00000001u, 0x00000001u, 0x0000005bu,
    0x0000005bu,
};
const unsigned int data_ov033_021116f4[3] = {
    0x0000ffffu, (unsigned int)data_ov033_02111b14, 0x00000001u,
};
const unsigned int data_ov033_02111700[4] = {
    0x00000001u, 0x00000001u, 0x0000005bu, 0x0000005bu,
};
const unsigned int data_ov033_02111710[4] = {
    0x00000000u, 0x0000002eu, 0x0000005bu, 0x00000089u,
};
const unsigned int data_ov033_02111720[8] = {
    0x000000b6u, 0x000000e4u, 0x00000111u, 0x0000013fu,
    0x0000016cu, 0x0000019au, 0x000001c7u, 0x000001f5u,
};
const unsigned int data_ov033_02111740[8] = {
    0x00000222u, 0x00000250u, 0x0000027du, 0x000002abu,
    0x000002d8u, 0x00000306u, 0x00000333u, 0x00000361u,
};
const unsigned int data_ov033_02111760[2] = {
    0x0000038eu, 0x000003bcu,
};
const unsigned int data_ov033_02111768[51] = {
    0x000003e9u, 0x00000417u, 0x00000444u, 0x00000472u,
    0x0000049fu, 0x000004cdu, 0x000004fau, 0x00000528u,
    0x00000555u, 0x00000583u, 0x000005b0u, 0x000005deu,
    0x0000060bu, 0x00000639u, 0x00000666u, 0x00000694u,
    0x000006c1u, 0x000006efu, 0x0000071cu, 0x0000074au,
    0x00000777u, 0x000007a5u, 0x000007d2u, 0x00000800u,
    0x0000082eu, 0x0000085bu, 0x00000889u, 0x000008b6u,
    0x000008e4u, 0x00000911u, 0x0000093fu, 0x0000096cu,
    0x0000099au, 0x000009c7u, 0x000009f5u, 0x00000a22u,
    0x00000a50u, 0x00000a7du, 0x00000aabu, 0x00000ad8u,
    0x00000b06u, 0x00000b33u, 0x00000b61u, 0x00000b8eu,
    0x00000bbcu, 0x00000be9u, 0x00000c17u, 0x00000c44u,
    0x00000c72u, 0x00000c9fu, 0x00000ccdu,
};
const unsigned int data_ov033_02111834[4] = {
    0x00000cfau, 0x00000d28u, 0x00000d55u, 0x00000d83u,
};
const unsigned int data_ov033_02111844[14] = {
    0x00000db0u, 0x00000ddeu, 0x00000e0bu, 0x00000e39u,
    0x00000e66u, 0x00000e94u, 0x00000ec1u, 0x00000eefu,
    0x00000f1cu, 0x00000f4au, 0x00000f77u, 0x00000fa5u,
    0x00000fd2u, 0x00001000u,
};
const unsigned int data_ov033_0211187c[36] = {
    0x00000000u, 0x0000002eu, 0x0000005bu, 0x00000089u,
    0x000000b6u, 0x000000e4u, 0x00000111u, 0x0000013fu,
    0x0000016cu, 0x0000019au, 0x000001c7u, 0x000001f5u,
    0x00000222u, 0x00000250u, 0x0000027du, 0x000002abu,
    0x000002d8u, 0x00000306u, 0x00000333u, 0x00000361u,
    0x0000038eu, 0x000003bcu, 0x000003e9u, 0x00000417u,
    0x00000444u, 0x00000472u, 0x0000049fu, 0x000004cdu,
    0x000004fau, 0x00000528u, 0x00000555u, 0x00000583u,
    0x000005b0u, 0x000005deu, 0x0000060bu, 0x00000639u,
};
const unsigned int data_ov033_0211190c[7] = {
    0x00000666u, 0x00000694u, 0x000006c1u, 0x000006efu,
    0x0000071cu, 0x0000074au, 0x00000777u,
};
const unsigned int data_ov033_02111928[1] = {
    0x000007a5u,
};
const unsigned int data_ov033_0211192c[6] = {
    0x000007d2u, 0x00000800u, 0x0000082eu, 0x0000085bu,
    0x00000889u, 0x000008b6u,
};
const unsigned int data_ov033_02111944[7] = {
    0x000008e4u, 0x00000911u, 0x0000093fu, 0x0000096cu,
    0x0000099au, 0x000009c7u, 0x000009f5u,
};
const unsigned int data_ov033_02111960[13] = {
    0x00000a22u, 0x00000a50u, 0x00000a7du, 0x00000aabu,
    0x00000ad8u, 0x00000b06u, 0x00000b33u, 0x00000b61u,
    0x00000b8eu, 0x00000bbcu, 0x00000be9u, 0x00000c17u,
    0x00000c44u,
};
const unsigned int data_ov033_02111994[21] = {
    0x00000c72u, 0x00000c9fu, 0x00000ccdu, 0x00000cfau,
    0x00000d28u, 0x00000d55u, 0x00000d83u, 0x00000db0u,
    0x00000ddeu, 0x00000e0bu, 0x00000e39u, 0x00000e66u,
    0x00000e94u, 0x00000ec1u, 0x00000eefu, 0x00000f1cu,
    0x00000f4au, 0x00000f77u, 0x00000fa5u, 0x00000fd2u,
    0x00001000u,
};
}
#pragma force_active off
