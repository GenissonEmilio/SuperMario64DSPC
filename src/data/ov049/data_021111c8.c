/* .data 0x021111c8..0x021111d0 */
extern unsigned char data_ov049_021111e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov049_021111c8[2] = {
    3, (unsigned int)&data_ov049_021111e4
};
#pragma section forcedata end
#pragma pop
