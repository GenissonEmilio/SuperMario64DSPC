/* .data 0x021112d0..0x02111310 */
extern unsigned char data_ov040_02111210[];
extern unsigned char data_ov040_021111cc[];
extern unsigned char data_ov040_02111264[];
extern unsigned char data_ov040_021111c4[];
extern unsigned char data_ov040_02111290[];
extern unsigned char data_ov040_021111c0[];
extern unsigned char data_ov040_021111c8[];
extern unsigned char data_ov040_021111f0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov040_021112d0[16] = {
    0x402, (unsigned int)&data_ov040_02111210, 259, (unsigned int)&data_ov040_021111cc, 772, (unsigned int)&data_ov040_02111264, 267, (unsigned int)&data_ov040_021111c4,
    0x401, (unsigned int)&data_ov040_02111290, 268, (unsigned int)&data_ov040_021111c0, 270, (unsigned int)&data_ov040_021111c8, 266, (unsigned int)&data_ov040_021111f0
};
#pragma section forcedata end
#pragma pop
