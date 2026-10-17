/* .data 0x02086dc8..0x02086dd0 */
extern unsigned char func_02005000[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086dc8[2] = {
    (unsigned int)&func_02005000, 0
};
#pragma section forcedata end
#pragma pop
