/* .data 0x02111724..0x0211172c */
extern unsigned char data_ov058_021117c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_02111724[2] = {
    768, (unsigned int)&data_ov058_021117c8
};
#pragma section forcedata end
#pragma pop
