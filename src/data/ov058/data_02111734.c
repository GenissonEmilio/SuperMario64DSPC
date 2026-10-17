/* .data 0x02111734..0x0211173c */
extern unsigned char data_ov058_0211172c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_02111734[2] = {
    1, (unsigned int)&data_ov058_0211172c
};
#pragma section forcedata end
#pragma pop
