/* .data 0x02113500..0x02113518 */
extern unsigned char data_ov015_02112e10[];
extern unsigned char data_ov015_02112e0c[];
extern unsigned char data_ov015_02112e30[];
extern unsigned char data_ov015_02112e14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_02113500[6] = {
    91, (unsigned int)&data_ov015_02112e10, (unsigned int)&data_ov015_02112e0c, (unsigned int)&data_ov015_02112e30, 1, (unsigned int)&data_ov015_02112e14
};
#pragma section forcedata end
#pragma pop
