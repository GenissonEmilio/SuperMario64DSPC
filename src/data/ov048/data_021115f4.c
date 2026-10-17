/* .data 0x021115f4..0x0211160c */
extern unsigned char data_ov048_02111264[];
extern unsigned char data_ov048_021111a0[];
extern unsigned char data_ov048_021113f8[];
extern unsigned char data_ov048_021111a4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_021115f4[6] = {
    100, (unsigned int)&data_ov048_02111264, (unsigned int)&data_ov048_021111a0, (unsigned int)&data_ov048_021113f8, 1, (unsigned int)&data_ov048_021111a4
};
#pragma section forcedata end
#pragma pop
