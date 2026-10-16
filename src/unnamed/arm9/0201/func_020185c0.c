struct P {
    int a;
    int b;
};

struct Entry {
    char *f0;
    int f4;
    unsigned short f8;
    unsigned short fa;
    int fc;
    int f10;
};

extern void FS_InitFile(int *s);
extern void func_02018598(struct P *c, unsigned int arg);
extern int func_02018dc4(int a, struct P v);
extern int LoadArchive(int idx);
extern void Crash(void);
extern int func_0204eda4(int r0, char *a, unsigned int idx);

struct Entry data_0208ecf4[13] = {
    { (char *)0x00000000, 0x0, 0x8000, 0x80c6, 0x208eb5c, 0x208ecb0 },
    { (char *)0x00000000, 0x0, 0x8400, 0x8427, 0x208eb74, 0x208ebd4 },
    { (char *)0x00000000, 0x0, 0x8800, 0x8805, 0x208eb70, 0x208ebfc },
    { (char *)0x00000000, 0x0, 0x8c00, 0x8c05, 0x208eb58, 0x208ec10 },
    { (char *)0x00000000, 0x0, 0x9000, 0x9005, 0x208eb78, 0x208ec38 },
    { (char *)0x00000000, 0x0, 0x9400, 0x9405, 0x208eb84, 0x208ec9c },
    { (char *)0x00000000, 0x0, 0x9800, 0x9810, 0x208eb60, 0x208ec88 },
    { (char *)0x00000000, 0x0, 0x9c00, 0x9c11, 0x208eb7c, 0x208ebac },
    { (char *)0x00000000, 0x0, 0xa000, 0xa010, 0x208eb68, 0x208ebe8 },
    { (char *)0x00000000, 0x0, 0xa400, 0xa410, 0x208eb64, 0x208ec24 },
    { (char *)0x00000000, 0x0, 0xa800, 0xa810, 0x208eb88, 0x208ec60 },
    { (char *)0x00000000, 0x0, 0xac00, 0xac10, 0x208eb80, 0x208ebc0 },
    { (char *)0x00000000, 0x0, 0xb000, 0xb010, 0x208eb6c, 0x208ec4c }
};
extern unsigned char data_0208eb54[];

int func_020185c0(int a0, unsigned int a1)
{
    int result = 0;

    FS_InitFile((int *)a0);

    if (a1 < 0x8000) {
        struct P arg;
        struct P v;
        func_02018598(&v, a1);
        arg.a = v.a;
        arg.b = v.b;
        result = func_02018dc4(a0, arg);
    } else {
        unsigned int i = 0;
        struct Entry *e = data_0208ecf4;
        do {
            if (e->f8 <= a1 && a1 < e->fa) {
                if (e->f0 == 0) {
                    if (LoadArchive(i) != 0)
                        data_0208eb54[0] = (unsigned char)i;
                    if (e->f0 == 0) {
                        Crash();
                        return 0;
                    }
                }
                result = func_0204eda4(a0, e->f0, a1 - e->f8);
                break;
            }
            i++;
            e++;
        } while (i < 0xd);
    }

    if (result == 0)
        Crash();
    return result;
}
