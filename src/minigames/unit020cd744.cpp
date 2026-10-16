//cpp
/* ov006 stylus-drawn trampolines, 0x020cd744..0x020d1018.
 *
 * The run sits between dMgTrmpln2Mario_c and dScMgAmida_c. No RTTI
 * in it. A line slot is a 4x4 patch: positions at +0x5c, normals at
 * +0x1dc, packed normals at +0x2dc. Four slots of 0x32c bytes sit at
 * data_ov006_02140990. defer_codegen off keeps ROM order.
 *
 * leftovers:
 * - Address names stay. Each function keeps its namespace, because
 *   the local structs and externs disagree.
 * - TrmpItem_Motion4 keeps opt_propagation off.
 *   TrmpLine_ComputeNormals keeps opt_strength_reduction off.
 *   TrmpLine_PushJumper keeps opt_common_subs off and opt_propagation off.
 * - Vector3 locals emit an empty destructor, licensed as a deadstrip
 *   duplicate of the arm9 copy. Spare4 in TrmpLine_Build emits
 *   another, deadstripped as compiler-only output.
 * - The slot fields stay offsets. These bodies do not share one
 *   struct for the 0x32c record. Model and texture-animation operations
 *   use their real headers; the containing item layout remains partial.
 */

#include "types.h"
#include "decl_common.h"
#include "common.h"

#pragma defer_codegen off

extern int ApproachLinear(int &, int, int);
#include "Model.h"
#include "TextureTransformer.h"
#include "SharedFilePtr.h"

// Partial callback interface only. ROM vtables at 0x0213b2c4/0x0213b2e0
// implement these five slots through dMgTrmpObjAdapter_c and its children.
// No destructor slots or complete actor layout are implied by this view.
namespace {
struct TrampolineObjectCallbacks {
    virtual Vector3 *GetPos();
    virtual Vector3 *GetPrevPos();
    virtual Vector3 *GetVelocity();
    virtual int IsActive();
    virtual void Clear();
};
}

namespace s020cd744 {
extern "C" extern void _Z14ApproachLinearRiii(int* a, int b, int c);
extern "C" extern int _Z15ApproachLinear2Riii(int* a, int b, int c);
extern "C" {extern int data_ov006_02140828;}

extern "C" void TrmpItem_GrowScale(char* c) {
    _Z14ApproachLinearRiii((int*)(c + 0x68), 0x1200, 0x80);
    _Z14ApproachLinearRiii((int*)(c + 0x70), 0x1200, 0x80);
    _Z14ApproachLinearRiii((int*)(c + 0x6c), 0x20000, 0x400);
    if (_Z15ApproachLinear2Riii((int*)(c + 0x9c), 0, 1) == 0) return;
    *(int*)(c + 0x84) = 0;
    _Z14ApproachLinearRiii(&data_ov006_02140828, 0, 1);
}
}

namespace s020cd7b8 {
extern "C" extern void Camera_ProjectToScreen(void* a, void* b, int* c, int* d);
extern "C" extern int Mg_GetTopScreenYOffset(void);
extern "C" extern void Jump2Popup_Spawn(int a, int b, int c);
extern "C" {extern void* data_ov006_02141a50;}
extern "C" {extern void* data_ov006_02141a40;}
struct P2 { int w[2]; };
extern "C" {extern struct P2 pmf_TrmpItem_GrowScale;}

extern "C" void TrmpItem_ProjectToScreen(char* item, int scoreValue)
{
    int screenX, screenY;
    if (*(int*)(item + 0xc) > 0) {
        Camera_ProjectToScreen(data_ov006_02141a50, (void*)(item + 8), &screenX, &screenY);
        screenY = screenY - (Mg_GetTopScreenYOffset() + 0xc0);
    } else {
        Camera_ProjectToScreen(data_ov006_02141a40, (void*)(item + 8), &screenX, &screenY);
    }
    Jump2Popup_Spawn(screenX << 0xc, screenY << 0xc, (short)scoreValue);
    *(struct P2*)item = pmf_TrmpItem_GrowScale;
}
}

namespace s020cd864 {
// @symbol TrmpItem_Motion7
extern "C" extern void *_ZN7Vector3D1Ev(void *object);

extern "C" extern void func_020731dc(void *object, void *destructor, void **node);

extern "C" void TrmpItem_Motion7(char* item) {
  struct Vector3 normalCopy;
  struct Vector3 tangent;
  struct Vector3 tangentCopy;
  if ((data_ov006_02140820 & 1) == 0) {
    data_ov006_02140938.x = 0;
    data_ov006_02140938.y = 0x1000;
    data_ov006_02140938.z = 0;
    func_020731dc(&data_ov006_02140938, (void *)_ZN7Vector3D1Ev, &data_ov006_02140920);
    data_ov006_02140820 |= 1;
  }
  if ((data_ov006_02140840 & 1) == 0) {
    data_ov006_02140884.x = 0;
    data_ov006_02140884.y = 0;
    data_ov006_02140884.z = 0x1000;
    func_020731dc(&data_ov006_02140884, (void *)_ZN7Vector3D1Ev, &data_ov006_0214086c);
    data_ov006_02140840 |= 1;
  }
  func_0203cc28((int*)(item + 0x38), 0x100);
  func_0203ce80(&normalCopy, (struct Vector3*)(item + 0x38));
  func_0203cf00(&tangent, (struct Vector3*)(item + 0x38), &data_ov006_02140884);
  *(int*)(item + 0x44) = tangent.x;
  *(int*)(item + 0x48) = tangent.y;
  *(int*)(item + 0x4c) = tangent.z;
  func_0203ce80(&tangentCopy, (struct Vector3*)(item + 0x44));
  Quaternion_FromVector3((int*)(item + 0x74), &data_ov006_02140938, (struct Vector3*)(item + 0x38));
  Quaternion_Normalize((int*)(item + 0x74));
  TrmpItem_Motion6(item);
}
}

namespace s020cd98c {
struct S{int w[2];};
extern "C" {extern struct S pmf_TrmpItem_Motion7;}
extern "C" void TrmpItem_SetMotion7(int *c){
  *(short*)((char*)c+0x9a)=0;
  *(struct S*)c=pmf_TrmpItem_Motion7;
}
}

namespace s020cd9b0 {
typedef struct { int x, y, z; } Vec3;
extern "C" extern void func_020731dc(void *object, void *destructor, void **node);
extern "C" extern void func_0203cc28(int *p, int angle);
extern "C" extern void func_0203ce80(Vec3* dst, Vec3* src);
extern "C" extern void func_0203cf00(Vec3 *out, Vec3 *a, Vec3 *b);
extern "C" extern void Quaternion_FromVector3(int* q, Vec3* axis, Vec3* v);
extern "C" extern void Quaternion_Normalize(int *q);
extern "C" extern void *_ZN7Vector3D1Ev(void *object);

extern "C" {extern int data_ov006_02140834;}
extern "C" {extern Vec3 data_ov006_021408c0;}
extern "C" {extern int data_ov006_021408b4;}
extern "C" {extern int data_ov006_0214083c;}
extern "C" {extern Vec3 data_ov006_021408e4;}
extern "C" {extern int data_ov006_021408d8;}

extern "C" void TrmpItem_Motion8(char* item)
{
    Vec3 normalCopy, tangent, tangentCopy, unused;

    if (!(data_ov006_02140834 & 1)) {
        data_ov006_021408c0.x = 0;
        data_ov006_021408c0.y = 0x1000;
        data_ov006_021408c0.z = 0;
        func_020731dc(&data_ov006_021408c0, (void *)&_ZN7Vector3D1Ev, (void**)&data_ov006_021408b4);
        data_ov006_02140834 |= 1;
    }
    if (!(data_ov006_0214083c & 1)) {
        data_ov006_021408e4.x = 0;
        data_ov006_021408e4.y = 0;
        data_ov006_021408e4.z = 0x1000;
        func_020731dc(&data_ov006_021408e4, (void *)&_ZN7Vector3D1Ev, (void**)&data_ov006_021408d8);
        data_ov006_0214083c |= 1;
    }
    func_0203cc28((int*)(item + 0x38), 0x100);
    func_0203ce80(&normalCopy, (Vec3*)(item + 0x38));
    func_0203cf00(&tangent, (Vec3*)(item + 0x38), &data_ov006_021408e4);
    *(int*)(item + 0x44) = tangent.x;
    *(int*)(item + 0x48) = tangent.y;
    *(int*)(item + 0x4c) = tangent.z;
    func_0203ce80(&tangentCopy, (Vec3*)(item + 0x44));
    Quaternion_FromVector3((int*)(item + 0x74), &data_ov006_021408c0, (Vec3*)(item + 0x38));
    Quaternion_Normalize((int*)(item + 0x74));
}
}

namespace s020cdad0 {
struct S { int w[2]; };
extern "C" {extern struct S pmf_TrmpItem_Motion8;}
extern "C" void TrmpItem_SetMotion8(char *p) { *(struct S *)(p + 0x0) = pmf_TrmpItem_Motion8; }
}

namespace s020cdaec {
// @symbol TrmpItem_Motion5
extern "C" extern void *_ZN7Vector3D1Ev(void *object);

extern "C" extern void func_020731dc(void *object, void *destructor, void **node);

extern "C" void TrmpItem_Motion5(char* item) {
  struct Vector3 normalCopy;
  struct Vector3 tangent;
  struct Vector3 tangentCopy;
  if ((data_ov006_02140808 & 1) == 0) {
    data_ov006_02140860.x = 0;
    data_ov006_02140860.y = 0x1000;
    data_ov006_02140860.z = 0;
    func_020731dc(&data_ov006_02140860, (void *)_ZN7Vector3D1Ev, &data_ov006_0214095c);
    data_ov006_02140808 |= 1;
  }
  if ((data_ov006_02140810 & 1) == 0) {
    data_ov006_02140890.x = 0;
    data_ov006_02140890.y = 0;
    data_ov006_02140890.z = 0x1000;
    func_020731dc(&data_ov006_02140890, (void *)_ZN7Vector3D1Ev, &data_ov006_02140878);
    data_ov006_02140810 |= 1;
  }
  func_0203cc28((int*)(item + 0x38), 0x100);
  func_0203ce80(&normalCopy, (struct Vector3*)(item + 0x38));
  func_0203cf00(&tangent, (struct Vector3*)(item + 0x38), &data_ov006_02140890);
  *(int*)(item + 0x44) = tangent.x;
  *(int*)(item + 0x48) = tangent.y;
  *(int*)(item + 0x4c) = tangent.z;
  func_0203ce80(&tangentCopy, (struct Vector3*)(item + 0x44));
  Quaternion_FromVector3((int*)(item + 0x74), &data_ov006_02140860, (struct Vector3*)(item + 0x38));
  Quaternion_Normalize((int*)(item + 0x74));
  TrmpItem_Motion4(item);
}
}

namespace s020cdc14 {
struct S{int w[2];}; extern "C" {extern struct S pmf_TrmpItem_Motion5;}
extern "C" void TrmpItem_SetMotion5(char*c){*(short*)(c+0x9a)=0x2000;*(struct S*)c=pmf_TrmpItem_Motion5;}
}

namespace s020cdc38 {
extern "C" void TrmpItem_Motion6(void *arg0)
{
    *(u16 *)((char *)arg0 + 0x9a) += 0x100;
    if (*(u16 *)((char *)arg0 + 0x9a) & 0x8000) {
        *(s32 *)((char *)arg0 + 0x30) = 0xc00;
    } else {
        *(s32 *)((char *)arg0 + 0x30) = -0xc00;
    }
}
}

namespace s020cdc68 {
struct S{int w[2];}; extern "C" {extern struct S pmf_TrmpItem_Motion6;}
extern "C" void TrmpItem_SetMotion6(char*c){*(short*)(c+0x9a)=0;*(struct S*)c=pmf_TrmpItem_Motion6;}
}

namespace s020cdc8c {
extern "C" extern int _ZN4cstd4fdivEii(int a, int b);

#pragma push
#pragma opt_propagation off
extern "C" void TrmpItem_Motion4(char *item)
{
    int distanceFromCenterY;
    int xSpeed;
    int minimumSpeed = 0x400;
    u16 *phase = (u16 *)(item + 0x9a);

    *phase = *phase + 0x40;

    distanceFromCenterY = *(s32 *)(item + 0xc) - 0x74000;
    if (distanceFromCenterY < 0)
        distanceFromCenterY = -distanceFromCenterY;
    xSpeed = (_ZN4cstd4fdivEii(distanceFromCenterY, 0x4c000) >> 3) + minimumSpeed;

    if (*(u16 *)(item + 0x9a) & 0x4000)
        *(s32 *)(item + 0x2c) = xSpeed;
    else
        *(s32 *)(item + 0x2c) = -xSpeed;
}
#pragma pop
}

