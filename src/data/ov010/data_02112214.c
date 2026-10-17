/* .data 0x02112214..0x0211221c */
extern unsigned char data_ov010_02112420[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_02112214[2] = {
    0x500, (unsigned int)&data_ov010_02112420
};
#pragma section forcedata end
#pragma pop
