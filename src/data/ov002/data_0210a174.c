/* .data 0x0210a174..0x0210a17c */
extern unsigned char func_ov002_020c9998[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210a174[2] = {
    (unsigned int)&func_ov002_020c9998, 0
};
#pragma section forcedata end
#pragma pop
