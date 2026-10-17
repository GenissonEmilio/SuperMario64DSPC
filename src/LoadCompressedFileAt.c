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
extern unsigned int data_0208f278[9] ;
extern unsigned int data_0208f29c[13] ;
extern unsigned int data_0208f2d0[13] ;
#pragma pop
/* end arm9-data-run 0x0208F278 */
