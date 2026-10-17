/* .data 0x0211241c..0x02112420 */
extern unsigned char data_ov010_02112790[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_0211241c[1] = {
    (unsigned int)&data_ov010_02112790
};
#pragma section forcedata end
#pragma pop
