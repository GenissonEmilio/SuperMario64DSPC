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
unsigned int _ZTIN5mHeap6Heap_tE[2] = {
    0x0209A774, 0x02099D04,
};
unsigned int _ZTIN5mHeap11SolidHeap_tE[3] = {
    0x0209A764, 0x02099D28, 0x02099CE4,
};
unsigned int _ZTIN5mHeap9ExpHeap_tE[3] = {
    0x0209A764, 0x02099D14, 0x02099CE4,
};
unsigned int _ZTSN5mHeap6Heap_tE[4] = {
    0x486D354E, 0x36706165, 0x70616548, 0x0045745F,
};
unsigned int _ZTSN5mHeap9ExpHeap_tE[5] = {
    0x486D354E, 0x39706165, 0x48707845, 0x5F706165, 0x00004574,
};
#pragma pop
/* end arm9-data-run 0x02099CE4 */
