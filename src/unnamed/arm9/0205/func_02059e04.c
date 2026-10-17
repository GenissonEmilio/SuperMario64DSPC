extern void Crash(void);
char data_020a645c[4];


void func_02059e04(int a, unsigned int v)
{
    if (((v & 0x7f00) << 8) >> 0x10 == 0x10)
    {
        *(short *)data_020a645c = 1;
        return;
    }
    Crash();
}
