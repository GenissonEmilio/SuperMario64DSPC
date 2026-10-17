/* .data 0x02113d80..0x02113dc4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113d80[16] = {
    67, 0, 184, 11, 50, 0, 144, 1, 0, 0, 0, 0,
    0, 0, 0, 1
};

extern unsigned char data_ov020_02113d90[24] ;

extern unsigned char data_ov020_02113da8[28] ;
#pragma section forcedata end
#pragma pop
