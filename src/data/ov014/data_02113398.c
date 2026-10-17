/* .data 0x02113398..0x021133a0 */
extern unsigned char data_ov014_02113550[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov014_02113398[2] = {
    16, (unsigned int)&data_ov014_02113550
};
#pragma section forcedata end
#pragma pop
