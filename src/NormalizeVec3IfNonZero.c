typedef struct Vector3 { int x, y, z; } Vector3;

extern void func_0203ce80(Vector3 *dst, Vector3 *src);

int NormalizeVec3IfNonZero(Vector3 *v)
{
    Vector3 tmp;
    if (v->x == 0 && v->y == 0 && v->z == 0)
        return 0;
    func_0203ce80(&tmp, v);
    return 1;
}

/* arm9-data-run 0x02099F78 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_02099f78[2] = {
    0x4E4E4F43, 0x00544345,
};
#pragma pop
/* end arm9-data-run 0x02099F78 */
