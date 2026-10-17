/* .data 0x021111dc..0x021111e8 */
extern unsigned char data_ov042_021111cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov042_021111dc[3] = {
    (unsigned int)&data_ov042_021111cc, 0, 0x114e0000
};
#pragma section forcedata end
#pragma pop
