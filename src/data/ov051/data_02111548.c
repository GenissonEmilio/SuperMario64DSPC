/* .data 0x02111548..0x0211155c */
extern unsigned char data_ov051_02111798[];
extern unsigned char data_ov051_021114f4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_02111548[2] = {
    0x1245, (unsigned int)&data_ov051_02111798
};

unsigned int data_ov051_02111550[3] = {
    0x402, (unsigned int)&data_ov051_021114f4, 259
};
#pragma section forcedata end
#pragma pop
