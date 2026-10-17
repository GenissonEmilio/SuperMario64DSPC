/* .data 0x02112ca8..0x02112cc8 */
extern unsigned char data_ov056_02112dc4[];
extern unsigned char data_ov056_02112cf4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov056_02112ca8[12] = {
    107, 249, 116, 22, 0, 0, 171, 170, 0, 0, 0, 0
};

unsigned int data_ov056_02112cb4[5] = {
    0x2002, (unsigned int)&data_ov056_02112dc4, 0xd03, (unsigned int)&data_ov056_02112cf4, 772
};
#pragma section forcedata end
#pragma pop
