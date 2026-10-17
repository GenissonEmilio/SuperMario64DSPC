/* .data 0x020875d4..0x020875dc */
extern unsigned char data_020886b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020875d4[2] = {
    10, (unsigned int)&data_020886b0
};
#pragma section forcedata end
#pragma pop
