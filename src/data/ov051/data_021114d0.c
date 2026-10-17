/* .data 0x021114d0..0x021114dc */
extern unsigned char data_ov051_021114b4[];
extern unsigned char data_ov051_021114dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_021114d0[3] = {
    (unsigned int)&data_ov051_021114b4, (unsigned int)&data_ov051_021114dc, 0x1f400000
};
#pragma section forcedata end
#pragma pop
