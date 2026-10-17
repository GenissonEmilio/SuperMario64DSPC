/* .data 0x02113b10..0x02113b40 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov020_02113b10[8] ;

unsigned char data_ov020_02113b18[20] = {
    63, 74, 138, 2, 33, 11, 108, 7, 37, 226, 94, 1,
    128, 12, 44, 1, 37, 226, 38, 2
};

extern unsigned char data_ov020_02113b2c[20] ;
#pragma section forcedata end
#pragma pop
