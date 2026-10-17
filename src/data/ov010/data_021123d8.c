/* .data 0x021123d8..0x021123e4 */
extern unsigned char data_ov010_02112864[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021123d8[3] = {
    0x2602, (unsigned int)&data_ov010_02112864, 771
};
#pragma section forcedata end
#pragma pop
