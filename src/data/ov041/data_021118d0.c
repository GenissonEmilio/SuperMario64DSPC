/* .data 0x021118d0..0x021118e0 */
extern unsigned char data_ov041_02111a58[];
extern unsigned char data_ov041_02111b88[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov041_021118d0[4] = {
    0x1300, (unsigned int)&data_ov041_02111a58, 0x3405, (unsigned int)&data_ov041_02111b88
};
#pragma section forcedata end
#pragma pop
