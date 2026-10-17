/* .data 0x020ba024..0x020ba028 */
extern unsigned char data_ov004_020bb3ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020ba024[1] = {
    (unsigned int)&data_ov004_020bb3ec
};
#pragma section forcedata end
#pragma pop
