/* .data 0x021138fc..0x02113918 */
extern unsigned char data_ov020_02114668[];
extern unsigned char data_ov020_021137b4[];
extern unsigned char data_ov020_02113fb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_021138fc[7] = {
    (unsigned int)&data_ov020_02114668, (unsigned int)&data_ov020_021137b4, 0x7cc07d2, 0x7d407d3, (unsigned int)&data_ov020_02113fb0, 0x5820007, 95
};
#pragma section forcedata end
#pragma pop
