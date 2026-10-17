/* .data 0x02112ee0..0x02112ef8 */
extern unsigned char data_ov026_021137c0[];
extern unsigned char data_ov026_02113450[];
extern unsigned char data_ov026_02112e80[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov026_02112ee0[6] = {
    0x2d00, (unsigned int)&data_ov026_021137c0, 0x3605, (unsigned int)&data_ov026_02113450, 352, (unsigned int)&data_ov026_02112e80
};
#pragma section forcedata end
#pragma pop
