extern int func_0203da9c(void);
extern int func_0203d950(int i);
extern int func_0203d890(void);
extern void func_02020214(unsigned int flags);

extern unsigned char data_0208f274;
extern unsigned char data_0209fc5c[];
extern char data_0209fc64[];
extern unsigned char data_0209fc50;
extern int data_0209fc68;

void func_02030ca0(void) {
    int count;
    int i;
    signed char cnt;
    int k;
    unsigned char mask;

    func_0203da9c();
    count = data_0208f274;
    for (i = 0; i < count; i++) {
        if (func_0203d950(i))
            data_0209fc5c[i] = 1;
        else
            data_0209fc5c[1] = 0;
    }

    cnt = 0;
    mask = 0;
    for (k = 0; k < 4; k++) {
        if (data_0209fc5c[k] != 0) {
            data_0209fc64[k] = cnt;
            cnt = cnt + 1;
            mask |= (1 << k);
        } else {
            data_0209fc64[k] = -1;
        }
    }

    data_0209fc50 = cnt;
    if (data_0209fc50 != func_0203d890())
        return;
    if (data_0209fc68 != 0)
        data_0209fc68 = 4;
    func_02020214(mask);
}

/* arm9-data-run 0x02097FD4 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_02097fd4[144] = {
    0x00080010, 0xF010003F, 0xF001F001, 0xF001F001, 0xFF01F001, 0x01F001F0, 0x01F001F0, 0x01F001F0,
    0x01F001F0, 0xF001F0FF, 0xF001F001, 0xF001F001, 0xD001F001, 0x10C00001, 0x10C210C1, 0xC40010C3,
    0xC610C510, 0x0010C710, 0x10C910C8, 0x10CB10CA, 0xCD10CC01, 0xCF10CE10, 0xC08031F0, 0xE110E001,
    0xE310E210, 0x10E41000, 0x10E610E5, 0xE81000E7, 0xEA10E910, 0x1000EB10, 0x10ED10EC, 0xFCEF10EE,
    0x01F031F0, 0x01F001F0, 0x014001F0, 0x15001014, 0x17101610, 0x00101810, 0x101A1019, 0x101C101B,
    0x1E101D00, 0x40101F10, 0x10410010, 0x10431042, 0x45601044, 0x018035F0, 0x10351034, 0x37100036,
    0x39103810, 0x10003A10, 0x103C103B, 0x003E103D, 0x60103F10, 0x62106110, 0x10631003, 0xF0651064,
    0x00018035, 0x10471046, 0x10491048, 0x4B104A00, 0x4D104C10, 0xF04E7010, 0x8001F023, 0x67106601,
    0x10680010, 0x106A1069, 0x6C07106B, 0x6E106D10, 0x01F023F0, 0x4F000180, 0x51105010, 0x00105210,
    0x10541053, 0x10561055, 0x58105700, 0x5A105910, 0x105B0010, 0x105D105C, 0x5F18105E, 0x35F08010,
    0x106F0180, 0x71100070, 0x73107210, 0x10007410, 0x10761075, 0x00781077, 0x7A107910, 0x7C107B10,
    0x107D1000, 0x107F107E, 0x35F0C0A0, 0x10810180, 0x10831082, 0x85108400, 0x87108610, 0x10880010,
    0x108A1089, 0x8C00108B, 0x8E108D10, 0x00108F10, 0x10911090, 0x10931092, 0x39F09460, 0x10A10140,
    0x00A310A2, 0xA510A410, 0xA710A610, 0x10A81000, 0x10AA10A9, 0xAC1000AB, 0xAE10AD10, 0x1000AF10,
    0x10B110B0, 0x3FB310B2, 0x39F0B410, 0x01F001F0, 0x01F001F0, 0xF0FF01F0, 0xF001F001, 0xF001F001,
    0xF001F001, 0xFF01F001, 0x01F001F0, 0x01F001F0, 0x01F001F0, 0x01F001F0, 0xF001F0F7, 0x9001F001,
    0x01F00001, 0x01F001F0, 0xF001F0FF, 0xF001F001, 0xF001F001, 0xF001F001, 0x01F0FF01, 0x01F001F0,
    0x01F001F0, 0x01F001F0, 0xF0FF01F0, 0xF001F001, 0xF001F001, 0xF001F001, 0xC001F001, 0x013001F0,
};
#pragma pop
/* end arm9-data-run 0x02097FD4 */
