#include "types.h"

/* bss 0x02104bd4..0x02104bd8 */
int data_ov007_02104bd4;

extern int func_ov007_020c3df4(int a, int b);
extern int func_ov007_020cbbb0(int a, int b, int c, void *d);
extern int func_ov007_020cbf8c(void *src);
extern int func_ov007_020ca2a8(void *arg);
extern int func_ov007_020ca010(void *arg);
extern void func_ov007_020bf57c(char *arg0, int idx);
extern int func_ov007_020b42d8(int index);
extern void func_ov007_020beeb0(void);

int data_ov007_020d7cb0[6] = {
u8 data_ov007_020d7cf8[104] = {
u8 data_ov007_020d7c98[4] = {
extern int data_ov007_02104bd4;
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 10, 0, 0, 16, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 255, 127, 0, 0, 2, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 18, 0, 0, 192, 18, 0,
    0, 16, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 255, 127, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0
};

u8 data_ov007_020d7cc8[48] = {
    3, 0, 0, 0, 0, 16, 0, 0, 208, 7, 0, 0,
    208, 7, 0, 0, 0, 0, 5, 0, 0, 16, 0, 0,
    232, 3, 0, 0, 244, 1, 0, 0, 1, 0, 0, 0,
    1, 0, 0, 0, 136, 8, 170, 10, 0, 1, 0, 1
    0x1000, 0x9c4, 60, 0, 0x14000, 0
u8 data_ov007_020d7c9c[20] = {
    244, 1, 0, 0, 251, 255, 4, 0, 88, 255, 255, 255,
    88, 2, 32, 3, 100, 0, 0, 0
    0, 0, 0, 0
#pragma section forcerodata end
extern char *data_ov007_0210342c;

void func_ov007_020bf428(void)
{
    int i;
    u8 *w;
    u8 *bp;
    int ret;

    if (data_ov007_02104bd4 != 0)
        return;

    data_ov007_02104bd4 = func_ov007_020c3df4(0, 0x30);
    *(int *)data_ov007_02104bd4 = func_ov007_020cbbb0(0xf, 0xe, 0x6000, &data_ov007_020d7cb0);

    w = data_ov007_020d7cf8;
    bp = data_ov007_020d7c98;
    for (i = 0; i < 2; i++) {
        ret = func_ov007_020cbf8c(w);
        w += 0x34;
        ((int *)data_ov007_02104bd4 + i)[1] = ret;
        *(int *)(((int *)data_ov007_02104bd4 + i)[1]) = ((int *)data_ov007_0210342c + *bp)[0x1e];
        bp++;
    }

    *(int *)(data_ov007_02104bd4 + 0xc) = func_ov007_020ca2a8(data_ov007_020d7c9c);

    for (i = 0; i < 8; i++) {
        ((int *)data_ov007_02104bd4 + i)[4] = func_ov007_020ca010(data_ov007_020d7cc8);
        func_ov007_020bf57c(*(char **)(data_ov007_0210342c + 0x30), i);
    }

    for (i = 0; i <= 2; i++) {
        ((int *)data_ov007_0210342c + i)[0x5d] = func_ov007_020b42d8(i);
    }

    for (i = 0; i < 0x14; i++) {
        func_ov007_020beeb0();
    }
}
