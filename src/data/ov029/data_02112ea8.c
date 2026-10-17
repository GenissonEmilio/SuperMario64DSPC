/* .data 0x02112ea8..0x02112eb0 */
extern unsigned char data_ov029_02112f88[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov029_02112ea8[2] = {
    3, (unsigned int)&data_ov029_02112f88
};
#pragma section forcedata end
#pragma pop
