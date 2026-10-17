/* .data 0x021111d8..0x021111e4 */
extern unsigned char data_ov049_021111c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov049_021111d8[3] = {
    (unsigned int)&data_ov049_021111c0, 0, 255
};
#pragma section forcedata end
#pragma pop
