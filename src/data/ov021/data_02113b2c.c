/* .data 0x02113b2c..0x02113b78 */
extern unsigned char data_ov021_02113e68[];
extern unsigned char data_ov021_02113ae0[];
extern unsigned char data_ov021_02113920[];
extern unsigned char data_ov021_02113a20[];
extern unsigned char data_ov021_021139a0[];
extern unsigned char data_ov021_02113960[];
extern unsigned char data_ov021_02113a40[];
extern unsigned char data_ov021_021139c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov021_02113b2c[12] = {
    188, 240, 69, 241, 0, 0, 0, 0, 0, 0, 242, 240
};

unsigned int data_ov021_02113b38[6] = {
    0xa00, (unsigned int)&data_ov021_02113e68, 0x505, (unsigned int)&data_ov021_02113ae0, 576, (unsigned int)&data_ov021_02113920
};

unsigned int data_ov021_02113b50[10] = {
    608, (unsigned int)&data_ov021_02113a20, 640, (unsigned int)&data_ov021_021139a0, 672, (unsigned int)&data_ov021_02113960, 704, (unsigned int)&data_ov021_02113a40,
    736, (unsigned int)&data_ov021_021139c0
};
#pragma section forcedata end
#pragma pop
