/* .data 0x021112f8..0x02111334 */
extern unsigned char data_ov054_021111c0[];
extern unsigned char data_ov054_021111d8[];
extern unsigned char data_ov054_021111c8[];
extern unsigned char data_ov054_021111e8[];
extern unsigned char data_ov054_021111e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_021112f8[15] = {
    (unsigned int)&data_ov054_021111c0, 0, 0x3e80100, (unsigned int)&data_ov054_021111d8, 0, 0x3e80101, (unsigned int)&data_ov054_021111c8, 0,
    0x3e80102, (unsigned int)&data_ov054_021111e8, 0, 0x3e80103, (unsigned int)&data_ov054_021111e0, 0, 0x7d00304
};
#pragma section forcedata end
#pragma pop
