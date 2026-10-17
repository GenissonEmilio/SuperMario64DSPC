/* .data 0x021115bc..0x021115e0 */
extern unsigned char data_ov057_021114d8[];
extern unsigned char data_ov057_021114a0[];
extern unsigned char data_ov057_021114f8[];
extern unsigned char data_ov057_021114bc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov057_021115bc[9] = {
    260, (unsigned int)&data_ov057_021114d8, 267, (unsigned int)&data_ov057_021114a0, 257, (unsigned int)&data_ov057_021114f8, 264, (unsigned int)&data_ov057_021114bc,
    268
};
#pragma section forcedata end
#pragma pop
