/* .data 0x0211238c..0x02112394 */
extern unsigned char data_ov053_021123d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_0211238c[2] = {
    256, (unsigned int)&data_ov053_021123d4
};
#pragma section forcedata end
#pragma pop
