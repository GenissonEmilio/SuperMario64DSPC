/* .data 0x020c2ea4..0x020c2eac */
extern unsigned char data_ov005_020c2e9c[];
extern unsigned char data_ov005_020c2e94[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmPageArrows[2] = {
    (unsigned int)&data_ov005_020c2e9c, (unsigned int)&data_ov005_020c2e94
};
#pragma section forcedata end
#pragma pop
