/* .data 0x02123134..0x0212313c */
extern unsigned char func_ov073_0212239c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_02123134[2] = {
    (unsigned int)&func_ov073_0212239c, 0
};
#pragma section forcedata end
#pragma pop
