/* .data 0x02112aa4..0x02112b00 */
extern unsigned char daObjCtMecha10_c_classInit_CT_MECHA10[];
extern unsigned char daObjCtMecha10_c_classInit_CT_MECHA12L[];
extern unsigned char daObjCtMecha10_c_classInit_CT_MECHA12S[];
extern unsigned char _ZTI16daObjCtMecha10_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CT_MECHA10[1] = {
    (unsigned int)&daObjCtMecha10_c_classInit_CT_MECHA10
};

unsigned char data_ov035_02112aa8[24] = {
    119, 0, 242, 0, 2, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0
};

unsigned int g_profile_CT_MECHA12L[7] = {
    (unsigned int)&daObjCtMecha10_c_classInit_CT_MECHA12L, 0xf40079, 3, 0x60000, 0x250000, 0x1000000, 0
};

unsigned int g_profile_CT_MECHA12S[9] = {
    (unsigned int)&daObjCtMecha10_c_classInit_CT_MECHA12S, 0xf5007a, 3, 0x60000, 0x250000, 0x1000000, 0, 0,
    (unsigned int)&_ZTI16daObjCtMecha10_c
};
#pragma section forcedata end
#pragma pop
