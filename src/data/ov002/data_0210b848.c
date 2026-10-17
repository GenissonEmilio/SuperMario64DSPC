/* .data 0x0210b848..0x0210b850 */
extern unsigned char func_ov002_020f562c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b848[2] = {
    (unsigned int)&func_ov002_020f562c, 0
};
#pragma section forcedata end
#pragma pop
