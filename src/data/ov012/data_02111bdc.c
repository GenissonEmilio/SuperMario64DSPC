/* .data 0x02111bdc..0x02111c14 */
extern unsigned char data_ov012_02111cb0[];
extern unsigned char data_ov012_02111bf4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov012_02111bdc[4] = {
    254, 6, 255, 6
};

unsigned char data_ov012_02111be0[8] = {
    0, 7, 1, 7, 2, 7, 0, 0
};

unsigned char data_ov012_02111be8[12] = {
    109, 97, 116, 95, 119, 97, 116, 101, 114, 0, 0, 0
};

unsigned char data_ov012_02111bf4[16] = {
    63, 68, 114, 7, 236, 250, 162, 247, 60, 228, 119, 7,
    112, 251, 1, 245
};

unsigned int data_ov012_02111c04[4] = {
    512, (unsigned int)&data_ov012_02111cb0, 517, (unsigned int)&data_ov012_02111bf4
};
#pragma section forcedata end
#pragma pop
