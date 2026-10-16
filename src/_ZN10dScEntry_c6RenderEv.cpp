//cpp
// @symbol _ZN10dScEntry_c6RenderEv
/* The render callback at +0x64 belongs to this scene. The local view keeps
 * the surrounding unreconstructed storage opaque; the receiver is dScEntry_c. */
#include "decl_common.h"
#include "dScEntry_c.h"

typedef void (dScEntry_c::*EntryRenderCallback)();
struct EntryRenderState {
    char pad[0x64];
    EntryRenderCallback callback[1];
};

s32 dScEntry_c::Render()
{
    EntryRenderState *state = (EntryRenderState *)this;
    if (*(int *)&state->callback[0] != 0) {
        EntryRenderCallback *callback = state->callback;
        (this->**callback)();
    }
    func_0203083c();
    return 1;
}
