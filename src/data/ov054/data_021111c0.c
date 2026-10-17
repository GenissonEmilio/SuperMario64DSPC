/* .data 0x021111c0..0x021111e8 */
extern unsigned char data_ov054_02111228[];
extern unsigned char data_ov054_02111334[];
extern unsigned char data_ov054_02111208[];
extern unsigned char data_ov054_02111258[];
extern unsigned char data_ov054_02111218[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_021111d8[2] = {
    2, (unsigned int)&data_ov054_02111228
};

unsigned int data_ov054_021111d0[2] = {
    8, (unsigned int)&data_ov054_02111334
};

unsigned int data_ov054_021111c8[2] = {
    2, (unsigned int)&data_ov054_02111208
};

unsigned int data_ov054_021111c0[2] = {
    2, (unsigned int)&data_ov054_02111258
};

unsigned int data_ov054_021111e0[2] = {
    2, (unsigned int)&data_ov054_02111218
};
#pragma section forcedata end
#pragma pop
