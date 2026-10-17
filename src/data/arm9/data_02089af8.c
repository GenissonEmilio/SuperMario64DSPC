/* .data 0x02089af8..0x02089dcc */
extern unsigned char data_ov000_020b0000[];
extern unsigned char data_020a0244[];
extern unsigned char data_02091000[];
extern unsigned char data_02090800[];
extern unsigned char data_ov007_020f0000[];
extern unsigned char data_ov007_020f1000[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_02089af8[181] ;
#pragma section forcedata end
#pragma pop
