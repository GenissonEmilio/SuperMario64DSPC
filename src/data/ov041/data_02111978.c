/* .data 0x02111978..0x02111994 */
extern unsigned char data_ov041_02111948[];
extern unsigned char data_ov041_021118e0[];
extern unsigned char data_ov041_02111910[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov041_02111978[7] = {
    0x802, (unsigned int)&data_ov041_02111948, 0x403, (unsigned int)&data_ov041_021118e0, 516, (unsigned int)&data_ov041_02111910, 267
};
#pragma section forcedata end
#pragma pop
