/* .rodata 0x020ff014..0x020ff040 */
extern unsigned char data_ov002_0210da40[];
extern unsigned char data_ov002_0210d9a0[];
extern unsigned char data_ov002_0210d9c0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern unsigned char data_ov002_020ff014[8] ;

extern unsigned char data_ov002_020ff01c[12] ;

extern unsigned int data_ov002_020ff028[6] ;
#pragma section forcerodata end
