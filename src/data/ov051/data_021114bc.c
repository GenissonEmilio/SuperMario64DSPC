/* .data 0x021114bc..0x021114c4 */
extern unsigned char data_ov051_02111550[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_021114bc[2] = {
    7, (unsigned int)&data_ov051_02111550
};
#pragma section forcedata end
#pragma pop
