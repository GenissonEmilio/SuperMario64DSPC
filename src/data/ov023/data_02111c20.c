/* .data 0x02111c20..0x02111c98 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov023_02111c20[24] ;

unsigned char data_ov023_02111c38[28] = {
    67, 76, 80, 83, 8, 0, 8, 0, 0, 0, 3, 0,
    255, 0, 0, 0, 0, 0, 11, 0, 255, 0, 0, 0,
    0, 48, 3, 0
};

extern unsigned char data_ov023_02111c54[68] ;
#pragma section forcedata end
#pragma pop
