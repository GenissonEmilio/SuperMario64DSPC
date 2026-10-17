/* .data 0x02109f0c..0x02109f14 */
extern unsigned char func_ov002_020e200c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_02109f0c[2] = {
    (unsigned int)&func_ov002_020e200c, 0
};
#pragma section forcedata end
#pragma pop
