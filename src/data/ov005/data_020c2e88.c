/* .data 0x020c2e88..0x020c2e8c */
extern unsigned char data_ov005_020c2e8c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmExitButton[1] = {
    (unsigned int)&data_ov005_020c2e8c
};
#pragma section forcedata end
#pragma pop
