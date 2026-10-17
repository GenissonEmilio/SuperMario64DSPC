/* .data 0x0214e188..0x0214e18c */
extern unsigned char gKiIwaModelFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov102_0214e188[1] = {
    (unsigned int)&gKiIwaModelFile
};
#pragma section forcedata end
#pragma pop
