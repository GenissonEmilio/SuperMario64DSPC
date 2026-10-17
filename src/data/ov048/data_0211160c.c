/* .data 0x0211160c..0x02111624 */
extern unsigned char data_ov048_021115d4[];
extern unsigned char data_ov048_021115a0[];
extern unsigned char data_ov048_021117c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_0211160c[6] = {
    260, (unsigned int)&data_ov048_021115d4, 267, (unsigned int)&data_ov048_021115a0, 0x401, (unsigned int)&data_ov048_021117c0
};
#pragma section forcedata end
#pragma pop
