/* .data 0x02112c9c..0x02112cc8 */
extern unsigned char data_ov009_02112d04[];
extern unsigned char data_ov009_0211301c[];
extern unsigned char data_ov009_02113214[];
extern unsigned char data_ov009_02112b94[];
extern unsigned char data_ov009_02113104[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov009_02112c9c[3] = {
    0x400, (unsigned int)&data_ov009_02112d04, 0x1d05
};

unsigned int data_ov009_02112ca8[8] = {
    (unsigned int)&data_ov009_0211301c, 0x1c20, (unsigned int)&data_ov009_02113214, 805, (unsigned int)&data_ov009_02112b94, 0x1140, (unsigned int)&data_ov009_02113104, 0x845
};
#pragma section forcedata end
#pragma pop
