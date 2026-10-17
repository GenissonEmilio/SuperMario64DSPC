/* .data 0x02112e90..0x02112e98 */
extern unsigned char data_ov018_02113120[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov018_02112e90[2] = {
    10, (unsigned int)&data_ov018_02113120
};
#pragma section forcedata end
#pragma pop
