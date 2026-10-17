/* .data 0x02112480..0x02112488 */
extern unsigned char data_ov045_0211265c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov045_02112480[2] = {
    7, (unsigned int)&data_ov045_0211265c
};
#pragma section forcedata end
#pragma pop
