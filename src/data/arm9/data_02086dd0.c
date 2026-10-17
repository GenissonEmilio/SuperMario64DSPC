/* .data 0x02086dd0..0x02086dd8 */
extern unsigned char func_02005060[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086dd0[2] = {
    (unsigned int)&func_02005060, 0
};
#pragma section forcedata end
#pragma pop
