/* .data 0x020baba8..0x020babec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov004_020baba8[12] ;

unsigned char data_ov004_020babb4[56] = {
    240, 0, 154, 129, 0, 144, 0, 0, 240, 0, 184, 129,
    4, 144, 0, 0, 240, 0, 214, 129, 8, 144, 0, 0,
    240, 0, 244, 129, 12, 144, 0, 0, 240, 0, 16, 128,
    16, 144, 0, 0, 240, 0, 45, 128, 20, 144, 0, 0,
    240, 0, 70, 128, 24, 144, 255, 255
};
#pragma section forcedata end
#pragma pop
