/* .data 0x02130174..0x0213017c */
extern unsigned char func_ov085_0212cd80[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov085_02130174[2] = {
    (unsigned int)&func_ov085_0212cd80, 0
};
#pragma section forcedata end
#pragma pop
