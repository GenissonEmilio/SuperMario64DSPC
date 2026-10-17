/* .data 0x02112ea0..0x02112ea8 */
extern unsigned char data_ov018_02113170[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov018_02112ea0[2] = {
    11, (unsigned int)&data_ov018_02113170
};
#pragma section forcedata end
#pragma pop
