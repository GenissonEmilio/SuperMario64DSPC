/* .data 0x021117bc..0x021117c4 */
extern unsigned char data_ov013_0211178c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_021117bc[2] = {
    1, (unsigned int)&data_ov013_0211178c
};
#pragma section forcedata end
#pragma pop
