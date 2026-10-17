unsigned int data_0209f4f8[3][16];
extern unsigned char data_0209fcc8;

void func_02035394(unsigned char *dst, unsigned char *src)
{
    *(unsigned char *)(dst + 4) = *(unsigned char *)(src + 4);
    *(int *)(dst + 8) = *(int *)(src + 8);
    *(int *)(dst + 0xc) = *(int *)(src + 0xc);
}
