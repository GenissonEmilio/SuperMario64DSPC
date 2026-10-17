/* .data 0x0210b97c..0x0210b988 */
extern unsigned char data_ov002_021001b0[];
extern unsigned char data_ov002_02100200[];
extern unsigned char data_ov002_02100250[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b97c[3] = {
    (unsigned int)&data_ov002_021001b0, (unsigned int)&data_ov002_02100200, (unsigned int)&data_ov002_02100250
};
#pragma section forcedata end
#pragma pop
