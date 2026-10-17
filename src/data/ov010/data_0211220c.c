/* .data 0x0211220c..0x02112214 */
extern unsigned char data_ov010_02112278[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_0211220c[2] = {
    2, (unsigned int)&data_ov010_02112278
};
#pragma section forcedata end
#pragma pop
