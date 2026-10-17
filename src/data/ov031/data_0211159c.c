/* .data 0x0211159c..0x021115e0 */
extern unsigned char data_ov031_02111504[];
extern unsigned char data_ov031_0211153c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov031_0211159c[3] = {
    (unsigned int)&data_ov031_02111504, 266, (unsigned int)&data_ov031_0211153c
};

unsigned char data_ov031_021115a8[20] = {
    0, 0, 109, 44, 115, 52, 251, 48, 0, 0, 114, 156,
    0, 0, 0, 2, 0, 0, 9, 44
};

unsigned char data_ov031_021115bc[36] = {
    45, 50, 195, 49, 0, 0, 114, 156, 0, 0, 0, 0,
    0, 0, 103, 45, 27, 50, 201, 48, 0, 0, 114, 156,
    0, 0, 0, 0, 0, 0, 3, 45, 27, 50, 145, 49
};
#pragma section forcedata end
#pragma pop
