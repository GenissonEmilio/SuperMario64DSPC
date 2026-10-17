/* .rodata 0x020ab620..0x020ab630 */
extern unsigned char data_ov001_020ab604[];
extern unsigned char data_ov001_020ab640[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern unsigned int data_ov001_020ab620[4] ;
#pragma section forcerodata end
