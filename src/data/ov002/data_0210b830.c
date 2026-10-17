/* .data 0x0210b830..0x0210b838 */
extern unsigned char func_ov002_020f5e98[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b830[2] = {
    (unsigned int)&func_ov002_020f5e98, 0
};
#pragma section forcedata end
#pragma pop
