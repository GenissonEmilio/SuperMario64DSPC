/* .data 0x02111248..0x02111258 */
extern unsigned char data_ov054_0211161c[];
extern unsigned char data_ov054_02111298[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_02111248[4] = {
    0xb00, (unsigned int)&data_ov054_0211161c, 773, (unsigned int)&data_ov054_02111298
};
#pragma section forcedata end
#pragma pop
