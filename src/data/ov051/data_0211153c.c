/* .data 0x0211153c..0x02111548 */
extern unsigned char data_ov051_02111720[];
extern unsigned char data_ov051_021116b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_0211153c[3] = {
    (unsigned int)&data_ov051_02111720, 0x740, (unsigned int)&data_ov051_021116b0
};
#pragma section forcedata end
#pragma pop
