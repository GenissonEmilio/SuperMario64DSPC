/* .data 0x0211170c..0x02111714 */
extern unsigned char data_ov058_021117f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_0211170c[2] = {
    7, (unsigned int)&data_ov058_021117f8
};
#pragma section forcedata end
#pragma pop
