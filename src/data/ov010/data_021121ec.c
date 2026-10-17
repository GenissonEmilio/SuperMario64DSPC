/* .data 0x021121ec..0x021121f4 */
extern unsigned char data_ov010_021123d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021121ec[2] = {
    9, (unsigned int)&data_ov010_021123d8
};
#pragma section forcedata end
#pragma pop
