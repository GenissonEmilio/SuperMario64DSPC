/* .data 0x0211150c..0x02111520 */
extern unsigned char data_ov051_02111650[];
extern unsigned char data_ov051_021114bc[];
extern unsigned char data_ov051_021114d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov051_0211150c[5] = {
    (unsigned int)&data_ov051_02111650, (unsigned int)&data_ov051_021114bc, 0x8c008c02U, 0x8c048c03U, (unsigned int)&data_ov051_021114d0
};
#pragma section forcedata end
#pragma pop
