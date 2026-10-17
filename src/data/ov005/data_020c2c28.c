/* .data 0x020c2c28..0x020c2c48 */
extern unsigned char data_ov005_020c2df8[];
extern unsigned char data_ov005_020c2c90[];
extern unsigned char data_ov005_020c2d68[];
extern unsigned char data_ov005_020c2d20[];
extern unsigned char data_ov005_020c2cd8[];
extern unsigned char data_ov005_020c2db0[];
extern unsigned char data_ov005_020c2c48[];
extern unsigned char data_ov005_020c2e40[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmGroupTabs[8] = {
    (unsigned int)&data_ov005_020c2df8, (unsigned int)&data_ov005_020c2c90, (unsigned int)&data_ov005_020c2d68, (unsigned int)&data_ov005_020c2d20, (unsigned int)&data_ov005_020c2cd8, (unsigned int)&data_ov005_020c2db0, (unsigned int)&data_ov005_020c2c48, (unsigned int)&data_ov005_020c2e40
};
#pragma section forcedata end
#pragma pop
