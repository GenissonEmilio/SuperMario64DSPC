/* .data 0x02112ed4..0x02112edc */
extern unsigned char data_ov032_02113040[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov032_02112ed4[2] = {
    8, (unsigned int)&data_ov032_02113040
};
#pragma section forcedata end
#pragma pop
