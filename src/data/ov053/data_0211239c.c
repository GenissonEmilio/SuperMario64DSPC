/* .data 0x0211239c..0x021123a4 */
extern unsigned char data_ov053_0211238c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_0211239c[2] = {
    1, (unsigned int)&data_ov053_0211238c
};
#pragma section forcedata end
#pragma pop
