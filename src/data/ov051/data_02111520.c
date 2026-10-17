/* .data 0x02111520..0x0211153c */
extern unsigned char data_ov051_02111600[];
extern unsigned char data_ov051_02111828[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov051_02111520[8] = {
    1, 0, 64, 6, 31, 0, 0, 0
};

unsigned int data_ov051_02111528[5] = {
    0x500, (unsigned int)&data_ov051_02111600, 0xa20, (unsigned int)&data_ov051_02111828, 0xf25
};
#pragma section forcedata end
#pragma pop
