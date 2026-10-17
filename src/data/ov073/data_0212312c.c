/* .data 0x0212312c..0x02123134 */
extern unsigned char func_ov073_021222ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_0212312c[2] = {
    (unsigned int)&func_ov073_021222ec, 0
};
#pragma section forcedata end
#pragma pop
