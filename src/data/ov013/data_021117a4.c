/* .data 0x021117a4..0x021117ac */
extern unsigned char data_ov013_021118d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_021117a4[2] = {
    9, (unsigned int)&data_ov013_021118d0
};
#pragma section forcedata end
#pragma pop
