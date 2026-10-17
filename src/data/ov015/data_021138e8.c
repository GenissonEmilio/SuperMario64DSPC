/* .data 0x021138e8..0x02113934 */
extern unsigned char data_ov015_02113d58[];
extern unsigned char data_ov015_02113aa8[];
extern unsigned char data_ov015_02113674[];
extern unsigned char data_ov015_02113480[];
extern unsigned char data_ov015_02113694[];
extern unsigned char data_ov015_021134b0[];
extern unsigned char data_ov015_021137a4[];
extern unsigned char data_ov015_021134d0[];
extern unsigned char data_ov015_02113844[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_021138e8[2] = {
    0x5c00, (unsigned int)&data_ov015_02113d58
};

unsigned int data_ov015_021138f0[3] = {
    0x5605, (unsigned int)&data_ov015_02113aa8, 544
};

unsigned int data_ov015_021138fc[14] = {
    (unsigned int)&data_ov015_02113674, 549, (unsigned int)&data_ov015_02113480, 576, (unsigned int)&data_ov015_02113694, 581, (unsigned int)&data_ov015_021134b0, 864,
    (unsigned int)&data_ov015_021137a4, 613, (unsigned int)&data_ov015_021134d0, 0x480, (unsigned int)&data_ov015_02113844, 645
};
#pragma section forcedata end
#pragma pop
