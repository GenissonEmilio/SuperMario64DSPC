/* .data 0x02112a08..0x02112a10 */
extern unsigned char data_ov036_02112a54[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02112a08[2] = {
    3, (unsigned int)&data_ov036_02112a54
};
#pragma section forcedata end
#pragma pop
