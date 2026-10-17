/* .data 0x0211317c..0x02113188 */
extern unsigned char data_ov022_02113160[];
extern unsigned char data_ov022_021131f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov022_0211317c[3] = {
    (unsigned int)&data_ov022_02113160, (unsigned int)&data_ov022_021131f8, 0x4e20000
};
#pragma section forcedata end
#pragma pop
