/* .rodata 0x021000a0..0x021000b8 */
extern unsigned char data_ov002_0210e7d8[];
extern unsigned char data_ov002_0210e3a0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern unsigned int data_ov002_021000a0[2] ;

extern unsigned char data_ov002_021000a8[16] ;
#pragma section forcerodata end
