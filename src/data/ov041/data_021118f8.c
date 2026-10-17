/* .data 0x021118f8..0x0211190c */
extern unsigned char data_ov041_021111a4[];
extern unsigned char data_ov041_021111a0[];
extern unsigned char data_ov041_021111e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov041_021118f8[5] = {
    210, (unsigned int)&data_ov041_021111a4, (unsigned int)&data_ov041_021111a0, (unsigned int)&data_ov041_021111e0, 2
};
#pragma section forcedata end
#pragma pop
