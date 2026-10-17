/* .data 0x0210b818..0x0210b820 */
extern unsigned char func_ov002_020f5b84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b818[2] = {
    (unsigned int)&func_ov002_020f5b84, 0
};
#pragma section forcedata end
#pragma pop
