/* .data 0x021120bc..0x021120d8 */
extern unsigned char data_ov035_0211236c[];
extern unsigned char data_ov035_0211204c[];
extern unsigned char data_ov035_02112070[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov035_021120bc[7] = {
    (unsigned int)&data_ov035_0211236c, (unsigned int)&data_ov035_0211204c, 0x70c070e, 0x710070f, (unsigned int)&data_ov035_02112070, 0x2580001, 15
};
#pragma section forcedata end
#pragma pop
