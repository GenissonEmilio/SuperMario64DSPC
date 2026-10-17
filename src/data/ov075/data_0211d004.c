/* .data 0x0211d004..0x0211d014 */
extern unsigned char data_ov075_0211c7e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211d004[4] = {
    (unsigned int)&data_ov075_0211c7e0, 3, 0, 10
};
#pragma section forcedata end
#pragma pop
