/* .data 0x02113c18..0x02113c20 */
extern unsigned char data_ov020_02113bd8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113c18[2] = {
    0x400, (unsigned int)&data_ov020_02113bd8
};
#pragma section forcedata end
#pragma pop
