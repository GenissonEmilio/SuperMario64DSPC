/* .data 0x020875fc..0x02087604 */
extern unsigned char data_020885c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_020875fc[2] = {
    9, (unsigned int)&data_020885c8
};
#pragma section forcedata end
#pragma pop
