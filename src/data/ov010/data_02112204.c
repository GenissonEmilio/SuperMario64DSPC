/* .data 0x02112204..0x0211220c */
extern unsigned char data_ov010_021121e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_02112204[2] = {
    1, (unsigned int)&data_ov010_021121e4
};
#pragma section forcedata end
#pragma pop
