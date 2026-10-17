/* .data 0x02113c20..0x02113c28 */
extern unsigned char data_ov020_0211385c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113c20[2] = {
    517, (unsigned int)&data_ov020_0211385c
};
#pragma section forcedata end
#pragma pop
