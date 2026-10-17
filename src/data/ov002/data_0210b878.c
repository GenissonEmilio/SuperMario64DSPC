/* .data 0x0210b878..0x0210b880 */
extern unsigned char func_ov002_020f2d0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b878[2] = {
    (unsigned int)&func_ov002_020f2d0c, 0
};
#pragma section forcedata end
#pragma pop
