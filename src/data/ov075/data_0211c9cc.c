/* .data 0x0211c9cc..0x0211c9e0 */
extern unsigned char data_ov000_020ad04c[];
extern unsigned char data_ov000_020acb68[];
extern unsigned char data_ov000_020ac64c[];
extern unsigned char data_ov000_020ac218[];
extern unsigned char data_ov000_020abd98[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211c9cc[5] = {
    (unsigned int)&data_ov000_020ad04c, (unsigned int)&data_ov000_020acb68, (unsigned int)&data_ov000_020ac64c, (unsigned int)&data_ov000_020ac218, (unsigned int)&data_ov000_020abd98
};
#pragma section forcedata end
#pragma pop
