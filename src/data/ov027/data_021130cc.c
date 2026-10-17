/* .data 0x021130cc..0x021130d0 */
extern unsigned char data_ov027_02113264[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov027_021130cc[1] = {
    (unsigned int)&data_ov027_02113264
};
#pragma section forcedata end
#pragma pop
