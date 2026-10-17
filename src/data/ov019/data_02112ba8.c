/* .data 0x02112ba8..0x02112bb0 */
extern unsigned char data_ov019_02112c84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov019_02112ba8[2] = {
    8, (unsigned int)&data_ov019_02112c84
};
#pragma section forcedata end
#pragma pop
