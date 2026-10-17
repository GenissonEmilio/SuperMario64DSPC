/* .data 0x02112bd0..0x02112bdc */
extern unsigned char data_ov019_02112ba0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov019_02112bd0[3] = {
    (unsigned int)&data_ov019_02112ba0, 0, 0x1f400000
};
#pragma section forcedata end
#pragma pop
