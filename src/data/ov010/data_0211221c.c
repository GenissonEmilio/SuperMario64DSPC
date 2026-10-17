/* .data 0x0211221c..0x02112224 */
extern unsigned char data_ov010_021121f4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_0211221c[2] = {
    1, (unsigned int)&data_ov010_021121f4
};
#pragma section forcedata end
#pragma pop
