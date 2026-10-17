/* .data 0x0210d600..0x0210d608 */
extern unsigned char func_ov002_020fed18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210d600[2] = {
    (unsigned int)&func_ov002_020fed18, 0
};
#pragma section forcedata end
#pragma pop
