//cpp
// @symbol _ZN7dBgW_Kc8LoadFileER13SharedFilePtr
#include "dBgW_Kc.h"
#include "SharedFilePtr.h"

// Field prefix read by SharedFilePtr::LoadFile; the shared API keeps its
// storage opaque. This view does not change that shared declaration.
struct SharedFileView {
    u16 fileID;      /* 0x00 */
    u8 numRefs;      /* 0x02 */
    char pad;        /* 0x03 */
    char *filePtr;   /* 0x04 */
};

char *dBgW_Kc::LoadFile(SharedFilePtr &ptr)
{
    u8 refs;
    char *file;

    ptr.LoadFile();
    SharedFileView &state = *(SharedFileView *)&ptr;
    refs = state.numRefs;
    file = state.filePtr;
    if (refs == 1 && file != 0) {
        UpdateFileOffsets(*(KCL_File *)file);
    }
    return file;
}
