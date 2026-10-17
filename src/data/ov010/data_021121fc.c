/* .data 0x021121fc..0x02112204 */
extern unsigned char data_ov010_02112234[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021121fc[2] = {
    1, (unsigned int)&data_ov010_02112234
};
#pragma section forcedata end
#pragma pop
