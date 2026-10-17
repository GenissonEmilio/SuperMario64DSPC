/* .data 0x02111ae8..0x02111b34 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111ae8[12] = {
    210, 0, 88, 27, 0, 0, 206, 230, 0, 0, 0, 0
};

extern unsigned char data_ov054_02111af4[32] ;

extern unsigned char data_ov054_02111b14[32] ;
#pragma section forcedata end
#pragma pop
