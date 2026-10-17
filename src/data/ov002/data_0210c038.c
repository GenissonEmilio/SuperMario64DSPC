/* .data 0x0210c038..0x0210c040 */
extern unsigned char func_ov002_020f9468[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210c038[2] = {
    (unsigned int)&func_ov002_020f9468, 0
};
#pragma section forcedata end
#pragma pop
