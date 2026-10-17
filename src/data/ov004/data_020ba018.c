/* .data 0x020ba018..0x020ba01c */
extern unsigned char data_ov004_020bba6c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020ba018[1] = {
    (unsigned int)&data_ov004_020bba6c
};
#pragma section forcedata end
#pragma pop
