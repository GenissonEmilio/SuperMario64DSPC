extern short data_02082214[];

void func_0203ccd4(int *m, short angle)
{
    unsigned int i = (unsigned short)angle >> 4;
    short s = data_02082214[i * 2];
    short c = data_02082214[i * 2 + 1];
    int x = m[0];
    int z = m[2];
    int nx = (int)((((long long)c * x) + 0x800) >> 12) + (int)((((long long)s * z) + 0x800) >> 12);
    int nz = (int)((((long long)c * z) + 0x800) >> 12) - (int)((((long long)s * x) + 0x800) >> 12);
    m[0] = nx;
    m[2] = nz;
}

/* arm9-data-run 0x02099F28 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_02099f38[2] = {
    0x454C4544, 0x00004554,
};
unsigned int data_02099f30[2] = {
    0x4C4C554E, 0x00000000,
};
unsigned int data_02099f28[2] = {
    0x57415244, 0x00000000,
};
unsigned int data_02099f40[2] = {
    0x41455243, 0x00004554,
};
#pragma pop
/* end arm9-data-run 0x02099F28 */
