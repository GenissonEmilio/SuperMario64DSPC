/* .data 0x02111928..0x02111944 */
extern unsigned char data_ov041_021119f8[];
extern unsigned char data_ov041_02111894[];
extern unsigned char data_ov041_021118b4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov041_02111928[4] = {
    0, 64, 0, 0
};

unsigned int data_ov041_0211192c[6] = {
    (unsigned int)&data_ov041_021119f8, (unsigned int)&data_ov041_02111894, 0x79f07a1, 0x7a307a2, (unsigned int)&data_ov041_021118b4, 0x5dc0001
};
#pragma section forcedata end
#pragma pop
