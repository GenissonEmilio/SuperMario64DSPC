/* .data 0x02112318..0x02112358 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov035_02112318[8] = {
    1, 255, 0, 0, 100, 25, 0, 0
};

extern unsigned char data_ov035_02112320[56] ;
#pragma section forcedata end
#pragma pop
