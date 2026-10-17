/* .data 0x02111844..0x02111860 */
extern unsigned char data_ov013_02111b94[];
extern unsigned char data_ov013_021117a4[];
extern unsigned char data_ov013_02111918[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_02111844[7] = {
    (unsigned int)&data_ov013_02111b94, (unsigned int)&data_ov013_021117a4, 0x6f306fa, 0x6fc06fb, (unsigned int)&data_ov013_02111918, 0x6400007, 15
};
#pragma section forcedata end
#pragma pop
