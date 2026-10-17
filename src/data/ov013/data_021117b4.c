/* .data 0x021117b4..0x021117bc */
extern unsigned char data_ov013_021117ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_021117b4[2] = {
    261, (unsigned int)&data_ov013_021117ac
};
#pragma section forcedata end
#pragma pop
