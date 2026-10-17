/* .data 0x02112a54..0x02112a6c */
extern unsigned char data_ov036_02113384[];
extern unsigned char data_ov036_0211306c[];
extern unsigned char data_ov036_02112a44[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02112a54[6] = {
    0x6d00, (unsigned int)&data_ov036_02113384, 0x6305, (unsigned int)&data_ov036_0211306c, 352, (unsigned int)&data_ov036_02112a44
};
#pragma section forcedata end
#pragma pop
