/* .data 0x02112cc8..0x02112cd0 */
extern unsigned char data_ov036_02112a34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02112cc8[2] = {
    (unsigned int)&data_ov036_02112a34, 270
};
#pragma section forcedata end
#pragma pop
