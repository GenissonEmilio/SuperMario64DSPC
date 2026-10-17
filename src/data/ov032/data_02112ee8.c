/* .data 0x02112ee8..0x02112ef4 */
extern unsigned char data_ov032_02112ecc[];
extern unsigned char data_ov032_02112f34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov032_02112ee8[3] = {
    (unsigned int)&data_ov032_02112ecc, (unsigned int)&data_ov032_02112f34, 0x1b580000
};
#pragma section forcedata end
#pragma pop
