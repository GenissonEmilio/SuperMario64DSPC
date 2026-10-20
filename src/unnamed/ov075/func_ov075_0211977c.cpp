//cpp
#include "dScEntry_c.h"

extern dScEntry_c::StepSet data_ov075_0211d780;

extern "C" {
extern int func_0203da3c(void);
extern void Deallocate(void *ptr);
extern void LoadTextNarcs(void);
extern void LoadArchive(int);
extern void *data_0209b2e8;
void func_ov075_0211977c(char *c) {
    int r = func_0203da3c();
    if (r != 0)
        return;
    Deallocate(data_0209b2e8);
    data_0209b2e8 = 0;
    LoadTextNarcs();
    LoadArchive(0);
    LoadArchive(1);
    reinterpret_cast<dScEntry_c *>(c)->SetSteps(&data_ov075_0211d780);
}
}
