/* .data 0x02112a10..0x02112a18 */
extern unsigned char data_ov036_02112c94[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02112a10[2] = {
    8, (unsigned int)&data_ov036_02112c94
};
#pragma section forcedata end
#pragma pop
