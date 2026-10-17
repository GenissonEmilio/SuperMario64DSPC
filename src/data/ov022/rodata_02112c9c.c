/* .rodata 0x02112c9c..0x02112ca8 */
extern unsigned char gFlLogModelFile[];
extern unsigned char gFlLogCollisionFile[];
extern unsigned char data_ov064_0211bbcc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov022_02112c9c[3] = {
    (unsigned int)&gFlLogModelFile, (unsigned int)&gFlLogCollisionFile, (unsigned int)&data_ov064_0211bbcc
};
#pragma section forcerodata end
