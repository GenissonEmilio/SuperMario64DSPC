/* .data 0x02112dd8..0x02112de0 */
extern unsigned char data_ov026_02112ee0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov026_02112dd8[2] = {
    3, (unsigned int)&data_ov026_02112ee0
};
#pragma section forcedata end
#pragma pop