namespace s020cdce4 {
struct S{int w[2];}; extern "C" {extern struct S pmf_TrmpItem_Motion4;}
extern "C" void TrmpItem_SetMotion4(char*c){*(short*)(c+0x9a)=0x2000;*(struct S*)c=pmf_TrmpItem_Motion4;}
}

namespace s020cdd08 {
typedef struct { int x, y, z; } Vec3;
extern "C" extern void func_020731dc(void *object, void *destructor, void **node);
extern "C" extern void func_0203cc28(int *p, int angle);
extern "C" extern void func_0203ce80(Vec3* dst, Vec3* src);
extern "C" extern void func_0203cf00(Vec3 *out, Vec3 *a, Vec3 *b);
extern "C" extern void Quaternion_FromVector3(int* q, Vec3* axis, Vec3* v);
extern "C" extern void Quaternion_Normalize(int *q);
extern "C" extern void *_ZN7Vector3D1Ev(void *object);

extern "C" {extern int data_ov006_02140824;}
extern "C" {extern Vec3 data_ov006_021408fc;}
extern "C" {extern int data_ov006_021408f0;}
extern "C" {extern int data_ov006_0214080c;}
extern "C" {extern Vec3 data_ov006_02140914;}
extern "C" {extern int data_ov006_02140908;}

extern "C" void TrmpItem_Motion3(char* item)
{
    Vec3 normalCopy, tangent, tangentCopy, d;

    if (!(data_ov006_02140824 & 1)) {
        data_ov006_021408fc.x = 0;
        data_ov006_021408fc.y = 0x1000;
        data_ov006_021408fc.z = 0;
        func_020731dc(&data_ov006_021408fc, (void *)&_ZN7Vector3D1Ev, (void**)&data_ov006_021408f0);
        data_ov006_02140824 |= 1;
    }
    if (!(data_ov006_0214080c & 1)) {
        data_ov006_02140914.x = 0;
        data_ov006_02140914.y = 0;
        data_ov006_02140914.z = 0x1000;
        func_020731dc(&data_ov006_02140914, (void *)&_ZN7Vector3D1Ev, (void**)&data_ov006_02140908);
        data_ov006_0214080c |= 1;
    }
    func_0203cc28((int*)(item + 0x38), 0x100);
    func_0203ce80(&normalCopy, (Vec3*)(item + 0x38));
    func_0203cf00(&tangent, (Vec3*)(item + 0x38), &data_ov006_02140914);
    *(int*)(item + 0x44) = tangent.x;
    *(int*)(item + 0x48) = tangent.y;
    *(int*)(item + 0x4c) = tangent.z;
    func_0203ce80(&tangentCopy, (Vec3*)(item + 0x44));
    Quaternion_FromVector3((int*)(item + 0x74), &data_ov006_021408fc, (Vec3*)(item + 0x38));
    Quaternion_Normalize((int*)(item + 0x74));
}
}

namespace s020cde28 {
struct S{int w[2];}; extern "C" {extern struct S pmf_TrmpItem_Motion3;}
extern "C" void TrmpItem_SetMotion3(char*c){*(int*)(c+0x30)=0;*(struct S*)c=pmf_TrmpItem_Motion3;}
}

namespace s020cde4c {
extern "C" void TrmpItem_Motion2(char*item){
int y=*(int*)(item+0xc);
if(y>0x80000){*(int*)(item+0x30)=-0x1000;return;}
if(y<-0x60000)*(int*)(item+0x30)=0x1000;
}
}

namespace s020cde7c {
struct S{int w[2];}; extern "C" {extern struct S pmf_TrmpItem_Motion2;}
extern "C" void TrmpItem_SetMotion2(char*c){*(int*)(c+0x30)=0x1000;*(struct S*)c=pmf_TrmpItem_Motion2;}
}

namespace s020cdea0 {
extern "C" {extern int data_ov006_0212e07c[];}
extern "C" {extern int data_ov006_0212e088[];}
extern "C" void TrmpItem_Motion1(char *item) {
  int itemType = *(short *)(item + 0x96);
  if (*(int *)(item + 8) > data_ov006_0212e07c[itemType]) {
    *(int *)(item + 0x2c) = -data_ov006_0212e088[itemType];
    return;
  }
  if (*(int *)(item + 8) < -data_ov006_0212e07c[itemType]) {
    *(int *)(item + 0x2c) = data_ov006_0212e088[itemType];
  }
}
}

namespace s020cdeec {
extern "C" {extern int data_ov006_0212e088[];}
struct S2 { int w[2]; };
extern "C" {extern struct S2 pmf_TrmpItem_Motion1;}
extern "C" void TrmpItem_SetMotion1(char *item) {
  int itemType = *(short *)(item + 0x96);
  *(int *)(item + 0x2c) = data_ov006_0212e088[itemType];
  *(struct S2 *)item = pmf_TrmpItem_Motion1;
}
}

namespace s020cdf1c {
extern "C" void TrmpItem_Motion0(void)
{
}
}

namespace s020cdf20 {
struct S { int w[2]; };
extern "C" {extern struct S pmf_TrmpItem_Motion0;}
extern "C" void TrmpItem_SetMotion0(char *p) { *(struct S *)(p + 0x0) = pmf_TrmpItem_Motion0; }
}

namespace s020cdf3c {
/* TrmpItem_StateAppear at 0x020cdf3c
 *
 * Matched byte-for-byte with mwccarm 1.2/sp2p3 (ov006).
 */
extern "C" extern int _Z14ApproachLinearRiii(int* a, int b, int c);
extern "C" extern void TrmpItem_SetMotion1(char* c);
extern "C" extern void TrmpItem_SetMotion2(char* c);
extern "C" extern void TrmpItem_SetMotion3(char* c);
extern "C" extern void TrmpItem_SetMotion0(char* c);
extern "C" extern void TrmpItem_SetMotion4(char* c);
extern "C" extern void TrmpItem_SetMotion6(char* c);
extern "C" extern void TrmpItem_SetMotion8(char* c);
extern "C" extern void TrmpItem_SetMotion5(char* c);
extern "C" extern void TrmpItem_SetMotion7(char* c);

extern "C" void TrmpItem_StateAppear(char* item)
{
    int yScaleReady = _Z14ApproachLinearRiii((int*)(item + 0x6c), 0x1000, 0xc0);
    int xScaleReady = _Z14ApproachLinearRiii((int*)(item + 0x68), 0x1000, 0x180);
    int zScaleReady = _Z14ApproachLinearRiii((int*)(item + 0x70), 0x1000, 0x180);
    int responseScaleReady = _Z14ApproachLinearRiii((int*)(item + 0x88), 0x800, 0x60);
    if (yScaleReady == 0) return;
    if (xScaleReady == 0) return;
    if ((zScaleReady & responseScaleReady) == 0) return;
    switch (*(short*)(item + 0x98)) {
    case 1: TrmpItem_SetMotion1(item); break;
    case 2: TrmpItem_SetMotion2(item); break;
    case 3: TrmpItem_SetMotion3(item); break;
    case 0: TrmpItem_SetMotion0(item); break;
    case 4: TrmpItem_SetMotion4(item); break;
    case 6: TrmpItem_SetMotion6(item); break;
    case 8: TrmpItem_SetMotion8(item); break;
    case 5: TrmpItem_SetMotion5(item); break;
    case 7: TrmpItem_SetMotion7(item); break;
    }
}
}

namespace s020ce0ac {
extern "C" {extern int data_ov006_02140838;}
extern "C" {extern int data_ov006_02140828;}
struct S2 { int w[2]; };
extern "C" {extern struct S2 pmf_TrmpItem_StateAppear_2;}
extern "C" void TrmpItem_StartAppear(char *c) {
  ApproachLinear(data_ov006_02140828, data_ov006_02140838, 1);
  *(char *)(c + 0x9c) = 0x1f;
  *(int *)(c + 0x2c) = 0;
  *(int *)(c + 0x30) = 0;
  *(int *)(c + 0x34) = 0;
  *(struct S2 *)c = pmf_TrmpItem_StateAppear_2;
}
}

namespace s020ce108 {
// @symbol TrmpItem_ReflectOffLine


extern "C" {
extern void Vec3_Sub(Vector3 *out, Vector3 *a, Vector3 *b);
extern void Vec3_MulScalar(Vector3 *out, const Vector3 *in, int scale);
extern void AddVec3(Vector3 *a, Vector3 *b, Vector3 *c);
extern void SubVec3(Vector3 *a, Vector3 *b, Vector3 *c);
extern int LenVec3(Vector3 *v);
extern int DotVec3(const Vector3 *a, const Vector3 *b);
extern int NormalizeVec3IfNonZero(Vector3 *v);
extern void Vec3_MulScalarInPlace(Vector3 *v, int s);

extern "C" {extern Vector3 data_020a0ebc;}
}

typedef TrampolineObjectCallbacks Obj;

extern "C" void TrmpItem_ReflectOffLine(char *item, Obj *jumper)
{
    Vector3 negativeEndOffset;
    Vector3 positiveEndOffset;
    Vector3 itemToJumper;
    Vector3 pushSum;
    Vector3 halfSpan;
    Vector3 normalVelocityChange;
    Vector3 relativePosition;
    Vector3 negativeEndCorrection;
    Vector3 positiveEndCorrection;
    Vector3 endVelocityChange;
    Vector3 *position;
    int along;
    Vector3 *velocity;
    int negativeEndDistance;
    int positiveEndDistance;
    int across;

    {
        int *growState = pmf_TrmpItem_GrowScale_3;
        int stateWord = *(int *)item;
        if (stateWord == growState[0]) {
            if (*(int *)(item + 4) == growState[1])
                return;
            if (stateWord == 0)
                return;
        }
    }

    position = jumper->GetPos();
    velocity = jumper->GetVelocity();

    pushSum = data_020a0ebc;
    Vec3_Sub(&relativePosition, position, (Vector3 *)(item + 8));
    positiveEndOffset = relativePosition;
    negativeEndOffset = relativePosition;
    itemToJumper = relativePosition;

    Vec3_MulScalar(&halfSpan, (Vector3 *)(item + 0x44),
        data_ov006_0212e070[*(short *)(item + 0x96)]);
    AddVec3(&negativeEndOffset, &halfSpan, &negativeEndOffset);
    SubVec3(&positiveEndOffset, &halfSpan, &positiveEndOffset);

    // Shift and compress Y for the two end-distance tests.
    negativeEndOffset.y += 0xE000;
    positiveEndOffset.y += 0xE000;
    negativeEndOffset.y >>= 1;
    positiveEndOffset.y >>= 1;

    negativeEndDistance = LenVec3(&negativeEndOffset);
    positiveEndDistance = LenVec3(&positiveEndOffset);
    along = DotVec3(&itemToJumper, (Vector3 *)(item + 0x44));
    across = DotVec3(&itemToJumper, (Vector3 *)(item + 0x38));

    // Reuse the end offsets as outward corrections after normalization.
    if (negativeEndDistance < 0xE000 && NormalizeVec3IfNonZero(&negativeEndOffset) != 0) {
        Vec3_MulScalarInPlace(&negativeEndOffset, 0xE000 - negativeEndDistance);
        negativeEndOffset.y <<= 1;
        Vec3_MulScalar(&negativeEndCorrection, &negativeEndOffset, *(int *)(item + 0x88));
        AddVec3(position, &negativeEndCorrection, position);
        AddVec3(&pushSum, &negativeEndOffset, &pushSum);
        *(short *)(((int)jumper + 0x22)) += 1;
    } else if (positiveEndDistance < 0xE000 && NormalizeVec3IfNonZero(&positiveEndOffset) != 0) {
        Vec3_MulScalarInPlace(&positiveEndOffset, 0xE000 - positiveEndDistance);
        positiveEndOffset.y <<= 1;
        Vec3_MulScalar(&positiveEndCorrection, &positiveEndOffset, *(int *)(item + 0x88));
        AddVec3(position, &positiveEndCorrection, position);
        AddVec3(&pushSum, &positiveEndOffset, &pushSum);
        *(short *)(((int)jumper + 0x22)) += 1;
    }

    Vec3_MulScalar(&endVelocityChange, &pushSum, 0x100);
    AddVec3(velocity, &endVelocityChange, velocity);

    {
        int x = velocity->x;
        if (x < -0x1000)
            x = -0x1000;
        else if (x > 0x1000)
            x = 0x1000;
        velocity->x = x;
    }

    {
        int maxYVelocity = data_ov006_021405a8[0];
        int minYVelocity = data_ov006_021405b4[0];
        int y = velocity->y;
        if (y >= minYVelocity) {
            if (y <= maxYVelocity)
                maxYVelocity = y;
            minYVelocity = maxYVelocity;
        }
        velocity->y = minYVelocity;
    }

    if ((across < 0 ? -across : across) >= 0xE000)
        return;

    if (along < 0)
        along = -along;
    if (along >= data_ov006_0212e070[*(short *)(item + 0x96)])
        return;

    Vec3_MulScalar(&normalVelocityChange, (Vector3 *)(item + 0x38), 0x70);
    if (across > 0)
        Vec3_MulScalarInPlace(&normalVelocityChange, -0x1000);
    {
        int yChange = normalVelocityChange.y;
        if (yChange > 0x80)
            yChange = 0x80;
        normalVelocityChange.y = yChange;
    }
    AddVec3(velocity, &normalVelocityChange, velocity);
}
}

