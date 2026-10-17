/* .data 0x02112278..0x02112294 */
extern unsigned char data_ov035_02112318[];
extern unsigned char data_ov035_02112044[];
extern unsigned char data_ov035_021122d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov035_02112278[4] = {
    4, 6, 0, 0
};

unsigned int data_ov035_0211227c[6] = {
    (unsigned int)&data_ov035_02112318, 267, (unsigned int)&data_ov035_02112044, 0x401, (unsigned int)&data_ov035_021122d8, 264
};
#pragma section forcedata end
#pragma pop
