/* .data 0x02112234..0x0211223c */
extern unsigned char data_ov010_02112358[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_02112234[2] = {
    0x400, (unsigned int)&data_ov010_02112358
};
#pragma section forcedata end
#pragma pop