namespace s020ce46c {
extern "C" {extern int data_ov006_021405ac;}
extern "C" {extern int data_ov006_02140838;}
extern "C" {extern char *data_ov006_0214082c;}
extern "C" {extern int data_ov006_02140818;}
extern "C" {extern int data_ov006_02140830;}

extern "C" extern void TrmpItem_ReflectOffLine(char *a, void *o);
extern "C" extern int TrmpItem_HitTest2D(char *a, void *o, int arg1);
extern "C" extern void _Z14ApproachLinearRiii(int *p, int target, int step);
extern "C" extern void D3D_PlaySeAtX(int a, int b);
extern "C" extern void Trmp2Spinner_InitAll(int c);
extern "C" extern void TrmpItem_ProjectToScreen(char *c, unsigned short arg1);

#define ELEM ((char *)data_ov006_0214082c + itemIndex * 0x1d0)

extern "C" void TrmpItem_UpdateWithJumper(void *object, int arg1)
{
    char *jumper = (char *)object;
    int itemIndex;
    int doubling;
    int scoreIncrement;
    int hitCount;
    int scoreDoublings;

    if (data_ov006_021405ac != 0)
        return;
    *(unsigned short *)(jumper + 0x22) = 0;

    for (itemIndex = 0; itemIndex < data_ov006_02140838; itemIndex++) {
        if (*(int *)(ELEM + 0x84) == 0)
            continue;
        TrmpItem_ReflectOffLine(ELEM, jumper);
        if (TrmpItem_HitTest2D(ELEM, jumper, arg1) == 0)
            continue;
        _Z14ApproachLinearRiii(&data_ov006_02140818, 0x270f, 1);
        hitCount = *(unsigned short *)(jumper + 0x20);
        // Double the award for each prior hit, up to six doublings.
        scoreIncrement = 100;
        scoreDoublings = (hitCount > 6) ? 6 : hitCount;
        for (doubling = 0; doubling < scoreDoublings; doubling++)
            scoreIncrement <<= 1;
        switch (hitCount) {
        case 0:
            D3D_PlaySeAtX(0x131, *(int *)(ELEM + 8));
            break;
        case 1:
            D3D_PlaySeAtX(0x132, *(int *)(ELEM + 8));
            break;
        case 2:
            D3D_PlaySeAtX(0x133, *(int *)(ELEM + 8));
            break;
        case 3:
            D3D_PlaySeAtX(0x134, *(int *)(ELEM + 8));
            break;
        case 4:
        default:
            D3D_PlaySeAtX(0x135, *(int *)(ELEM + 8));
            break;
        }
        _Z14ApproachLinearRiii(&data_ov006_02140830, 0xf423f, scoreIncrement);
        Trmp2Spinner_InitAll(*(unsigned short *)(jumper + 0x20));
        TrmpItem_ProjectToScreen(ELEM, (short)scoreIncrement);
        (*(unsigned short *)(jumper + 0x20))++;
    }
}
}

namespace s020ce674 {
struct V2 { int x, y; };

#define AT(p, off) ((void*)(int)((char*)(p) + (off)))

extern "C" extern void TrmpItem_ProjectOnLine(char* self, void* other, struct V2* a, struct V2* b);
extern "C" extern void Vec2_Sub(struct V2* o, struct V2* a, struct V2* b);
extern "C" extern int func_0203d524(struct V2* a, struct V2* b);
extern "C" {extern int data_ov006_0212e070[];}
extern "C" {extern int pmf_TrmpItem_StateAppear[2];}
extern "C" {extern int pmf_TrmpItem_GrowScale_2[2];}

// The caller supplies a third argument; this implementation does not read it.
extern "C" int TrmpItem_HitTest2D(char *item, void *jumper, int)
{
    struct V2 currentProjection, previousProjection, lineStart, lineEnd;
    struct V2 testDirection, firstOffset, secondOffset;
    struct V2 movementDirection, toEnd, toStart;
    int stateWord = *(int*)item;
    int currentSide, previousSide, endSide, startSide;
    int result;

    {
        int *appearState = (int *)AT(pmf_TrmpItem_StateAppear, 0);
        int *growState;
        if ((stateWord == appearState[0] && (*(int*)(item + 4) == appearState[1] || stateWord == 0)) ||
            (growState = (int *)AT(pmf_TrmpItem_GrowScale_2, 0),
             stateWord == growState[0] && (*(int*)(item + 4) == growState[1] || stateWord == 0)))
            return 0;
    }

    result = 0;
    TrmpItem_ProjectOnLine(item, jumper, &currentProjection, &previousProjection);

    {
        int *halfLengths = (int *)AT(data_ov006_0212e070, 0);
        lineStart.x = -halfLengths[*(short*)(item + 0x96)];
        lineStart.y = 0;
        lineEnd.x = halfLengths[*(short*)(item + 0x96)];
        lineEnd.y = 0;
    }

    // The projections must straddle the line without lying on it together.
    Vec2_Sub(&testDirection, &lineEnd, &lineStart);
    Vec2_Sub(&firstOffset, &currentProjection, &lineStart);
    Vec2_Sub(&secondOffset, &previousProjection, &lineStart);
    currentSide = func_0203d524(&testDirection, &firstOffset);
    previousSide = func_0203d524(&testDirection, &secondOffset);
    if (currentSide < -1) currentSide = -1;
    else if (currentSide > 1) currentSide = 1;
    if (previousSide < -1) previousSide = -1;
    else if (previousSide > 1) previousSide = 1;
    if (currentSide * previousSide > 0) goto done;
    if (currentSide == 0 && previousSide == 0) goto done;

    // Require an intersection strictly between the two line endpoints.
    Vec2_Sub(&movementDirection, &currentProjection, &previousProjection);
    testDirection = movementDirection;
    Vec2_Sub(&toEnd, &lineEnd, &currentProjection);
    firstOffset = toEnd;
    Vec2_Sub(&toStart, &lineStart, &currentProjection);
    secondOffset = toStart;
    endSide = func_0203d524(&testDirection, &firstOffset);
    startSide = func_0203d524(&testDirection, &secondOffset);
    if (endSide < -1) endSide = -1;
    else if (endSide > 1) endSide = 1;
    if (startSide < -1) startSide = -1;
    else if (startSide > 1) startSide = 1;
    if (endSide * startSide < 0 && (endSide != 0 || startSide != 0)) result = 1;
done:
    return result;
}
}

namespace s020ce8a0 {
// @symbol TrmpItem_ProjectOnLine

extern "C" void Vec3_Sub(struct Vector3* out, struct Vector3* a, struct Vector3* b);
extern "C" int DotVec3(struct Vector3* a, struct Vector3* b);

typedef TrampolineObjectCallbacks Obj;

extern "C" void TrmpItem_ProjectOnLine(char *item, Obj *jumper,
    int *currentProjection, int *previousProjection)
{
    struct Vector3 currentPosition, previousPosition, currentRelative, previousRelative;
    struct Vector3 *position;
    int across;

    position = jumper->GetPos();
    currentPosition.x = position->x;
    currentPosition.y = position->y;
    currentPosition.z = position->z;
    position = jumper->GetPrevPos();
    previousPosition.x = position->x;
    previousPosition.y = position->y;
    previousPosition.z = position->z;
    Vec3_Sub(&currentRelative, &currentPosition, (struct Vector3 *)(item + 8));
    Vec3_Sub(&previousRelative, &previousPosition, (struct Vector3 *)(item + 0x14));
    // Only the current relative position receives this vertical offset.
    currentRelative.y += 0xc000;
    across = DotVec3((struct Vector3 *)(item + 0x38), &currentRelative);
    currentProjection[0] = DotVec3((struct Vector3 *)(item + 0x44), &currentRelative);
    currentProjection[1] = across;
    across = DotVec3((struct Vector3 *)(item + 0x50), &previousRelative);
    previousProjection[0] = DotVec3((struct Vector3 *)(item + 0x5c), &previousRelative);
    previousProjection[1] = across;
}
}

namespace s020ce988 {
// @symbol TrmpItem_UpdateMatrix

extern "C" {
void Matrix4x3_FromQuaternion(const void* q, struct Matrix4x3* mF);
void Matrix4x3_FromTranslation(struct Matrix4x3* m, int x, int y, int z);
void MulMat4x3Mat4x3(struct Matrix4x3* a, struct Matrix4x3* b, struct Matrix4x3* out);
}
extern "C" {extern struct Matrix4x3 data_020a0e68;}


extern "C" void TrmpItem_UpdateMatrix(char *self)
{
    Matrix4x3 rotation;
    Matrix4x3_FromQuaternion(self + 0x74, &rotation);
    Matrix4x3_FromTranslation(&data_020a0e68,
        *(int *)(self + 8), *(int *)(self + 0xc), *(int *)(self + 0x10));
    MulMat4x3Mat4x3(&rotation, &data_020a0e68, &data_020a0e68);
    (*(Model **)(self + 0x190))->mat4x3 = data_020a0e68;
    ((TextureTransformer *)(self + 0x194))->Update((*(Model **)(self + 0x190))->data);
    (*(Model **)(self + 0x190))->ApplyOpacity(*(unsigned char *)(self + 0x9c), 0);
    (*(Model **)(self + 0x190))->Render((const Vector3 *)(self + 0x68));
}
}

namespace s020cea2c {
extern "C" {
void AddVec3(void *a, void *b, void *c);
}

struct C;
typedef void (C::*PMF)();

extern "C" void TrmpItem_Update(char *item)
{
    PMF *state = (PMF *)item;
    (((C *)item)->**state)();
    AddVec3(item + 8, item + 0x2c, item + 8);
    ((TextureTransformer *)(item + 0x194))->Advance();
    *(int *)(item + 0x14) = *(int *)(item + 8);
    *(int *)(item + 0x18) = *(int *)(item + 0xc);
    *(int *)(item + 0x1c) = *(int *)(item + 0x10);
    *(int *)(item + 0x50) = *(int *)(item + 0x38);
    *(int *)(item + 0x54) = *(int *)(item + 0x3c);
    *(int *)(item + 0x58) = *(int *)(item + 0x40);
    *(int *)(item + 0x5c) = *(int *)(item + 0x44);
    *(int *)(item + 0x60) = *(int *)(item + 0x48);
    *(int *)(item + 0x64) = *(int *)(item + 0x4c);
}
}

namespace s020ceabc {
typedef struct { int x, y, z; } Vec3;

extern "C" {extern int data_ov006_0214081c;}
extern "C" {extern Vec3 data_ov006_021408a8;}
extern "C" {extern void *data_ov006_0214089c;}
extern "C" {extern int data_02092768[4];}
extern "C" {extern int data_020a0ebc[3];}
extern "C" extern void *_ZN7Vector3D1Ev(void *object);
extern "C" extern void func_020731dc(void *object, void *destructor, void **node);
extern "C" extern void func_0203cc28(int *p, int angle);
extern "C" extern void Quaternion_FromVector3(int *q, Vec3 *a, Vec3 *b);
extern "C" extern void TrmpItem_StartAppear(char *c);

extern "C" void TrmpItem_Init(char *item, int *position, int *normal, int itemType, short motionType)
{
    if ((data_ov006_0214081c & 1) == 0) {
        data_ov006_021408a8.x = 0;
        data_ov006_021408a8.y = 0x1000;
        data_ov006_021408a8.z = 0;
        func_020731dc(&data_ov006_021408a8, (void *)_ZN7Vector3D1Ev, &data_ov006_0214089c);
        data_ov006_0214081c |= 1;
    }
    *(int *)(item + 0x8) = position[0];
    *(int *)(item + 0xc) = position[1];
    *(int *)(item + 0x10) = position[2];
    *(int *)(item + 0x38) = normal[0];
    *(int *)(item + 0x3c) = normal[1];
    *(int *)(item + 0x40) = normal[2];
    {
        int *normalComponents = (int *)(int)(item + 0x38);
        *(int *)(item + 0x44) = normalComponents[0];
        *(int *)(item + 0x48) = normalComponents[1];
        *(int *)(item + 0x4c) = normalComponents[2];
    }
    func_0203cc28((int *)(item + 0x44), -0x4000);
    *(int *)(item + 0x14) = *(int *)(item + 0x8);
    *(int *)(item + 0x18) = *(int *)(item + 0xc);
    *(int *)(item + 0x1c) = *(int *)(item + 0x10);
    {
        int *cachedPosition = (int *)(int)(item + 0x14);
        *(int *)(item + 0x20) = cachedPosition[0];
        *(int *)(item + 0x24) = cachedPosition[1];
        *(int *)(item + 0x28) = cachedPosition[2];
    }
    *(int *)(item + 0x50) = *(int *)(item + 0x38);
    *(int *)(item + 0x54) = *(int *)(item + 0x3c);
    *(int *)(item + 0x58) = *(int *)(item + 0x40);
    *(int *)(item + 0x5c) = *(int *)(item + 0x44);
    *(int *)(item + 0x60) = *(int *)(item + 0x48);
    *(int *)(item + 0x64) = *(int *)(item + 0x4c);
    *(int *)(item + 0x74) = data_02092768[0];
    *(int *)(item + 0x78) = data_02092768[1];
    *(int *)(item + 0x7c) = data_02092768[2];
    *(int *)(item + 0x80) = data_02092768[3];
    Quaternion_FromVector3((int *)(item + 0x74), &data_ov006_021408a8, (Vec3 *)(item + 0x38));
    *(short *)(item + 0x96) = itemType;
    *(short *)(item + 0x98) = motionType;
    *(int *)(item + 0x84) = 1;
    switch (*(short *)(item + 0x96)) {
    case 0:
        *(void **)(item + 0x190) = item + 0xa0;
        break;
    case 1:
        *(void **)(item + 0x190) = item + 0xf0;
        break;
    case 2:
    default:
        *(void **)(item + 0x190) = item + 0x140;
        break;
    }
    *(int *)(item + 0x68) = data_020a0ebc[0];
    *(int *)(item + 0x6c) = data_020a0ebc[1];
    *(int *)(item + 0x70) = data_020a0ebc[2];
    *(int *)(item + 0x88) = 0;
    *(short *)(item + 0x92) = 0x5a;
    TrmpItem_StartAppear(item);
}
}

