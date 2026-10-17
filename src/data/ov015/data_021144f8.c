/* .data 0x021144f8..0x02114500 */
extern unsigned char func_ov015_02111f4c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_021144f8[2] = {
    (unsigned int)&func_ov015_02111f4c, 0
};
#pragma section forcedata end
#pragma pop
