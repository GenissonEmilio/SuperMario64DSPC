/* .data 0x0212310c..0x02123114 */
extern unsigned char func_ov073_02122200[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_0212310c[2] = {
    (unsigned int)&func_ov073_02122200, 0
};
#pragma section forcedata end
#pragma pop
