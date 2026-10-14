/* func_0201a2f8 at 0x0201a2f8
 *
 * Run overlay 0 during boot before loading the resident overlay 1.
 */
extern void func_0201fec8(void);
extern void func_02018aa4(void);
extern void func_020134c8(void);
extern int GetSoundMode(void);
extern void SetSoundMode(int mode);
extern int func_0205d94c(int a, int b);
extern void* _ZN6Memory8AllocateEj(unsigned int);
extern void LoadOverlay(int id);
extern void func_ov000_020aa420(void);
extern void UnloadOverlay(int id);
extern void* func_0205d23c(void* p, int n);
extern void func_0205c91c(void);
extern void _ZN6Memory10DeallocateEPv(void*);
extern void _ZN5Sound19LoadGroupAndSetBankEii(int a, int b);
extern void _ZN5Sound16LoadInitialGroupEi(int group);
extern void LoadFont(int id);

extern int OVERLAY_0_ID;
extern int OVERLAY_1_ID;
extern int data_0208ee5c;

void func_0201a2f8(void) {
    int cond = (*(unsigned short*)0x27ffc40 == 2);
    void* ptr;
    if (cond) {
        func_0201fec8();
        func_02018aa4();
        func_020134c8();
        SetSoundMode(GetSoundMode());
    }
    ptr = 0;
    if (!cond) {
        int size = func_0205d94c(0, 0);
        ptr = _ZN6Memory8AllocateEj(size);
        func_0205d94c((int)ptr, size);
    }
    LoadOverlay((int)&OVERLAY_0_ID);
    /* Overlay 1 reuses this address, but is not loaded until below. */
    func_ov000_020aa420();
    UnloadOverlay((int)&OVERLAY_0_ID);
    if (ptr != 0) {
        func_0205d23c(&data_0208ee5c, 3);
        func_0205c91c();
        _ZN6Memory10DeallocateEPv(ptr);
    }
    LoadOverlay((int)&OVERLAY_1_ID);
    if (cond) {
        _ZN5Sound19LoadGroupAndSetBankEii(0x2f, 0x36);
    } else {
        _ZN5Sound16LoadInitialGroupEi(0);
    }
    if (cond) return;
    LoadFont(0);
}