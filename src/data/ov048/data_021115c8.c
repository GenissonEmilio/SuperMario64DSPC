/* .data 0x021115c8..0x021115d4 */
extern unsigned char data_ov048_021115b4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_021115c8[3] = {
    (unsigned int)&data_ov048_021115b4, 0, 0x3200000
};
#pragma section forcedata end
#pragma pop
