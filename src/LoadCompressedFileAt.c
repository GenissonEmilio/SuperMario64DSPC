#include "types.h"
extern void *func_0201817c(u16 fileID);
extern u32 func_02018ac4(void *buffer);
extern void DecompressLZ16(void *source, void *dest);
extern void Deallocate(void *ptr);

u32 LoadCompressedFileAt(u16 fileID, void *target)
{
    void *src;
    u32 size;

    src = func_0201817c(fileID);
    if (!src)
        return 0;

    size = func_02018ac4(src);
    DecompressLZ16(src, target);
    Deallocate(src);
    return size;
}

/* arm9-data-run 0x0208F278 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_0208f278[9] = {
    0x00750053, 0x00650070, 0x00200072, 0x0061004D, 0x00690072, 0x0020006F, 0x00340036, 0x00440020,
    0x00000053,
};
unsigned int data_0208f29c[13] = {
    0x7461642F, 0x44322F61, 0x6461635F, 0x325F642F, 0x414D5F64, 0x364F4952, 0x5F534434, 0x5F4C5049,
    0x6E776F64, 0x64616F6C, 0x67636E5F, 0x6E69622E, 0x00000000,
};
unsigned int data_0208f2d0[13] = {
    0x7461642F, 0x44322F61, 0x6461635F, 0x325F642F, 0x414D5F64, 0x364F4952, 0x5F534434, 0x5F4C5049,
    0x6E776F64, 0x64616F6C, 0x6C636E5F, 0x6E69622E, 0x00000000,
};
#pragma pop
/* end arm9-data-run 0x0208F278 */
