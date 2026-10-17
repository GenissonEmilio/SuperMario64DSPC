/* .data 0x02111210..0x02111228 */
extern unsigned char data_ov008_02111508[];
extern unsigned char data_ov008_021111d0[];
extern unsigned char data_ov008_021111e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov008_02111210[2] = {
    (unsigned int)&data_ov008_02111508, (unsigned int)&data_ov008_021111d0
};

unsigned int data_ov008_02111218[4] = {
    0x7d507d7, 0x7d907d8, (unsigned int)&data_ov008_021111e0, 0x6400101
};
#pragma section forcedata end
#pragma pop
