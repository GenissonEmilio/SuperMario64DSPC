/* .data 0x0211178c..0x02111794 */
extern unsigned char data_ov013_02111890[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov013_0211178c[2] = {
    0x400, (unsigned int)&data_ov013_02111890
};
#pragma section forcedata end
#pragma pop