namespace s020cecb4 {
extern "C" void TrmpItem_Hide(int *p)
{
    p[33] = 0;
}
}

namespace s020cecc0 {
extern "C" {
void TrmpItem_Hide(int *p);
}
/* Signature deliberately copied from the local declaration above: the
   ROM name carries by-value class parameters (e.g. Fix12<int>), which
   mwccarm passes differently at the call site, so declaring the true
   types breaks the byte match. See notes/mwccarm-codegen.md 6az. */
extern "C" void _ZN18TextureTransformer7SetFileER8BTA_Filei5Fix12IiEj(void *, BTA_File&, int, int, unsigned int);


// Consumed file-handle prefix only; the shared class exposes methods, not fields.
struct SharedModelFileView { int header; BMD_File *file; };
extern "C" {extern SharedFilePtr data_ov006_02140850;}
extern "C" {extern SharedFilePtr data_ov006_02140858;}
extern "C" {extern SharedFilePtr data_ov006_02140848;}
extern "C" {extern BTA_File data_ov006_0213b3a4;}

extern "C" void TrmpItem_Load(char* c)
{
    ((Model*)(c+0xa0))->SetFile(((SharedModelFileView *)&data_ov006_02140850)->file, 1, -1);
    ((Model*)(c+0xf0))->SetFile(((SharedModelFileView *)&data_ov006_02140858)->file, 1, -1);
    ((Model*)(c+0x140))->SetFile(((SharedModelFileView *)&data_ov006_02140848)->file, 1, -1);
    ((Model*)(c+0xa0))->SetPolygonID(1);
    ((Model*)(c+0xf0))->SetPolygonID(2);
    ((Model*)(c+0x140))->SetPolygonID(3);
    TextureTransformer::Prepare(*((SharedModelFileView *)&data_ov006_02140850)->file, data_ov006_0213b3a4);
    _ZN18TextureTransformer7SetFileER8BTA_Filei5Fix12IiEj((TextureTransformer*)(c+0x194), data_ov006_0213b3a4, 0, 0x1000, 0);
    TrmpItem_Hide((int*)c);
}
}

namespace s020ced84 {
/* TrmpItem_UpdateMatricesAll at 0x020ced84
 *
 * Matched byte-for-byte with mwccarm 1.2/sp2p3 (ov006).
 */
extern "C" {extern int data_ov006_02140838;}
extern "C" {extern char *data_ov006_0214082c;}
extern "C" extern void TrmpItem_UpdateMatrix(char *c);

extern "C" void TrmpItem_UpdateMatricesAll(void)
{
    int itemIndex;
    for (itemIndex = 0; itemIndex < data_ov006_02140838; itemIndex++)
    {
        char *item = data_ov006_0214082c + itemIndex * 0x1d0;
        if (*(int *)(item + 0x84) != 0)
            TrmpItem_UpdateMatrix(item);
    }
}
}

namespace s020cedf0 {
/* TrmpItem_UpdateAll at 0x020cedf0
 *
 * Matched byte-for-byte with mwccarm 1.2/sp2p3 (ov006).
 */
extern "C" {extern int data_ov006_02140838;}
extern "C" {extern char* data_ov006_0214082c;}
extern "C" extern void TrmpItem_Update(char *c);

extern "C" void TrmpItem_UpdateAll(void){
  int itemIndex=0;
  int itemOffset;
  if(data_ov006_02140838>0){
    itemOffset=0;
    do{
      char *item = data_ov006_0214082c + itemOffset;
      if(*(int*)(item+0x84)!=0){
        TrmpItem_Update(item);
      }
      itemIndex++;
      itemOffset+=0x1d0;
    }while(itemIndex<data_ov006_02140838);
  }
}
}

namespace s020cee5c {
extern "C" {extern int data_ov006_02140838;}
extern "C" {extern unsigned char* data_ov006_0214082c;}
extern "C" {extern int data_ov006_02140828;}
extern "C" {extern int data_ov006_02140818;}
extern "C" {extern int data_ov006_02140830;}
extern "C" extern void TrmpItem_Hide(int* p);
extern "C" void TrmpItem_HideAll(void){
  int itemIndex=0;
  int itemOffset;
  if(data_ov006_02140838>0){
    itemOffset=0;
    do{
      TrmpItem_Hide((int*)(data_ov006_0214082c+itemOffset));
      itemIndex++;
      itemOffset+=0x1d0;
    }while(itemIndex<data_ov006_02140838);
  }
  data_ov006_02140828=0;
  data_ov006_02140818=0;
  data_ov006_02140830=0;
}
}

namespace s020ceedc {
extern "C" {extern SharedFilePtr data_ov006_02140850;}
extern "C" {extern SharedFilePtr data_ov006_02140858;}
extern "C" {extern SharedFilePtr data_ov006_02140848;}
extern "C" void TrmpItem_ReleaseFiles(void)
{
    data_ov006_02140850.Release();
    data_ov006_02140858.Release();
    data_ov006_02140848.Release();
}
}

namespace s020cef14 {
extern "C" extern void TrmpItem_Load(void *p);
extern "C" {extern SharedFilePtr data_ov006_02140850;}
extern "C" {extern SharedFilePtr data_ov006_02140858;}
extern "C" {extern SharedFilePtr data_ov006_02140848;}
extern "C" {extern char *data_ov006_0214082c[];}
extern "C" {extern int data_ov006_02140838[];}

extern "C" void TrmpItem_LoadAll(char *items, int count)
{
    int itemIndex;
    int itemOffset;
    Model::LoadFile(data_ov006_02140850);
    Model::LoadFile(data_ov006_02140858);
    Model::LoadFile(data_ov006_02140848);
    data_ov006_0214082c[0] = items;
    data_ov006_02140838[0] = count;
    itemIndex = 0;
    if (count <= 0)
        return;
    itemOffset = 0;
    do {
        TrmpItem_Load(data_ov006_0214082c[0] + itemOffset);
        itemIndex++;
        itemOffset += 0x1d0;
    } while (itemIndex < data_ov006_02140838[0]);
}
}

namespace s020cefa4 {
/* TrmpItem_Spawn at 0x020cefa4
 *
 * Matched byte-for-byte with mwccarm 1.2/sp2p3 (ov006).
 */
extern "C" {extern int data_ov006_02140838;}
extern "C" {extern char *data_ov006_0214082c;}
// Keep motionType word-sized here: a short declaration adds sign extension
// in this caller. The initializer retains its ROM-matched short load.
extern "C" void TrmpItem_Init(char *item, int *position, int *normal, int itemType, int motionType);

extern "C" char *TrmpItem_Spawn(int position, int *normal, int itemType, int motionType)
{
    int itemIndex = 0;
    char *item;
    int itemOffset;
    if (data_ov006_02140838 > 0) {
        item = data_ov006_0214082c;
        do {
            if (*(int*)(item + 0x84) == 0) {
                itemOffset = itemIndex * 0x1d0;
                TrmpItem_Init(data_ov006_0214082c + itemOffset, (int *)position, normal, itemType, motionType);
                return data_ov006_0214082c + itemOffset;
            }
            itemIndex++;
            item += 0x1d0;
        } while (itemIndex < data_ov006_02140838);
    }
    return 0;
}
}

namespace s020cf040 {
struct Vec3
{
  int x;
  int y;
  int z;
};
extern "C" extern int DotVec3(struct Vec3 *a, struct Vec3 *b);
extern "C" extern void SubVec3(struct Vec3 *a, struct Vec3 *b, struct Vec3 *c);
extern "C" extern int LenVec3(struct Vec3 *v);
extern "C" extern int _ZN4cstd4fdivEii(int a, int b);
extern "C" {extern int data_ov006_0212e0f0[];}
extern "C" void TrmpLine_PointDistance(char *self, void *referencePoint, struct Vec3 *offsetVector)
{
    int row;
    int negatedProjection = -DotVec3(offsetVector, (struct Vec3 *) (self + 0x14));
    int *amplitude = (int *) (self + 0x29c);
    char *restVertex = self + 0x11c;
    int weightedAmplitude;
    int *gridWeight = data_ov006_0212e0f0;
    for (row = 0; row < 4; row++)
    {
        int column;
        for (column = 0; column < 4; column++)
        {
            struct Vec3 delta;
            SubVec3((struct Vec3 *) restVertex, (struct Vec3 *) referencePoint, &delta);
            int halfLength = (long long) (*((int *) (self + 0x58)));
            int distance = LenVec3(&delta);
            int distanceWeight = _ZN4cstd4fdivEii(halfLength, halfLength + distance);
            int weightedProjection = (int) (((((long long) negatedProjection) * (*gridWeight)) + 0x800) >> 12);
            weightedAmplitude = (int) (((((long long) weightedProjection) * distanceWeight) + 0x800) >> 12);
            *amplitude = weightedAmplitude;
            restVertex += 0xc;
            gridWeight++;
            amplitude++;
        }
    }
}
}

namespace s020cf124 {
typedef struct { int x, y, z; } Vec3;

extern "C" extern void SubVec3(Vec3* a, Vec3* b, Vec3* c);
extern "C" extern void CrossVec3(const Vec3* a, const Vec3* b, Vec3* out);
extern "C" extern void NormalizeVec3(int* v, int* out);

#pragma push
#pragma opt_strength_reduction off
extern "C" void TrmpLine_ComputeNormals(char *self)
{
    Vec3 columnEdge;
    Vec3 rowEdge;
    char *vertex;
    Vec3 *normal;
    int *packedNormal;
    int row;
    int column;
    int componentMask = 0x3ff;

    vertex = self + 0x5c;
    normal = (Vec3 *)(self + 0x1dc);
    packedNormal = (int *)(self + 0x2dc);

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            int *components;
            int zero = 0;

            components = (int *)&columnEdge;
            components[0] = zero;
            components[1] = zero;
            components[2] = zero;
            components = (int *)&rowEdge;
            components[0] = zero;
            components[1] = zero;
            components[2] = zero;

            if (column == 0)
                SubVec3((Vec3 *)vertex, (Vec3 *)(vertex + 0xc), &columnEdge);
            else if (column == 3)
                SubVec3((Vec3 *)(vertex - 0xc), (Vec3 *)vertex, &columnEdge);
            else
                SubVec3((Vec3 *)(vertex - 0xc), (Vec3 *)(vertex + 0xc), &columnEdge);

            if (row == 0)
                SubVec3((Vec3 *)vertex, (Vec3 *)(vertex + 0x30), &rowEdge);
            else if (row == 3)
                SubVec3((Vec3 *)(vertex - 0x30), (Vec3 *)vertex, &rowEdge);
            else
                SubVec3((Vec3 *)(vertex - 0x30), (Vec3 *)(vertex + 0x30), &rowEdge);

            CrossVec3(&columnEdge, &rowEdge, normal);
            NormalizeVec3((int *)normal, (int *)normal);

            normal->x = (int)(((long long)normal->x * 0xff8 + 0x800) >> 12);
            normal->y = (int)(((long long)normal->y * 0xff8 + 0x800) >> 12);
            normal->z = (int)(((long long)normal->z * 0xff8 + 0x800) >> 12);

           *packedNormal = ((normal->x >> 3) & componentMask)
                 | (((normal->y >> 3) & componentMask) << 10)
                 | (((normal->z >> 3) & componentMask) << 20);

            normal++;
            packedNormal++;
            vertex += 0xc;
        }
    }
}
#pragma pop
}

