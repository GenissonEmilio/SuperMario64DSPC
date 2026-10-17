/* .data 0x02112ff0..0x02112ff8 */
extern unsigned char data_ov027_021131cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov027_02112ff0[2] = {
    9, (unsigned int)&data_ov027_021131cc
};
#pragma section forcedata end
#pragma pop
