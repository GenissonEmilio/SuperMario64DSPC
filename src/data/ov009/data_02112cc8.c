/* .data 0x02112cc8..0x02112ccc */
extern unsigned char data_ov009_02112d44[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov009_02112cc8[1] = {
    (unsigned int)&data_ov009_02112d44
};
#pragma section forcedata end
#pragma pop
