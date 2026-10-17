extern void Crash(void);
extern void func_0205dc0c(int a, int b);
extern void func_02018c00(void *rgn, int b, int c);
extern int func_0203d7b8(void);
extern void func_02017fd0(void *rgn);

struct Rec { int a, b, c; };
struct CodeRegion { int w[10]; };   /* 0x28 */
extern struct Rec data_0209d3c4[];

void UnloadOverlay(int id)
{
    struct CodeRegion rgn;
    struct Rec *found = 0;
    unsigned int i;
    struct Rec *r = data_0209d3c4;
    for (i = 0; i < 0xc; i++, r++) {
        if (r->a == id) {
            r->a = -1;
            r->b = 0;
            found = r;
            r->c = 0;
        }
    }
    if (found == 0)
        Crash();
    func_0205dc0c(0, id);
    func_02018c00(&rgn, 0, id);
    if (func_0203d7b8() != 0)
        return;
    func_02017fd0(&rgn);
}

/* arm9-data-run 0x0208EE04 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTIN8dGraph_c10callback_cE[4] ;
#pragma pop
/* end arm9-data-run 0x0208EE04 */
