/* .data 0x0209a460..0x0209a470 */
extern unsigned char data_0209a4e8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a460[4] = {
    65, 58, 0, (unsigned int)&data_0209a4e8
};
#pragma section forcedata end
#pragma pop
