#include "types.h"
extern int func_0203da9c(void);
extern void* _ZN3G2S12GetBG3ScrPtrEv(void);
extern void* _ZN3G2S12GetBG0ScrPtrEv(void);
extern unsigned LoadCompressedFileAt(u16 fileID, void *target);
extern void func_02020820(void *dst, void *src, int a, int b, int c, int d);
extern void MultiStore_Int(int val, void *dst, int len);
extern void func_02033390(int a);
extern void func_020331fc(int a, int b, int c);
extern void func_02020304(void);

extern u8 data_0209b2f0[];
extern int data_ov075_0211ca64;
extern int data_ov075_0211ca6c;
extern int data_ov075_0211ca74;
extern int data_ov075_0211cc44;
extern int data_ov075_0211cc4c;
extern int data_ov075_0211cc54;
extern int data_ov075_0211cc5c;
extern u8 data_0209d454;

void func_ov075_021188b4(char *c)
{
    int id;

    id = func_0203da9c();
    *(int *)(c + 0x264) = 0x258;
    *(int *)(c + 0x268) = 0;
    *(int *)(c + 0x26c) = 0;

    if (data_0209b2f0[id] != 0) {
        LoadCompressedFileAt(0x8404, _ZN3G2S12GetBG3ScrPtrEv());
        func_02020820(c + 0x1b4, &data_ov075_0211ca64, 1, 1, 1, 1);
        func_02020820(c + 0x1e0, &data_ov075_0211ca6c, 1, 0, 0, 0);
        func_02020820(c + 0x20c, &data_ov075_0211ca74, 1, 1, 1, 1);
    } else {
        LoadCompressedFileAt(0x8401, _ZN3G2S12GetBG3ScrPtrEv());
        func_02020820(c + 0x1b4, &data_ov075_0211cc44, 1, 1, 1, 1);
        func_02020820(c + 0x1e0, &data_ov075_0211cc4c, 1, 0, 0, 0);
        func_02020820(c + 0x20c, &data_ov075_0211cc54, 1, 0, 0, 0);
        func_02020820(c + 0x238, &data_ov075_0211cc5c, 1, 0, 0, 0);
    }

    c[0x1d6] = id + 0xa;
    c[0x202] = id + 0xa;

    {
        void *bg0 = _ZN3G2S12GetBG0ScrPtrEv();
        volatile int zero = 0;
        MultiStore_Int(zero, bg0, 0x800);
    }

    func_02033390(0);

    func_020331fc(0x40, 0x20, func_0203da9c() << 24 >> 24);

    data_0209d454 |= 1;

    func_02020304();

    *(int *)(c + 0x274) = 0;
}

/* .data 0x0211ca7c..0x0211cb64 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern int data_ov075_0211caac[6] ;
extern int data_ov075_0211ca94[6] ;
extern int data_ov075_0211ca7c[6] ;
int data_ov075_0211cae4[8] = {
    (int)0xc18040f0u, 0x0000e280, (int)0xc1c040f0u, 0x0000e288, (int)0xc00040f0u, 0x0000e290, (int)0xc04040f0u, (int)0xffffe298u,
};
int data_ov075_0211cb04[8] = {
    (int)0xc18040f0u, 0x0000e300, (int)0xc1c040f0u, 0x0000e308, (int)0xc00040f0u, 0x0000e310, (int)0xc04040f0u, (int)0xffffe318u,
};
int data_ov075_0211cac4[8] = {
    (int)0xc18040f0u, 0x0000e200, (int)0xc1c040f0u, 0x0000e208, (int)0xc00040f0u, 0x0000e210, (int)0xc04040f0u, (int)0xffffe218u,
};
int data_ov075_0211cb24[8] = {
    (int)0xc18040f0u, 0x0000e380, (int)0xc1c040f0u, 0x0000e388, (int)0xc00040f0u, 0x0000e390, (int)0xc04040f0u, (int)0xffffe398u,
};
int _ZTSN10dScEntry_c15graphCallback_cE[8] = {
    0x6430314e, 0x6e456353, 0x5f797274, 0x67353163, 0x68706172, 0x6c6c6143, 0x6b636162, 0x0045635f,
};
#pragma section forcedata end
