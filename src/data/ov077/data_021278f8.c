/* .data 0x021278f8..0x02127900 */
extern unsigned char func_ov077_02125908[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov077_021278f8[2] = {
    (unsigned int)&func_ov077_02125908, 0
};
#pragma section forcedata end
#pragma pop
