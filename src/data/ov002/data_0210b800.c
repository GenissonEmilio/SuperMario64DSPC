/* .data 0x0210b800..0x0210b808 */
extern unsigned char func_ov002_020f3ae8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b800[2] = {
    (unsigned int)&func_ov002_020f3ae8, 0
};
#pragma section forcedata end
#pragma pop