namespace s020cf2fc {
typedef volatile unsigned int vu32;

typedef struct
{
  s32 x;
  s32 y;
  s32 z;
} Vec3;

struct Matrix4x3;
extern "C" extern struct Matrix4x3 data_020a0e68;
extern "C" extern struct Matrix4x3 data_0209b3ec;
extern "C" extern unsigned short data_ov006_0212e060[];
extern "C" extern unsigned short data_ov006_0212e068[];
extern "C" extern int data_ov006_0212e0b0[];
extern "C" extern void *data_ov006_02140844;
extern "C" extern void *data_ov006_02140814;
extern "C" extern void Matrix4x3_FromTranslation(struct Matrix4x3 *m, int x, int y, int z);
extern "C" extern void MulMat4x3Mat4x3(const int *a, const int *b, int *dst);
extern "C" extern void Matrix4x3_ApplyInPlaceToScale(struct Matrix4x3 *m, int x, int y, int z);
extern "C" extern void func_020553a4(int *m);

#define REG_MTX_MODE       (*(vu32 *)0x4000440)
#define REG_MTX_IDENTITY   (*(vu32 *)0x4000454)
#define REG_MTX_SCALE      (*(vu32 *)0x400046c)
#define REG_NORMAL         (*(vu32 *)0x4000484)
#define REG_TEXCOORD       (*(vu32 *)0x4000488)
#define REG_VTX_16         (*(vu32 *)0x400048c)
#define REG_POLYGON_ATTR   (*(vu32 *)0x40004a4)
#define REG_TEXIMAGE_PARAM (*(vu32 *)0x40004a8)
#define REG_TEXPLTT_BASE   (*(vu32 *)0x40004ac)
#define REG_DIF_AMB        (*(vu32 *)0x40004c0)
#define REG_SPE_EMI        (*(vu32 *)0x40004c4)
#define REG_BEGIN_VTXS     (*(vu32 *)0x4000500)
#define REG_END_VTXS       (*(vu32 *)0x4000504)

#define PATCH_VTX(obj) ((Vec3 *)((obj) + 0x5c))
#define PATCH_NRM(obj) ((int *)((obj) + 0x2dc))

static inline void G3_Vtx(s16 x, s16 y, s16 z)
{
  REG_VTX_16 = (u16)x | ((u16)y << 16);
  REG_VTX_16 = (u16)z;
}

#define SEND_VTX(p) G3_Vtx((s16)((p)->x >> 8), (s16)((p)->y >> 8), (s16)((p)->z >> 8))

// @symbol TrmpLine_Draw
/* Loads the object's placement and scale matrices, then draws its 4x4 vertex
 * patch (positions at +0x5c, packed normals at +0x2dc) as three triangle
 * strips per face, the back face first with negated normals. Each normal
 * pointer steps in its own statement after the REG_NORMAL write; stepping it
 * inside the write reorders the vertex loads. */
extern "C" void TrmpLine_Draw(char *obj)
{
  int i;
  int m2[12];
  int m1[12];
  Matrix4x3_FromTranslation(&data_020a0e68, *((int *) (obj + 8)), *((int *) (obj + 0xc)), *((int *) (obj + 0x10)));
  MulMat4x3Mat4x3((const int *) &data_020a0e68, (const int *) &data_0209b3ec, m1);
  Matrix4x3_ApplyInPlaceToScale(&data_020a0e68, *((int *) (obj + 0x2c)), *((int *) (obj + 0x30)), *((int *) (obj + 0x34)));
  MulMat4x3Mat4x3((const int *) &data_020a0e68, (const int *) &data_0209b3ec, m2);
  REG_MTX_MODE = 2;
  func_020553a4(m1);
  REG_MTX_MODE = 1;
  func_020553a4(m2);
  REG_MTX_SCALE = 0x100000;
  REG_MTX_SCALE = 0x100000;
  REG_MTX_SCALE = 0x100000;
  REG_MTX_MODE = 3;
  REG_MTX_IDENTITY = 0;
  REG_TEXIMAGE_PARAM = 0x8da70000 | ((u32) data_ov006_02140844 >> 3);
  REG_TEXPLTT_BASE = (u32) data_ov006_02140814 >> 4;
  {
    short *p31e = (short *) (obj + 0x31e);
    int sh = *p31e;
    unsigned short *dif = data_ov006_0212e060;
    volatile unsigned char *alpha = (volatile unsigned char *) (obj + 0x329);
    int pl = *alpha;
    REG_POLYGON_ATTR = (((sh + 1) << 24) | 0x82) | (pl << 16);
    {
      unsigned short *p326 = (unsigned short *) (obj + 0x326);
      unsigned idx = *p326;
      REG_DIF_AMB = dif[idx] | (data_ov006_0212e068[idx] << 16);
    }
  }
  REG_SPE_EMI = 0x8000;

  /* back face: row i then row i+1, normals negated */
  for (i = 0; i < 3; i++)
  {
    Vec3 *v0 = &PATCH_VTX(obj)[i * 4];
    Vec3 *v1 = &PATCH_VTX(obj)[(i + 1) * 4];
    int *n0 = &PATCH_NRM(obj)[i * 4];
    int *n1 = &PATCH_NRM(obj)[(i + 1) * 4];
    int k;
    REG_BEGIN_VTXS = 2;
    for (k = 0; k < 4; k++)
    {
      REG_TEXCOORD = data_ov006_0212e0b0[i * 4 + k];
      REG_NORMAL = -*n0 & 0x3fffffff;
      n0++;
      SEND_VTX(v0);
      v0++;
      REG_TEXCOORD = data_ov006_0212e0b0[(i + 1) * 4 + k];
      REG_NORMAL = -*n1 & 0x3fffffff;
      n1++;
      SEND_VTX(v1);
      v1++;
    }
    REG_END_VTXS = 0;
  }

  /* front face: row i+1 then row i */
  for (i = 0; i < 3; i++)
  {
    Vec3 *v0 = &PATCH_VTX(obj)[i * 4];
    Vec3 *v1 = &PATCH_VTX(obj)[(i + 1) * 4];
    int *n0 = &PATCH_NRM(obj)[i * 4];
    int *n1 = &PATCH_NRM(obj)[(i + 1) * 4];
    int k;
    REG_BEGIN_VTXS = 2;
    for (k = 0; k < 4; k++)
    {
      REG_TEXCOORD = data_ov006_0212e0b0[(i + 1) * 4 + k];
      REG_NORMAL = *n1;
      n1++;
      SEND_VTX(v1);
      v1++;
      REG_TEXCOORD = data_ov006_0212e0b0[i * 4 + k];
      REG_NORMAL = *n0;
      n0++;
      SEND_VTX(v0);
      v0++;
    }
    REG_END_VTXS = 0;
  }
}
}

namespace s020cf758 {
struct C;
typedef void (C::*PMF)();
struct C { PMF pmf; };
// @symbol TrmpLine_Update
extern "C" void TrmpLine_Update(C *c) {
  (c->*(c->pmf))();
}
}

namespace s020cf790 {
extern "C" extern int _Z15ApproachLinear2Riii(int* a, int b, int c);
extern "C" extern void TrmpLine_ComputeNormals(char* c);

// @symbol TrmpLine_StateFade
extern "C" void TrmpLine_StateFade(char* c) {
    if (_Z15ApproachLinear2Riii((int*)(c + 0x329), 0, 1) != 0) {
        *(unsigned char*)(c + 0x328) = 0;
        return;
    }
    *(int*)(((int)c + 0x2C)) += 0x80;
    *(int*)(((int)c + 0x30)) += 0x80;
    *(int*)(((int)c + 0x34)) += 0x80;
    TrmpLine_ComputeNormals(c);
}
}

namespace s020cf804 {
struct S { int w[2]; };
extern "C" {extern struct S pmf_TrmpLine_StateFade;}
// @symbol TrmpLine_SetStateFade
extern "C" void TrmpLine_SetStateFade(char *p) { *(struct S *)(p + 0x0) = pmf_TrmpLine_StateFade; }
}

namespace s020cf820 {
extern "C" extern int _Z15ApproachLinear2Riii(int *p, int a, int b);
extern "C" extern int _Z14ApproachLinearRiii(int *p, int a, int b);
extern "C" extern void TrmpLine_ComputeNormals(char *c);
extern "C" {extern int data_020a0db0;}
extern "C" {extern s16 data_02082214[];}

#define LA(p) ((int)(p))

// @symbol TrmpLine_StateSettle
extern "C" void TrmpLine_StateSettle(char *c)
{
    int normalX, normalY;
    int negativeSine;
    int deflectionX, deflectionY;
    u16 phase;
    int row, column;
    int targetAmplitude, decayStep;
    int *restPosition, *position, *amplitude;

    if ((data_020a0db0 & 1) != 0) {
        if (_Z15ApproachLinear2Riii((int *)(c + 0x329), 0, 1) != 0) {
            *(u8 *)(c + 0x328) = 0;
        }
    }

    {
        u16 *phasePtr = (u16 *)LA(c + 0x320);
        *phasePtr = *phasePtr + *(u16 *)(c + 0x322);
        phase = *(u16 *)(c + 0x320);
    }

    normalX = *(int *)(c + 0x14);
    normalY = *(int *)(c + 0x18);

    negativeSine = -(int)data_02082214[(phase >> 4) * 2];

    deflectionX = (int)(((s64)normalX * negativeSine + 0x800) >> 12);
    deflectionY = (int)(((s64)normalY * negativeSine + 0x800) >> 12);

    restPosition = (int *)(c + 0x11c);
    position = (int *)(c + 0x5c);
    amplitude = (int *)(c + 0x29c);

    targetAmplitude = 0;
    decayStep = 0x100;

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            position[0] = restPosition[0];
            position[1] = restPosition[1];
            position[2] = restPosition[2];
            position[0] = position[0] + (int)(((s64)*amplitude * deflectionX + 0x800) >> 12);
            position[1] = position[1] + (int)(((s64)*amplitude * deflectionY + 0x800) >> 12);
            _Z14ApproachLinearRiii(amplitude, targetAmplitude, decayStep);
            restPosition += 3;
            position += 3;
            amplitude += 1;
        }
    }

    TrmpLine_ComputeNormals(c);
}
}

namespace s020cfa28 {
struct S { int w[2]; };
extern "C" {extern struct S pmf_TrmpLine_StateSettle;}
// @symbol TrmpLine_SetStateSettle
extern "C" void TrmpLine_SetStateSettle(char *p) { *(struct S *)(p + 0x0) = pmf_TrmpLine_StateSettle; }
}

namespace s020cfa44 {
typedef struct { int x, y, z; } Vec3;

extern "C" {extern s16 data_02082214[];}
extern "C" extern int TrmpLine_PushJumper(char *o);
extern "C" extern int _Z14ApproachLinearRiii(int *cur, int target, int step);
extern "C" extern int _Z15ApproachLinear2Rsss(short *cur, short target, short step);
extern "C" extern void TrmpLine_ComputeNormals(char *o);
extern "C" extern void TrmpLine_SetStateFade(char *o);

// @symbol TrmpLine_StateFlex
extern "C" void TrmpLine_StateFlex(char *o)
{
    int row, column;
    int normalX, normalY;
    int angleIndex;
    s16 sine;
    int negativeSine;
    int deflectionX, deflectionY;
    int targetAmplitude;
    int firstColumn;
    int decayStep;
    Vec3 *restPosition;
    Vec3 *position;
    int *amplitude;
    u16 *phasePtr;

    TrmpLine_PushJumper(o);

    phasePtr = (u16 *)LA(o + 0x320);
    *phasePtr = *phasePtr + *(u16 *)(o + 0x322);

    normalX = *(int *)(o + 0x14);
    normalY = *(int *)(o + 0x18);

    angleIndex = *(u16 *)(o + 0x320) >> 4;
    sine = data_02082214[angleIndex * 2];
    negativeSine = -(int)sine;

    restPosition = (Vec3 *)(o + 0x11c);
    position = (Vec3 *)(o + 0x5c);

    deflectionX = (int)(((s64)normalX * negativeSine + 0x800) >> 12);
    deflectionY = (int)(((s64)normalY * negativeSine + 0x800) >> 12);

    amplitude = (int *)(o + 0x29c);

    targetAmplitude = 0;
    firstColumn = 0;
    decayStep = 0x100;

    for (row = 0; row < 4; row++) {
        for (column = firstColumn; column < 4; column++) {
            position->x = restPosition->x;
            position->y = restPosition->y;
            position->z = restPosition->z;
            position->x += (int)(((s64)(*amplitude) * deflectionX + 0x800) >> 12);
            position->y += (int)(((s64)(*amplitude) * deflectionY + 0x800) >> 12);

            _Z14ApproachLinearRiii(amplitude, targetAmplitude, decayStep);
            restPosition++;
            position++;
            amplitude++;
        }
    }

    TrmpLine_ComputeNormals(o);

    if (*(s16 *)(o + 0x31e) == 3)
        return;

    if (_Z15ApproachLinear2Rsss((short *)(o + 0x31c), 0, 1) == 0)
        return;

    TrmpLine_SetStateFade(o);
}
}

