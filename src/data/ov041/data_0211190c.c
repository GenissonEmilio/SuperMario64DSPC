/* .data 0x0211190c..0x02111928 */
extern unsigned char data_ov041_021111a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov041_0211190c[1] = {
    (unsigned int)&data_ov041_021111a8
};

unsigned char data_ov041_02111910[24] = {
    6, 3, 184, 1, 94, 1, 226, 4, 0, 0, 0, 0,
    0, 0, 2, 255, 228, 237, 244, 1, 156, 255, 0, 0
};
#pragma section forcedata end
#pragma pop
