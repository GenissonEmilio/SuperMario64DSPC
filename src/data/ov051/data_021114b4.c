/* .data 0x021114b4..0x021114bc */
extern unsigned char data_ov051_02111528[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_021114b4[2] = {
    5, (unsigned int)&data_ov051_02111528
};
#pragma section forcedata end
#pragma pop
