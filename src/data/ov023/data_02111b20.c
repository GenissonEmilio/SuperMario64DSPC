/* .data 0x02111b20..0x02111b30 */
extern unsigned char data_ov023_02111b60[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov023_02111b24[4] = {
    4, 3, 3, 3
};

unsigned char data_ov023_02111b20[4] = {
    70, 7, 71, 7
};

unsigned int data_ov023_02111b28[2] = {
    2, (unsigned int)&data_ov023_02111b60
};
#pragma section forcedata end
#pragma pop
