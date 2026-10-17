/* .data 0x02113174..0x021131b4 */
extern unsigned char data_ov029_021130fc[];
extern unsigned char data_ov029_02112ea4[];
extern unsigned char data_ov029_02113134[];
extern unsigned char data_ov029_02112ef8[];
extern unsigned char data_ov029_02112f78[];
extern unsigned char data_ov029_02112ee8[];
extern unsigned char data_ov029_02112ecc[];
extern unsigned char data_ov029_02112ea0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov029_02113174[16] = {
    0x404, (unsigned int)&data_ov029_021130fc, 523, (unsigned int)&data_ov029_02112ea4, 0x401, (unsigned int)&data_ov029_02113134, 518, (unsigned int)&data_ov029_02112ef8,
    519, (unsigned int)&data_ov029_02112f78, 520, (unsigned int)&data_ov029_02112ee8, 265, (unsigned int)&data_ov029_02112ecc, 270, (unsigned int)&data_ov029_02112ea0
};
#pragma section forcedata end
#pragma pop
