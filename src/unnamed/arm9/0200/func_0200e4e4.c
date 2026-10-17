unsigned int data_0208733c[20] = {
    0x00000000, 0x07ffffff, 0x00000400, 0x00000400, 0x00094780, 0x00090000, 0x00000000, 0x00160000, 0x00180000, 0x0012105b, 0xf8000000, 0xf8000000, 0x00000000, 0x00000000, 0x000a0000, 0x00000000, 0x07ffffff, 0x00100000, 0x00120000, 0x0061105b
};extern unsigned char data_0209f218;

typedef unsigned int u32;
typedef int s32;

typedef struct { int x, y, z; } Vector3;
typedef struct { short x, y, z; } Vector3_16;

struct dActor_c {
    u32 vtable;     /* 0x0 */
    u32 uniqueID;   /* 0x4 */
};

typedef struct dActor_c dActor_c;

extern dActor_c* _ZN8dActor_c5SpawnEjjRK7Vector3PK10Vector3_16as(u32 actorID, u32 param1, const Vector3* pos, const Vector3_16* rot, s32 areaID, s32 deathTableID);

extern u32 data_0209b2a4[0x10]; /* 0x0209b2a4 */

dActor_c* func_0200e4e4(u32 param1)
{
    u32* slot = data_0209b2a4;
    s32 i = 0;
    for (;;) {
        if (*slot == 0) {
            dActor_c* a = _ZN8dActor_c5SpawnEjjRK7Vector3PK10Vector3_16as(0x160, param1, 0, 0, -1, -1);
            if (a)
                *slot = a->uniqueID;
            return a;
        }
        i++;
        slot++;
        if (i >= 0x10)
            break;
    }
    return 0;
}