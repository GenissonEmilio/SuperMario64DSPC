/* .data 0x02111c24..0x02111c3c */
extern unsigned char data_ov012_02111770[];
extern unsigned char data_ov012_02111768[];
extern unsigned char data_ov012_0211191c[];
extern unsigned char data_ov012_02111778[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111c24[6] = {
    91, (unsigned int)&data_ov012_02111770, (unsigned int)&data_ov012_02111768, (unsigned int)&data_ov012_0211191c, 1, (unsigned int)&data_ov012_02111778
};
#pragma section forcedata end
#pragma pop
