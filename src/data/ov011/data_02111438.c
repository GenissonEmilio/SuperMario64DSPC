/* .data 0x02111438..0x021114d8 */
extern unsigned char data_ov011_02111378[];
extern unsigned char data_ov011_02111344[];
extern unsigned char data_ov011_021113c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov011_02111438[6] = {
    265, (unsigned int)&data_ov011_02111378, 270, (unsigned int)&data_ov011_02111344, 522, (unsigned int)&data_ov011_021113c8
};

unsigned char data_ov011_02111450[64] = {
    67, 76, 80, 83, 8, 0, 7, 0, 196, 15, 4, 0,
    255, 0, 0, 0, 194, 15, 4, 0, 255, 0, 0, 0,
    227, 15, 4, 0, 255, 0, 0, 0, 196, 15, 3, 0,
    255, 0, 0, 0, 201, 15, 4, 0, 255, 0, 0, 0,
    196, 63, 3, 1, 255, 0, 0, 0, 192, 15, 4, 1,
    255, 0, 0, 0
};

unsigned char data_ov011_02111490[72] = {
    127, 3, 0, 0, 217, 245, 0, 0, 0, 0, 90, 242,
    123, 252, 0, 0, 212, 245, 136, 250, 0, 0, 98, 249,
    217, 252, 0, 0, 78, 253, 253, 255, 0, 0, 109, 254,
    21, 3, 0, 0, 72, 253, 19, 5, 0, 0, 86, 249,
    56, 255, 232, 3, 132, 3, 200, 0, 232, 3, 132, 3,
    56, 255, 232, 3, 32, 3, 200, 0, 232, 3, 32, 3
};
#pragma section forcedata end
#pragma pop
