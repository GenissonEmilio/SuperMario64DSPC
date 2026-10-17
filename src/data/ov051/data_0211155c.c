/* .data 0x0211155c..0x02111588 */
extern unsigned char data_ov051_021114ac[];
extern unsigned char data_ov051_02111588[];
extern unsigned char data_ov051_021114a4[];
extern unsigned char data_ov051_021115c0[];
extern unsigned char data_ov051_021114a0[];
extern unsigned char data_ov051_021114a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_0211155c[1] = {
    (unsigned int)&data_ov051_021114ac
};

unsigned int data_ov051_02111560[10] = {
    0x404, (unsigned int)&data_ov051_02111588, 267, (unsigned int)&data_ov051_021114a4, 0x401, (unsigned int)&data_ov051_021115c0, 268, (unsigned int)&data_ov051_021114a0,
    270, (unsigned int)&data_ov051_021114a8
};
#pragma section forcedata end
#pragma pop
