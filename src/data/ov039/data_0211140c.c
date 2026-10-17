/* .data 0x0211140c..0x02111414 */
extern unsigned char data_ov039_02111470[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov039_0211140c[2] = {
    5, (unsigned int)&data_ov039_02111470
};
#pragma section forcedata end
#pragma pop
