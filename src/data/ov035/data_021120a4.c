/* .data 0x021120a4..0x021120bc */
extern unsigned char data_ov035_02111bd8[];
extern unsigned char data_ov035_02111bd0[];
extern unsigned char data_ov035_02111c18[];
extern unsigned char data_ov035_02111be0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov035_021120a4[6] = {
    91, (unsigned int)&data_ov035_02111bd8, (unsigned int)&data_ov035_02111bd0, (unsigned int)&data_ov035_02111c18, 1, (unsigned int)&data_ov035_02111be0
};
#pragma section forcedata end
#pragma pop
