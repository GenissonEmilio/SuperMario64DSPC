//cpp
// @symbol _ZN10dScStage_c14GraphCallback2Ev
#include "G2x.h"
#include "types.h"
#include "nitro/hw/registers.h"
#include "dScStage_c.h"

// SetBGyAffine consumes four 20.12 matrix entries.
struct Matrix2x2 {
    int m[4];
};

// Partial view of the graph callback object, not the playable scene.
struct StageGraphCallbackView {
    void *vtable;
    Matrix2x2 matrix;
    s32 originX;
    s32 originY;
    s32 targetX;
    s32 targetY;
};

// The existing symbol retains its legacy dScStage_c scope. Dispatchers pass
// the graph callback object as this; its matrix starts at +4.
s32 dScStage_c::GraphCallback2()
{
    StageGraphCallbackView *callback = (StageGraphCallbackView *)this;
    G2x::SetBGyAffine((volatile unsigned short *)REG_DB_BG3PA, &callback->matrix, callback->originX,
                      callback->originY, callback->targetX, callback->targetY);
    return 1;
}
