/* .data 0x02111244..0x02111298 */
extern unsigned char data_ov037_021111d8[];
extern unsigned char data_ov037_021111c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov037_02111244[3] = {
    (unsigned int)&data_ov037_021111d8, 270, (unsigned int)&data_ov037_021111c4
};

unsigned char data_ov037_02111250[72] = {
    2, 255, 68, 22, 206, 24, 132, 234, 0, 0, 0, 192,
    0, 0, 2, 255, 12, 23, 56, 24, 238, 233, 0, 0,
    0, 192, 0, 0, 2, 255, 12, 23, 56, 24, 26, 235,
    0, 0, 0, 192, 0, 0, 2, 255, 12, 23, 56, 24,
    194, 232, 0, 0, 0, 192, 0, 0, 2, 255, 12, 23,
    56, 24, 70, 236, 0, 0, 0, 192, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
