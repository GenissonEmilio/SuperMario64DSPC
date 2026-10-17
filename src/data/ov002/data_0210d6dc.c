/* .data 0x0210d6dc..0x0210d6f4 */
extern unsigned char data_ov002_02100360[];
extern unsigned char data_ov002_0210035c[];
extern unsigned char data_ov002_02100380[];
extern unsigned char data_ov002_02100364[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov002_0210d6dc[6] ;
#pragma section forcedata end
#pragma pop
