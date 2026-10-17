/* .data 0x02086d00..0x02086d08 */
extern unsigned char func_0200814c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02086d00[2] = {
    (unsigned int)&func_0200814c, 0
};
#pragma section forcedata end
#pragma pop
