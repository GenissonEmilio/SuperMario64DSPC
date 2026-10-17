/* .data 0x02111548..0x0211155c */
extern unsigned char data_ov031_02111668[];
extern unsigned char data_ov031_02111758[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov031_02111548[4] = {
    255, 17, 0, 0
};

unsigned int data_ov031_0211154c[4] = {
    0xf00, (unsigned int)&data_ov031_02111668, 0x3205, (unsigned int)&data_ov031_02111758
};
#pragma section forcedata end
#pragma pop
