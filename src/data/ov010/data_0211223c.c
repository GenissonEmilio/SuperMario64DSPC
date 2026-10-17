/* .data 0x0211223c..0x02112268 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov010_0211223c[12] ;

extern unsigned char data_ov010_02112248[16] ;

unsigned char data_ov010_02112258[16] = {
    75, 0, 127, 4, 213, 2, 183, 246, 255, 255, 0, 64,
    0, 0, 13, 7
};
#pragma section forcedata end
#pragma pop
