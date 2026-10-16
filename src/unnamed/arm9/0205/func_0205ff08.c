
/* bss 0x020a8074..0x020a80c4 */
#pragma force_active on
unsigned char data_020a8074[80];
#pragma force_active off

extern int data_020a8114;
void func_0205ff08(void)
{
    int *p = &data_020a8114;
    while (*(volatile int *)p != 0) {
    }
}
