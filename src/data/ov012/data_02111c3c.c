/* .data 0x02111c3c..0x02111c54 */
extern unsigned char data_ov012_02111774[];
extern unsigned char data_ov012_0211176c[];
extern unsigned char data_ov012_021117b0[];
extern unsigned char data_ov012_02111794[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111c3c[6] = {
    91, (unsigned int)&data_ov012_02111774, (unsigned int)&data_ov012_0211176c, (unsigned int)&data_ov012_021117b0, 1, (unsigned int)&data_ov012_02111794
};
#pragma section forcedata end
#pragma pop
