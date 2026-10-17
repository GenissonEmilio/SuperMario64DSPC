/* .rodata 0x020ab618..0x020ab620 */
extern unsigned char data_ov001_020ab620[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern unsigned int data_ov001_020ab618[2] ;
#pragma section forcerodata end
