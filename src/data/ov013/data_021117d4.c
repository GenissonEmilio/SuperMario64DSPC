/* .data 0x021117d4..0x021117dc */
extern unsigned char data_ov013_0211179c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_021117d4[2] = {
    1, (unsigned int)&data_ov013_0211179c
};
#pragma section forcedata end
#pragma pop
