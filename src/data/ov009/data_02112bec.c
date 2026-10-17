/* .data 0x02112bec..0x02112bf8 */
extern unsigned char data_ov009_02112b88[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov009_02112bec[3] = {
    (unsigned int)&data_ov009_02112b88, 0x6400001, 31
};
#pragma section forcedata end
#pragma pop
