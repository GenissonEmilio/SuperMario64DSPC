signed char data_02092120[4] = {(signed char)0xff, 0, 0, 0};
extern unsigned char data_0209d4f8;
extern int data_0209d5b8[];
extern void *data_0209d518;


extern int func_02058158(int *p);
extern void _ZN6Memory10DeallocateEPv(void *p);

int func_0201a1bc(void)
{
    if (data_0209d4f8 == 0) return 1;
    if (func_02058158(data_0209d5b8) == 0) return 0;
    if (data_0209d518 != 0) {
        _ZN6Memory10DeallocateEPv(data_0209d518);
        data_0209d518 = 0;
    }
    data_0209d4f8 = 0;
    return 1;
}
