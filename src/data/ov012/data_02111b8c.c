/* .data 0x02111b8c..0x02111b94 */
extern unsigned char data_ov012_02111ff8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111b8c[2] = {
    0x1400, (unsigned int)&data_ov012_02111ff8
};
#pragma section forcedata end
#pragma pop
