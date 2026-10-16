typedef struct { unsigned char b[3]; } B3;
extern B3 data_02099f80;

int func_020457f0(int v, int idx, int shift, int flag, int *tbl)
{
    B3 buf;
    int rem;
    int hi;
    int lo;
    int frac;
    int aligned;
    int base;
    int t;

    if (flag == 0)
        return tbl[0];

    if (shift == 0)
        return tbl[idx];

    base = ((v - 1) >> shift) << shift;
    t = idx >> shift;

    if (idx >= base)
        return tbl[t + (idx - base)];

    lo = tbl[t];
    hi = tbl[t + 1];
    aligned = t << shift;
    aligned = flag ? aligned : aligned;
    buf = data_02099f80;

    frac = buf.b[shift];
    rem = idx - aligned;
    frac = frac - rem;

    if (rem != 0)
        return (lo * frac + hi * rem) >> shift;

    return lo;
}

/* arm9-data-run 0x0209A08C data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_0209a08c[5] = {
    0x0075006D, 0x0074006C, 0x00620069, 0x006F006F, 0x00000074,
};
#pragma pop
/* end arm9-data-run 0x0209A08C */
