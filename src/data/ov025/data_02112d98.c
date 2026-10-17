/* .data 0x02112d98..0x02112dd8 */
extern unsigned char data_ov025_02112ef0[];
extern unsigned char data_ov025_02112e70[];
extern unsigned char data_ov025_02112dd8[];
extern unsigned char data_ov025_02112b6c[];
extern unsigned char data_ov025_02112e20[];
extern unsigned char data_ov025_02112b80[];
extern unsigned char data_ov025_02112b64[];
extern unsigned char data_ov025_02112b40[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_02112d98[16] = {
    0x2a02, (unsigned int)&data_ov025_02112ef0, 0x1503, (unsigned int)&data_ov025_02112e70, 0x504, (unsigned int)&data_ov025_02112dd8, 0x40b, (unsigned int)&data_ov025_02112b6c,
    0x501, (unsigned int)&data_ov025_02112e20, 265, (unsigned int)&data_ov025_02112b80, 0x40c, (unsigned int)&data_ov025_02112b64, 270, (unsigned int)&data_ov025_02112b40
};
#pragma section forcedata end
#pragma pop
