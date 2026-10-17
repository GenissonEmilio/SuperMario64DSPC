/* .data 0x0210cab0..0x0210cad4 */
extern unsigned char data_ov002_0210cac0[];
extern unsigned char data_ov002_0210cab8[];
extern unsigned char data_ov002_0210cab0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov002_0210cac0[8] ;

extern unsigned char data_ov002_0210cab8[8] ;

extern unsigned char data_ov002_0210cab0[8] ;

extern unsigned int data_ov002_0210cac8[3] ;
#pragma section forcedata end
#pragma pop
