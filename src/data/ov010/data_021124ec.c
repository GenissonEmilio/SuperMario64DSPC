/* .data 0x021124ec..0x021124f8 */
extern unsigned char data_ov010_021121dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021124ec[3] = {
    0x1900200, (unsigned int)&data_ov010_021121dc, 0
};
#pragma section forcedata end
#pragma pop
