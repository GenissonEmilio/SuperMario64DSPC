/* .data 0x0211e9e8..0x0211e9f8 */
extern unsigned char data_ov063_0211ec58[];
extern unsigned char data_ov063_0211ebf8[];
extern unsigned char data_ov063_0211ec78[];
extern unsigned char data_ov063_0211ec18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov063_0211e9e8[4] = {
    (unsigned int)&data_ov063_0211ec58, (unsigned int)&data_ov063_0211ebf8, (unsigned int)&data_ov063_0211ec78, (unsigned int)&data_ov063_0211ec18
};
#pragma section forcedata end
#pragma pop
