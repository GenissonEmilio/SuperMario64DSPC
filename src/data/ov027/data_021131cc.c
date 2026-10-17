/* .data 0x021131cc..0x02113214 */
extern unsigned char data_ov027_02113434[];
extern unsigned char data_ov027_02113344[];
extern unsigned char data_ov027_02113044[];
extern unsigned char data_ov027_02113034[];
extern unsigned char data_ov027_02113054[];
extern unsigned char data_ov027_02113064[];
extern unsigned char data_ov027_02113154[];
extern unsigned char data_ov027_02113084[];
extern unsigned char data_ov027_02113094[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov027_021131cc[18] = {
    0x3900, (unsigned int)&data_ov027_02113434, 0x1e05, (unsigned int)&data_ov027_02113344, 320, (unsigned int)&data_ov027_02113044, 352, (unsigned int)&data_ov027_02113034,
    384, (unsigned int)&data_ov027_02113054, 416, (unsigned int)&data_ov027_02113064, 0x6a5, (unsigned int)&data_ov027_02113154, 448, (unsigned int)&data_ov027_02113084,
    480, (unsigned int)&data_ov027_02113094
};
#pragma section forcedata end
#pragma pop