namespace s020cfc58 {
struct S { int w[2]; };
extern "C" {extern struct S pmf_TrmpLine_StateFlex;}
// @symbol TrmpLine_SetStateFlex
extern "C" void TrmpLine_SetStateFlex(char *p) { *(struct S *)(p + 0x0) = pmf_TrmpLine_StateFlex; }
}

namespace s020cfc74 {
/*
 * Per-frame gate-crossing check over the five tracked objects
 * (data_ov006_0214097c). For each live object, project its current and
 * previous positions onto the gate frame (line+0x14 / line+0x20 basis,
 * line+0x58 half-width). A segment that crosses the gate records the hit
 * (line+0x38 position, line+0x44
 * direction, state 1 or 2 with a sound whose pitch is lerped from the
 * crossing point), decrements the remaining count at line+0x324 and returns 1
 * when it reaches zero. Segments that miss just outside the gate edges are
 * marked state 3.
 *
 * Shape notes: the +-1 clamps are a ternary macro so the constants rank
 * above the coordinate/index locals in the callee-saved band and still
 * hoist in the compiler's own order; jumpers is assigned after the null/active checks so its pool
 * load sits in the hoisted-constant sequence; the +0x320/+0x324 halfword
 * accesses go through line directly, which yields the ROM's shared
 * line+0x300 base and the copied read.
 */
#define CLAMP(v, lo, hi) ((v) < (lo) ? (lo) : (v) > (hi) ? (hi) : (v))

struct V2 { int x, y; };

// Consumed prefix only; no complete jumper-object size is implied.
struct TrampolineContactView : TrampolineObjectCallbacks {
    Vector3 lineNormal;        // +0x04
    int alongLine;             // +0x10: dot with the line direction
    int lineHalfLength;        // +0x14
    u16 contactState;          // +0x18: cleared by callback slot 4
};

extern "C" extern void Vec3_Sub(Vector3 *out, Vector3 *a, Vector3 *b);
extern "C" extern void SubVec3(Vector3 *a, Vector3 *b, Vector3 *c);
extern "C" extern int DotVec3(Vector3 *a, Vector3 *b);
extern "C" extern void Vec2_Sub(int *o, int *a, int *b);
extern "C" extern int func_0203d524(int *a, int *b);
extern "C" extern int _ZN4cstd4fdivEii(int a, int b);
extern "C" extern void D3D_PlaySePannedLoop(int a0, int a1, int a2);
extern "C" extern void TrmpLine_PointDistance(char *sl, void *arg1, Vector3 *r2);
extern "C" extern void TrmpLine_SetStateSettle(char *p);
extern "C" extern void Vec3_MulScalar(Vector3 *out, Vector3 *in, int scale);
extern "C" extern void Vec3_Add(Vector3 *out, Vector3 *a, Vector3 *b);

extern "C" {extern struct TrampolineContactView *data_ov006_0214097c[];}
extern "C" {extern int data_ov006_0213b30c;}
extern "C" {extern int data_ov006_0213b310;}
extern "C" {extern int data_ov006_0213b2f4;}
extern "C" {extern int data_ov006_0213b308;}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
// @symbol TrmpLine_PushJumper
extern "C" int TrmpLine_PushJumper(char *line)
{
    int jumperIndex;
    int currentAlong;
    struct TrampolineContactView **jumpers;

    jumperIndex = 0;
    do {
        int currentAcross, previousAlong, previousAcross;
        Vector3 currentPos, previousPos, movementDelta;
        struct V2 previousProjection, currentProjection;
        struct V2 lineStart, lineEnd;
        struct V2 edgeDirection, firstOffset, secondOffset;
        int crossedLine, previousSide, currentSide;
        Vector3 fromStart, fromEnd, halfLineForStart, halfLineForEnd;
        Vector3 *currentPositionPtr;
        Vector3 *previousPositionPtr;

        if (data_ov006_0214097c[jumperIndex] == 0)
            continue;
        if (data_ov006_0214097c[jumperIndex]->IsActive() == 0)
            continue;
        jumpers = data_ov006_0214097c;

        currentPositionPtr = jumpers[jumperIndex]->GetPos();
        currentPos.x = currentPositionPtr->x;
        currentPos.y = currentPositionPtr->y;
        currentPos.z = currentPositionPtr->z;

        previousPositionPtr = jumpers[jumperIndex]->GetPrevPos();
        previousPos.x = previousPositionPtr->x;
        previousPos.y = previousPositionPtr->y;
        previousPos.z = previousPositionPtr->z;

        Vec3_Sub(&movementDelta, &currentPos, &previousPos);
        SubVec3(&currentPos, (Vector3 *)(line + 8), &currentPos);
        SubVec3(&previousPos, (Vector3 *)(line + 8), &previousPos);

        // Test the previous-to-current segment against the line in its own frame.
        currentAlong = DotVec3((Vector3 *)(line + 0x20), &currentPos);
        currentAcross = DotVec3((Vector3 *)(line + 0x14), &currentPos);
        previousAlong = DotVec3((Vector3 *)(line + 0x20), &previousPos);
        previousAcross = DotVec3((Vector3 *)(line + 0x14), &previousPos);
        DotVec3((Vector3 *)(line + 0x14), &movementDelta);
        DotVec3((Vector3 *)(line + 0x20), &movementDelta);

        currentProjection.y = currentAcross;
        previousProjection.x = previousAlong;
        currentProjection.x = currentAlong;
        previousProjection.y = previousAcross;

        lineStart.x = -(*(int *)(line + 0x58));
        lineStart.y = 0;
        lineEnd.x = *(int *)(line + 0x58);
        lineEnd.y = 0;

        Vec2_Sub((int *)&edgeDirection, (int *)&lineStart, (int *)&lineEnd);
        Vec2_Sub((int *)&firstOffset, (int *)&lineStart, (int *)&previousProjection);
        Vec2_Sub((int *)&secondOffset, (int *)&lineStart, (int *)&currentProjection);

        crossedLine = 0;
        previousSide = func_0203d524((int *)&edgeDirection, (int *)&firstOffset);
        currentSide = func_0203d524((int *)&edgeDirection, (int *)&secondOffset);
        previousSide = CLAMP(previousSide, -1, 1);
        currentSide = CLAMP(currentSide, -1, 1);

        if (previousSide * currentSide <= 0 && previousSide > currentSide) {
            struct V2 edge, e1, e2;
            int startSide, endSide;
            Vec2_Sub((int *)&edge, (int *)&previousProjection, (int *)&currentProjection);
            edgeDirection = edge;
            Vec2_Sub((int *)&e1, (int *)&previousProjection, (int *)&lineStart);
            firstOffset = e1;
            Vec2_Sub((int *)&e2, (int *)&previousProjection, (int *)&lineEnd);
            secondOffset = e2;

            startSide = func_0203d524((int *)&edgeDirection, (int *)&firstOffset);
            endSide = func_0203d524((int *)&edgeDirection, (int *)&secondOffset);
            startSide = CLAMP(startSide, -1, 1);
            endSide = CLAMP(endSide, -1, 1);
            if (startSide * endSide <= 0) crossedLine = 1;
        }

        if (crossedLine != 0) {
            int offsetTimesHalfLength, edgeRatio;
            *(int *)(line + 0x38) = currentPos.x;
            *(int *)(line + 0x3c) = currentPos.y;
            *(int *)(line + 0x40) = currentPos.z;
            *(int *)(line + 0x44) = movementDelta.x;
            *(int *)(line + 0x48) = movementDelta.y;
            *(int *)(line + 0x4c) = movementDelta.z;

            edgeRatio = _ZN4cstd4fdivEii((currentAlong < 0) ? -currentAlong : currentAlong,
                *(int *)(line + 0x58));
            {
                int halfLength = *(int *)(line + 0x58);
                int absoluteAlong = (currentAlong < 0) ? -currentAlong : currentAlong;
                offsetTimesHalfLength = (int)(((long long)absoluteAlong * halfLength + 0x800) >> 12);
            }

            if (offsetTimesHalfLength < 0x400000) {
                jumpers[jumperIndex]->contactState = 2;
                D3D_PlaySePannedLoop(0x1b1, *(int *)(line + 8),
                    (data_ov006_0213b310 * edgeRatio + data_ov006_0213b30c * (0x1000 - edgeRatio)) >> 12);
            } else {
                jumpers[jumperIndex]->contactState = 1;
                D3D_PlaySePannedLoop(0x1ae, *(int *)(line + 8),
                    (data_ov006_0213b308 * edgeRatio + data_ov006_0213b2f4 * (0x1000 - edgeRatio)) >> 12);
            }

            {
                int *normalComponents = (int *)&jumpers[jumperIndex]->lineNormal;
                normalComponents[0] = *(int *)(line + 0x14);
                normalComponents[1] = *(int *)(line + 0x18);
                normalComponents[2] = *(int *)(line + 0x1c);
                jumpers[jumperIndex]->alongLine = currentAlong;
                jumpers[jumperIndex]->lineHalfLength = *(int *)(line + 0x58);
                *(u16 *)(line + 0x320) = 0;
                TrmpLine_PointDistance(line, (void *)(line + 0x38), (Vector3 *)(line + 0x44));

                *(u16 *)(line + 0x324) -= 1;
                if (*(u16 *)(line + 0x324) == 0) {
                    *(u8 *)(line + 0x328) = 3;
                    TrmpLine_SetStateSettle(line);
                    return 1;
                }
                *(u16 *)(line + 0x326) += 1;
            }
        } else {
            Vec3_MulScalar(&halfLineForStart, (Vector3 *)(line + 0x20), *(int *)(line + 0x58));
            Vec3_Add(&fromStart, &currentPos, &halfLineForStart);
            Vec3_MulScalar(&halfLineForEnd, (Vector3 *)(line + 0x20), *(int *)(line + 0x58));
            Vec3_Sub(&fromEnd, &currentPos, &halfLineForEnd);

            if (fromStart.y < 0 && fromStart.y > -0x30000) {
                if (fromStart.x > -0x8000 && fromStart.x < 0) {
                    if (movementDelta.x > 0) {
                        jumpers[jumperIndex]->contactState = 3;
                    }
                }
            } else {
                if (fromEnd.y < 0 && fromEnd.y > -0x30000
                    && fromEnd.x > 0 && fromEnd.x < 0x8000 && movementDelta.x < 0) {
                    jumpers[jumperIndex]->contactState = 3;
                }
            }
        }
    } while (++jumperIndex < 5);
    return 0;
}
#pragma pop
}

