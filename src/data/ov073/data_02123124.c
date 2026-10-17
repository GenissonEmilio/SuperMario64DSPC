/* .data 0x02123124..0x0212312c */
extern unsigned char func_ov073_021220c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_02123124[2] = {
    (unsigned int)&func_ov073_021220c0, 0
};
#pragma section forcedata end
#pragma pop
