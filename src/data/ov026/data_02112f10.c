/* .data 0x02112f10..0x02112f28 */
extern unsigned char data_ov026_02112de0[];
extern unsigned char data_ov026_02112ef8[];
extern unsigned char data_ov026_02112dd8[];
extern unsigned char data_ov026_02112f28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov026_02112f10[6] = {
    (unsigned int)&data_ov026_02112de0, (unsigned int)&data_ov026_02112ef8, 0xcae0000, (unsigned int)&data_ov026_02112dd8, (unsigned int)&data_ov026_02112f28, 0xea90000
};
#pragma section forcedata end
#pragma pop
