/* .data 0x02112f2c..0x02112f48 */
extern unsigned char data_ov018_02113270[];
extern unsigned char data_ov018_02112e90[];
extern unsigned char data_ov018_02112eb4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov018_02112f2c[7] = {
    (unsigned int)&data_ov018_02113270, (unsigned int)&data_ov018_02112e90, 0x7bd07bf, 0x7c107c0, (unsigned int)&data_ov018_02112eb4, 0x5780001, 79
};
#pragma section forcedata end
#pragma pop
