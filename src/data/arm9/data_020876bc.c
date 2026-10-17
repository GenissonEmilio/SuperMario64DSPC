/* .data 0x020876bc..0x020876c4 */
extern unsigned char data_02087798[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020876bc[2] = {
    6, (unsigned int)&data_02087798
};
#pragma section forcedata end
#pragma pop
