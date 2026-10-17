/* .data 0x02111b30..0x02111b40 */
extern unsigned char data_ov023_02111bc0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov023_02111b34[4] = {
    110, 48, 49, 0
};

unsigned char data_ov023_02111b30[4] = {
    121, 111, 103, 97
};

unsigned int data_ov023_02111b38[2] = {
    7, (unsigned int)&data_ov023_02111bc0
};
#pragma section forcedata end
#pragma pop
