/* .data 0x02111334..0x02111374 */
extern unsigned char data_ov054_02111404[];
extern unsigned char data_ov054_021112cc[];
extern unsigned char data_ov054_02111510[];
extern unsigned char data_ov054_021111f0[];
extern unsigned char data_ov054_02111374[];
extern unsigned char data_ov054_02111580[];
extern unsigned char data_ov054_021111fc[];
extern unsigned char data_ov054_0211178c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_02111334[16] = {
    0xe02, (unsigned int)&data_ov054_02111404, 0x703, (unsigned int)&data_ov054_021112cc, 0x804, (unsigned int)&data_ov054_02111510, 0x50b, (unsigned int)&data_ov054_021111f0,
    0x401, (unsigned int)&data_ov054_02111374, 0xd09, (unsigned int)&data_ov054_02111580, 0x50c, (unsigned int)&data_ov054_021111fc, 0x1a0a, (unsigned int)&data_ov054_0211178c
};
#pragma section forcedata end
#pragma pop
