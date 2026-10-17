unsigned char data_0209f290;
static unsigned char data_0209f290_pad[3];

/* bss 0x0209fc7c..0x0209fc80 */
#pragma force_active on
unsigned char data_0209fc7c[4];
#pragma force_active off

typedef int s32;

extern s32 GetOwnerLanguage(void);

s32 func_02030fa8(void)
{
    s32 lang = GetOwnerLanguage();
    switch (lang)
    {
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 5:
        return 4;
    default:
        return 0;
    }
}

extern unsigned char data_0209fc84;
