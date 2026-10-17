/* .data 0x02111380..0x021113ac */
extern unsigned char data_ov008_021112ac[];
extern unsigned char data_ov008_021111fc[];
extern unsigned char data_ov008_021111ec[];
extern unsigned char data_ov008_021111c0[];
extern unsigned char data_ov008_021113c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov008_02111380[11] = {
    0x602, (unsigned int)&data_ov008_021112ac, 771, (unsigned int)&data_ov008_021111fc, 260, (unsigned int)&data_ov008_021111ec, 267, (unsigned int)&data_ov008_021111c0,
    0x401, (unsigned int)&data_ov008_021113c0, 0x406
};
#pragma section forcedata end
#pragma pop
