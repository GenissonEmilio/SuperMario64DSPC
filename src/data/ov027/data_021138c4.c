/* .data 0x021138c4..0x021138f0 */
extern unsigned char _ZTI12dEnemyBase_c[];
extern unsigned char daIDonketu_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov027_021138c4[1] = {
    (unsigned int)&_ZTI12dEnemyBase_c
};

unsigned char _ZTS12daIDonketu_c[16] = {
    49, 50, 100, 97, 73, 68, 111, 110, 107, 101, 116, 117,
    95, 99, 0, 0
};

unsigned int g_profile_ICE_DONKETU[6] = {
    (unsigned int)&daIDonketu_c_classInit, 0x3d00d9, 0x10000006, 0x64000, 0x64000, 0x1000000
};
#pragma section forcedata end
#pragma pop