namespace s020d01e0 {
/* The minigame's touch-drawn line becomes a strip of grid points, and the
 * routine then picks the object that line cuts closest.
 *
 *   THE FRAME. The ROM opens with `sub sp, sp, #0xd4`: fourteen scratch words
 *   of which thirteen are ever written, then thirteen twelve-byte objects of
 *   which twelve are ever written. sp+0x34 and sp+0xc8 are reserved and never
 *   touched. In C that frame is unreachable, because an unused local emits
 *   nothing and is given no home (six shapes were measured, among them a dead
 *   struct copy, a guarded dead store and an aliasing pointer). A type with a
 *   DECLARED destructor behaves differently: the frontend still reserves its
 *   stack slot even when the optimiser empties it. Vector3 declares one already,
 *   for the arrays the ROM destroys through __cxa_vec_cleanup. `spareVec` and
 *   `spare4` are those two reservations written down. Their original spelling is
 *   not recoverable from the bytes; an elided copy of a by-value return is the
 *   likely source.
 *
 *   THE SWAP TEST. Its two reads go through a per-site const cast (see
 *   notes/mwccarm-codegen.md 6bk). The ROM re-reads both halfwords from memory
 *   after writing them, and the cast is its own CSE class, so the stores above
 *   do not forward into it.
 *
 * `colWeight += 0x555` sits at the tail of the inner loop with the other two
 * induction steps. Placed between the two `cell->x` statements instead, which is
 * where the earlier drafts had it, the whole 0x340..0x3e4 window schedules one
 * slot early and 35 words differ. Nothing else moves that residue: 246 pragma
 * names at on and off, every declaration order and type name, the loop form, the
 * pointer form and the multiply operand order are all inert on it.
 */
extern "C" {
extern void Vec3_Add(Vector3* out, Vector3* a, Vector3* b);
extern void Vec3_MulScalar(Vector3* out, Vector3* in, int s);
extern void Vec3_Sub(Vector3* out, Vector3* a, Vector3* b);
extern void Vec3_MulScalarInPlace(int *v, int s);
extern void SubVec3(Vector3 *a, Vector3 *b, Vector3 *c);
extern Fix12i Vec3_Dist(const Vector3* a, const Vector3* b);
extern Fix12i DotVec3(const Vector3 *a, const Vector3 *b);
extern int _ZN4cstd4fdivEii(int a, int b);
extern void TrmpLine_PointDistance(void *a, void *b, void *c);
extern void TrmpLine_ComputeNormals(void *a);
extern void D3D_PlaySePannedLoop(int a0, int a1, int a2);
extern void TrmpLine_SetStateSettle(char *p);
extern void TrmpLine_SetStateFlex(char *p);

extern void *data_ov006_0214097c[];
extern s32 data_ov006_0213b2fc;
extern s32 data_ov006_0213b300;
extern s32 data_ov006_0213b2f8;
extern s32 data_ov006_0213b304;
}

struct Spare4 { s32 v; ~Spare4() {} };

// @symbol TrmpLine_Build
extern "C" void TrmpLine_Build(char *line, short *startPoint, short *endPoint)
{
    Spare4 spare4;
    Vector3 startPosition, endPosition;
    Vector3 selectedPosition, selectedVelocity;
    Vector3 relativePosition, velocity;
    Vector3 endpointSum, midpoint, lineSpan, directionCopy, zAxis, lineNormal;
    Vector3 spareVec;
    short swapX, swapY;
    Fix12i lineLength, rowStep;
    s32 row;
    s32 flag;
    Vector3 *cell, *mirror;
    void *selectedJumper;
    void *jumper;
    Vector3 *positionPtr, *velocityPtr;
    s32 selectedAcross, selectedAlong;
    s32 jumperIndex;
    s32 along, across, normalVelocity;
    s32 halfLength;
    s32 absoluteAlong, offsetTimesHalfLength, edgeRatio;

    *(s16 *)(line + 0x50) = startPoint[0];
    *(s16 *)(line + 0x52) = startPoint[1];
    *(s16 *)(line + 0x54) = endPoint[0];
    *(s16 *)(line + 0x56) = endPoint[1];

    // Keep the input coordinates above, then convert and order the endpoints.
    startPoint[0] = (s16)(startPoint[0] - 0x80);
    startPoint[1] = (s16)(0 - startPoint[1]);
    endPoint[0] = (s16)(endPoint[0] - 0x80);
    endPoint[1] = (s16)(0 - endPoint[1]);

    if (*(const s16 *)startPoint > *(const s16 *)endPoint) {
        swapX = startPoint[0];
        swapY = startPoint[1];
        startPoint[0] = endPoint[0];
        startPoint[1] = endPoint[1];
        endPoint[0] = swapX;
        endPoint[1] = swapY;
    }

    {
        s32 ax = ((s32)startPoint[0]) << 12;
        s32 ay = ((s32)startPoint[1]) << 12;
        startPosition.x = ax; startPosition.y = ay; startPosition.z = 0;
    }
    {
        s32 bx = ((s32)endPoint[0]) << 12;
        s32 by = ((s32)endPoint[1]) << 12;
        endPosition.x = bx; endPosition.y = by; endPosition.z = 0;
    }

    Vec3_Add(&endpointSum, &startPosition, &endPosition);
    Vec3_MulScalar(&midpoint, &endpointSum, 0x800);
    *(s32 *)(line + 0x8) = midpoint.x;
    *(s32 *)(line + 0xC) = midpoint.y;
    *(s32 *)(line + 0x10) = midpoint.z;

    Vec3_Sub(&lineSpan, &endPosition, &startPosition);
    *(s32 *)(line + 0x20) = lineSpan.x;
    *(s32 *)(line + 0x24) = lineSpan.y;
    *(s32 *)(line + 0x28) = lineSpan.z;

    func_0203ce80(&directionCopy, (Vector3 *)(line + 0x20));

    zAxis.x = 0;
    zAxis.y = 0;
    zAxis.z = 0x1000;
    func_0203cf00(&lineNormal, (Vector3 *)(line + 0x20), &zAxis);
    *(s32 *)(line + 0x14) = lineNormal.x;
    *(s32 *)(line + 0x18) = lineNormal.y;
    *(s32 *)(line + 0x1C) = lineNormal.z;

    if (*(s32 *)(line + 0x18) < 0) {
        *(s32 *)(line + 0x14) = 0 - *(s32 *)(line + 0x14);
        *(s32 *)(line + 0x18) = 0 - *(s32 *)(line + 0x18);
    }

    *(s32 *)(line + 0x38) = 0;
    *(s32 *)(line + 0x3C) = 0;
    *(s32 *)(line + 0x40) = 0;
    *(s32 *)(line + 0x44) = 0 - *(s32 *)(line + 0x14);
    *(s32 *)(line + 0x48) = 0 - *(s32 *)(line + 0x18);
    *(s32 *)(line + 0x4C) = 0 - *(s32 *)(line + 0x1C);
    Vec3_MulScalarInPlace((s32 *)(line + 0x44), 0x800);

    SubVec3(&startPosition, (Vector3 *)(line + 8), &startPosition);
    SubVec3(&endPosition, (Vector3 *)(line + 8), &endPosition);
    lineLength = Vec3_Dist(&startPosition, &endPosition);
    *(s32 *)(line + 0x58) = lineLength >> 1;
    rowStep = lineLength / 3;

    {
        s32 column;
        s32 rowFrac, colWeight, colFrac;
        s32 accum;
        s32 negRowFrac;
        s32 rowAbs, colAbs;
        s32 colW, invColWeight, rowW, cornerW, weightA, weightB, weightSq;

        row = 0;
        accum = 0;
        rowFrac = -0x180;
        cell = (Vector3 *)(line + 0x5C);
        mirror = (Vector3 *)(line + 0x11C);
        do {
            column = 0;
            negRowFrac = 0 - rowFrac;
            colFrac = -0x180;
            colWeight = 0;
            do {
                colAbs = (colFrac < 0) ? (0 - colFrac) : colFrac;
                colW = 0x1000 - (0x180 - colAbs);
                invColWeight = 0x1000 - colWeight;
                rowAbs = (rowFrac < 0) ? negRowFrac : rowFrac;
                rowW = 0x1000 - (0x180 - rowAbs);
                cornerW = (s32)(((s64)colW * rowW + 0x800) >> 12);
                flag = 0;
                weightA = (s32)(((s64)invColWeight * cornerW + 0x800) >> 12);
                weightSq = (s32)(((s64)cornerW * cornerW + 0x800) >> 12);
                weightB = (s32)(((s64)colWeight * cornerW + 0x800) >> 12);

                cell->x = (s32)(((s64)endPosition.x * weightB + 0x800) >> 12);
                cell->x += (s32)(((s64)startPosition.x * weightA + 0x800) >> 12);
                cell->y = (s32)(((s64)endPosition.y * weightB + 0x800) >> 12);
                cell->y += (s32)(((s64)startPosition.y * weightA + 0x800) >> 12);

                cell->z = accum - *(s32 *)(line + 0x58);
                cell->z = (s32)(((s64)cell->z * weightSq + 0x800) >> 12);

                mirror->x = cell->x;
                mirror->y = cell->y;
                mirror->z = cell->z;

                column++;
                colFrac += 0x100;
                colWeight += 0x555;
                cell++;
                mirror++;
            } while (column < 4);
            row++;
            accum += rowStep;
            rowFrac += 0x100;
        } while (row < 4);
    }

    *(s16 *)(line + 0x320) = (s16)flag;
    *(s16 *)(line + 0x322) = 0x1400;
    *(u8 *)(line + 0x329) = 0x1F;
    TrmpLine_PointDistance(line, line + 0x38, line + 0x44);
    TrmpLine_ComputeNormals(line);

    *(s32 *)(line + 0x2C) = 0x1000;
    *(s32 *)(line + 0x30) = 0x1000;
    *(s32 *)(line + 0x34) = 0x1000;

    // Select an active jumper within the span using the original signed tests.
    selectedJumper = 0;
    selectedAcross = 0;
    selectedAlong = 0;
    selectedPosition.x = 0;
    selectedPosition.y = 0;
    selectedPosition.z = 0;
    selectedVelocity.x = 0;
    selectedVelocity.y = 0;
    selectedVelocity.z = 0;

    jumperIndex = 0;
    do {
        jumper = data_ov006_0214097c[jumperIndex];
        if (jumper != 0) {
            if (((TrampolineObjectCallbacks *)jumper)->IsActive() != 0) {
                jumper = data_ov006_0214097c[jumperIndex];
                positionPtr = ((TrampolineObjectCallbacks *)jumper)->GetPos();
                relativePosition.x = positionPtr->x;
                relativePosition.y = positionPtr->y;
                relativePosition.z = positionPtr->z;
                jumper = data_ov006_0214097c[jumperIndex];
                velocityPtr = ((TrampolineObjectCallbacks *)jumper)->GetVelocity();
                velocity.x = velocityPtr->x;
                velocity.y = velocityPtr->y;
                velocity.z = velocityPtr->z;

                SubVec3(&relativePosition, (Vector3 *)(line + 8), &relativePosition);
                along = DotVec3((Vector3 *)(line + 0x20), &relativePosition);
                across = DotVec3((Vector3 *)(line + 0x14), &relativePosition);
                normalVelocity = DotVec3((Vector3 *)(line + 0x14), &velocity);
                DotVec3((Vector3 *)(line + 0x20), &velocity);

                if (normalVelocity < 0x100 && across <= selectedAcross && across > -0x24000) {
                    s32 halfLength = *(s32 *)(line + 0x58);
                    if (along > -halfLength && along < halfLength) {
                        selectedPosition = relativePosition;
                        selectedVelocity = velocity;
                        selectedJumper = data_ov006_0214097c[jumperIndex];
                        selectedAcross = across;
                        selectedAlong = along;
                    }
                }
            }
        }
        jumperIndex++;
    } while (jumperIndex < 5);

    if (selectedJumper != 0) {
        *(s32 *)(line + 0x38) = selectedPosition.x;
        *(s32 *)(line + 0x3C) = selectedPosition.y;
        *(s32 *)(line + 0x40) = selectedPosition.z;
        *(s32 *)(line + 0x44) = selectedVelocity.x;
        *(s32 *)(line + 0x48) = selectedVelocity.y;
        *(s32 *)(line + 0x4C) = selectedVelocity.z;

        absoluteAlong = (selectedAlong < 0) ? (0 - selectedAlong) : selectedAlong;
        edgeRatio = _ZN4cstd4fdivEii(absoluteAlong, *(s32 *)(line + 0x58));
        halfLength = *(s32 *)(line + 0x58);
        absoluteAlong = (selectedAlong < 0) ? (0 - selectedAlong) : selectedAlong;
        offsetTimesHalfLength = (s32)(((s64)absoluteAlong * halfLength + 0x800) >> 12);
        if (offsetTimesHalfLength < 0x400000) {
            *(s16 *)((char *)selectedJumper + 0x18) = 2;
            D3D_PlaySePannedLoop(0x1B1, *(s32 *)(line + 8),
                (s32)(data_ov006_0213b2fc * edgeRatio + data_ov006_0213b300 * (0x1000 - edgeRatio)) >> 0xC);
        } else {
            *(s16 *)((char *)selectedJumper + 0x18) = 1;
            D3D_PlaySePannedLoop(0x1AE, *(s32 *)(line + 8),
                (s32)(data_ov006_0213b2f8 * edgeRatio + data_ov006_0213b304 * (0x1000 - edgeRatio)) >> 0xC);
        }
        *(s32 *)((char *)selectedJumper + 0x4) = *(s32 *)(line + 0x14);
        *(s32 *)((char *)selectedJumper + 0x8) = *(s32 *)(line + 0x18);
        *(s32 *)((char *)selectedJumper + 0xC) = *(s32 *)(line + 0x1C);
        *(s32 *)((char *)selectedJumper + 0x10) = selectedAlong;
        *(s32 *)((char *)selectedJumper + 0x14) = *(s32 *)(line + 0x58);
        *(u8 *)(line + 0x328) = 3;
        TrmpLine_PointDistance(line, line + 0x38, line + 0x44);
        TrmpLine_SetStateSettle(line);
        return;
    }

    *(s16 *)(line + 0x31C) = 0x258;
    *(u8 *)(line + 0x328) = 1;
    TrmpLine_SetStateFlex(line);
}
}

