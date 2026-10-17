/* .data 0x021121f8..0x021121fc */
extern unsigned char data_ov010_02112338[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021121f8[1] = {
    (unsigned int)&data_ov010_02112338
};
#pragma section forcedata end
#pragma pop
