/* .data 0x02112a6c..0x02112a88 */
extern unsigned char data_ov036_02112d1c[];
extern unsigned char data_ov036_02112a10[];
extern unsigned char data_ov036_02112a18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02112a6c[7] = {
    (unsigned int)&data_ov036_02112d1c, (unsigned int)&data_ov036_02112a10, 0x7a907ab, 0x7ad07ac, (unsigned int)&data_ov036_02112a18, 0x6400101, 47
};
#pragma section forcedata end
#pragma pop
