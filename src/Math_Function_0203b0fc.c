#include "nitro/fx/fx.h"
void Math_Function_0203b0fc(int *p, int target, int scale, int max)
{
    int delta;
    int d;
    if (*p == target) return;
    d = target - *p;
    delta = FX_MUL(d, scale);
    if (delta > max) {
        delta = max;
    } else if (delta < -max) {
        delta = -max;
    }
    *p += delta;
}

/* arm9-data-run 0x02099CE4 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTIN5mHeap6Heap_tE[2] ;
extern unsigned int _ZTIN5mHeap11SolidHeap_tE[3] ;
extern unsigned int _ZTIN5mHeap9ExpHeap_tE[3] ;
extern unsigned int _ZTSN5mHeap6Heap_tE[4] ;
extern unsigned int _ZTSN5mHeap9ExpHeap_tE[5] ;
#pragma pop
/* end arm9-data-run 0x02099CE4 */