namespace s020d09e0 {
struct V3 { int z, y, x; };
extern "C" extern void func_020553a4(void* p);
extern "C" extern void func_0203cd80(struct V3* out, int a, int b);
extern "C" extern void TrmpLine_Draw(char* p);
extern "C" {extern char data_0209b3ec[];}
extern "C" {extern char data_ov006_02140990[];}
// @symbol TrmpLine_DrawAll
extern "C" void TrmpLine_DrawAll(void) {
    struct V3 s;
    *(volatile int*)0x4000440 = 2;
    func_020553a4(data_0209b3ec);
    s.z = 0;
    s.y = 0;
    s.x = 0xfffff008;
    func_0203cd80(&s, -0x2000, 0xfffff008);
    *(volatile int*)0x40004c8 = (((short)s.z >> 3) & 0x3ff)
        | ((((short)s.y >> 3) & 0x3ff) << 10)
        | ((((short)s.x >> 3) & 0x3ff) << 20)
        | 0x40000000;
    *(volatile int*)0x40004cc = 0x40007fff;
    int i;
    char* p = data_ov006_02140990;
    for (i = 0; i < 4; i++) {
        if (*(unsigned char*)(p + 0x328) != 0) {
            TrmpLine_Draw(p);
        }
        p += 0x32c;
    }
}
}

namespace s020d0ac0 {
extern "C" {extern char data_ov006_02140990[];}
extern "C" extern void TrmpLine_Update(void *c);
// @symbol TrmpLine_UpdateAll
extern "C" void TrmpLine_UpdateAll(void) {
    int i = 0;
    char *p = data_ov006_02140990;
    do {
        if (*(unsigned char*)(p + 0x328) != 0)
            TrmpLine_Update(p);
        i++;
        p += 0x32c;
    } while (i < 4);
}
}

namespace s020d0b04 {
extern "C" {extern unsigned char data_ov006_02140990[];}

// @symbol TrmpLine_ClearAll
extern "C" void TrmpLine_ClearAll(void) {
    int i = 0;
    unsigned char *p = data_ov006_02140990;
    int r0 = i;
    do {
        i++;
        *(p + 0x328) = r0;
        p += 0x32c;
    } while (i < 3);
}
}

namespace s020d0b2c {
extern "C" {
extern unsigned int func_02045a50(const void *src, unsigned int size);
extern char data_ov006_0213b414[];
extern void *data_ov006_02140844;
extern char data_ov006_0213b3f4[];
extern void *data_ov006_02140814;
}
// @symbol TrmpLine_LoadTextures
extern "C" void TrmpLine_LoadTextures(void) {
  data_ov006_02140844 = (void *)Model::LoadTextureToVram(data_ov006_0213b414, 0x400);
  data_ov006_02140814 = (void *)func_02045a50(data_ov006_0213b3f4, 0x20);
}
}

namespace s020d0b78 {
extern "C" {extern short data_ov006_02141314[];}
extern "C" {extern short data_ov006_02141590[];}
extern "C" extern void TrmpLine_Build(short* g, short* a, short* b);
// @symbol TrmpLine_CreateStartLineT2
extern "C" void TrmpLine_CreateStartLineT2(void) {
    short a[2];
    short b[2];
    a[0] = 0x10;
    a[1] = 0xb0;
    b[0] = 0xf0;
    b[1] = 0xb0;
    TrmpLine_Build(data_ov006_02141314, a, b);
    data_ov006_02141590[0x54] = 3;
    data_ov006_02141590[0x55] = 0;
    data_ov006_02141590[0x51] = 3;
}
}

namespace s020d0bd8 {
extern "C" {extern short data_ov006_02141314[];}
extern "C" {extern short data_ov006_02141590[];}
extern "C" extern void TrmpLine_Build(short* g, short* a, short* b);
// @symbol TrmpLine_CreateStartLineT1
extern "C" void TrmpLine_CreateStartLineT1(void) {
    short a[2];
    short b[2];
    a[0] = 0x18;
    a[1] = 0xb0;
    b[0] = 0xe8;
    b[1] = 0xb0;
    TrmpLine_Build(data_ov006_02141314, a, b);
    data_ov006_02141590[0x54] = 3;
    data_ov006_02141590[0x55] = 0;
    data_ov006_02141590[0x51] = 3;
}
}

namespace s020d0c38 {
/*
 * Try to place a new line segment between two 16-bit points.
 * Rejects an X span shorter than 8, a zero direction, or a normalized
 * direction whose absolute X component is below 1401. When the full
 * vector is shorter than 0x30000, rescale the direction using a length
 * with Y weighted by 0xc00 (0.75), then rewrite the endpoints around
 * the midpoint. Then find the first free slot (state byte +0x328 == 0)
 * among the three, rejecting it if the
 * segment crosses any active (state 1) slot's own segment (+0x50/+0x54),
 * and initialises the slot through TrmpLine_Build, returning its
 * address (0 when none is free).
 *
 * Shape notes: the midpoint pair needs named x<<12 / y<<12 temps so the
 * y shift lands in place; the re-scale block reads direction[1] inline
 * at both the multiply and the two-word copy into scaledDirection
 * (a named copy of it takes r4 ahead of the umull low word).
 */
extern "C" extern void func_0203b958(s16* o, s16* a, s16* b);
extern "C" extern int func_0203d434(int* in);
extern "C" extern int Vec2_Len(int* v);
extern "C" extern int _ZN4cstd4fdivEii(int, int);
extern "C" extern void func_0203d630(int* p, int m);
extern "C" extern void func_0203d704(int* o, int* a, int* b);
extern "C" extern void Vec2_Sub(int* o, int* a, int* b);
extern "C" extern void TrmpLine_Build(s16* slot, s16* a, s16* b);

extern "C" {extern char data_ov006_02140990[];}
extern "C" {extern s16 data_ov006_02140cb4[];}
extern "C" {extern s16 data_ov006_02140cb6[];}
extern "C" {extern s16 data_ov006_02140cae[];}

// @symbol TrmpLine_Create
extern "C" int TrmpLine_Create(s16* startPoint, s16* endPoint) {
    s16 deltaPixels[2];
    int delta[2];
    int direction[2];
    int midpoint[2];
    int scaledDirection[2];
    int adjustedStart[2];
    int adjustedEnd[2];
    s16 testDirection[2];
    s16 firstOffset[2];
    s16 secondOffset[2];
    s16 otherDirection[2];
    s16 firstEndpointOffset[2];
    s16 secondEndpointOffset[2];
    s16 startCopy[2];
    s16 endCopy[2];
    s16 deltaX;
    s16 deltaY;
    int absoluteX;
    int slotIndex;
    int otherSlotIndex;
    char* candidateSlot;
    char* otherSlot;
    int firstCross;
    int secondCross;
    long long weightedYProduct;
    int weightedY;
    int scaledDirectionLength;
    int slotOffset;
    s16* newLine;

    func_0203b958(deltaPixels, startPoint, endPoint);

    deltaX = deltaPixels[0];
    if (deltaX < 0)
        absoluteX = (s16)(-deltaX);
    else
        absoluteX = deltaX;
    if (absoluteX < 8)
        return 0;

    deltaY = deltaPixels[1];
    delta[0] = (int)deltaX << 12;
    delta[1] = (int)deltaY << 12;
    direction[0] = ((int)deltaX >> 1) << 12;
    direction[1] = ((int)deltaY >> 1) << 12;

    {
        int ay = (s16)startPoint[1];
        int by = (s16)endPoint[1];
        int ax = (s16)startPoint[0];
        int bx = (s16)endPoint[0];
        int y = (ay + by) >> 1;
        int x = (ax + bx) >> 1;
        int x12 = x << 12;
        int y12 = y << 12;
        midpoint[0] = x12;
        midpoint[1] = y12;
    }

    if (func_0203d434(direction) == 0)
        return 0;

    {
        int absoluteDirectionX = direction[0];
        if (absoluteDirectionX < 0)
            absoluteDirectionX = -absoluteDirectionX;
        if (absoluteDirectionX < 1401)
            return 0;
    }

    if (Vec2_Len(delta) < 0x30000) {
        weightedYProduct = (long long)direction[1] * 0xc00 + 0x800;
        weightedY = (int)(weightedYProduct >> 12);
        scaledDirection[0] = direction[0];
        scaledDirection[1] = direction[1];
        scaledDirection[1] = weightedY;
        scaledDirectionLength = Vec2_Len(scaledDirection);
        func_0203d630(direction, _ZN4cstd4fdivEii(0x18000, scaledDirectionLength));

        func_0203d704(adjustedStart, midpoint, direction);
        Vec2_Sub(adjustedEnd, midpoint, direction);

        startPoint[0] = (s16)(adjustedStart[0] >> 12);
        startPoint[1] = (s16)(adjustedStart[1] >> 12);
        endPoint[0] = (s16)(adjustedEnd[0] >> 12);
        endPoint[1] = (s16)(adjustedEnd[1] >> 12);
    }

    candidateSlot = data_ov006_02140990;
    slotIndex = 0;
    do {
        if ((unsigned char)candidateSlot[0x328] == 0) {
            otherSlot = data_ov006_02140990;
            otherSlotIndex = 0;
            do {
                if (slotIndex != otherSlotIndex) {
                    if ((unsigned char)otherSlot[0x328] == 1) {
                        func_0203b958(testDirection, endPoint, startPoint);
                        func_0203b958(firstOffset, (s16*)(otherSlot + 0x50), startPoint);
                        func_0203b958(secondOffset, (s16*)(otherSlot + 0x54), startPoint);

                        {
                            s16 ax = testDirection[0];
                            s16 ay = testDirection[1];
                            s16 bx = firstOffset[0];
                            s16 by = firstOffset[1];
                            s16 cy = secondOffset[1];
                            firstCross = (int)ax * (int)by - (int)ay * (int)bx;
                            {
                                s16 cx = secondOffset[0];
                                secondCross = (int)ax * (int)cy - (int)ay * (int)cx;
                            }
                        }
                        if (firstCross * secondCross <= 0) {
                            func_0203b958(otherDirection, (s16*)(otherSlot + 0x54), (s16*)(otherSlot + 0x50));
                            testDirection[0] = otherDirection[0];
                            testDirection[1] = otherDirection[1];
                            func_0203b958(firstEndpointOffset, startPoint, (s16*)(otherSlot + 0x50));
                            firstOffset[0] = firstEndpointOffset[0];
                            firstOffset[1] = firstEndpointOffset[1];
                            func_0203b958(secondEndpointOffset, endPoint, (s16*)(otherSlot + 0x50));
                            secondOffset[0] = secondEndpointOffset[0];
                            secondOffset[1] = secondEndpointOffset[1];

                            {
                                s16 ax = testDirection[0];
                                s16 ay = testDirection[1];
                                s16 bx = firstOffset[0];
                                s16 by = firstOffset[1];
                                s16 cy = secondOffset[1];
                                firstCross = (int)ax * (int)by - (int)ay * (int)bx;
                                {
                                    s16 cx = secondOffset[0];
                                    secondCross = (int)ax * (int)cy - (int)ay * (int)cx;
                                }
                            }
                            if (firstCross * secondCross <= 0)
                                return 0;
                        }
                    }
                }
                otherSlotIndex++;
                otherSlot += 0x32c;
            } while (otherSlotIndex < 4);

            startCopy[0] = startPoint[0];
            startCopy[1] = startPoint[1];
            endCopy[0] = endPoint[0];
            endCopy[1] = endPoint[1];
            slotOffset = slotIndex * 0x32c;
            newLine = (s16*)((int)data_ov006_02140990 + slotOffset);
            TrmpLine_Build(newLine, startCopy, endCopy);
            *(s16*)((int)data_ov006_02140cb4 + slotOffset) = 1;
            *(s16*)((int)data_ov006_02140cb6 + slotOffset) = 0;
            *(s16*)((int)data_ov006_02140cae + slotOffset) = (s16)slotIndex;
            return (int)newLine;
        }
        slotIndex++;
        candidateSlot += 0x32c;
    } while (slotIndex < 3);

    return 0;
}
}

namespace s020d0fe4 {
extern "C" extern int __cxa_vec_cleanup(void *dest, int a, int size, void (*func)(void));
extern "C" {extern char data_ov006_02140990;}
extern "C" extern void TrmpLine_Destroy(void);  /* local extern: only the two Trampoline scene headers declare it; this unit includes neither */

// @symbol TrmpLine_CleanupAll
extern "C" void TrmpLine_CleanupAll(void)
{
    __cxa_vec_cleanup(&data_ov006_02140990, 4, 0x32c, TrmpLine_Destroy);
}
}

namespace s020d1008 {
// @symbol TrmpLine_Destroy
extern "C" void TrmpLine_Destroy(void)
{
}
}

namespace s020d100c {
// @symbol TrmpLine_Reset
extern "C" void TrmpLine_Reset(char *p)
{
    p[808] = 0;
}
}
