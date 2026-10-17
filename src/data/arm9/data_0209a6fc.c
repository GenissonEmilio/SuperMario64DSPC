/* .data 0x0209a6fc..0x0209a700 */
extern unsigned char func_02073220[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a6fc[1] = {
    (unsigned int)&func_02073220
};
#pragma section forcedata end
#pragma pop
