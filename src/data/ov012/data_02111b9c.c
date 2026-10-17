/* .data 0x02111b9c..0x02111ba4 */
extern unsigned char data_ov012_02111c04[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111b9c[2] = {
    2, (unsigned int)&data_ov012_02111c04
};
#pragma section forcedata end
#pragma pop
