/* .rodata 0x020cda2c..0x020cda44 */
extern unsigned char data_ov007_020d072c[];
extern unsigned char data_ov007_020ccce8[];
extern unsigned char data_ov007_020d403c[];
extern unsigned char data_ov007_020cf024[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cda2c[6] = {
    852, (unsigned int)&data_ov007_020d072c, (unsigned int)&data_ov007_020ccce8, (unsigned int)&data_ov007_020d403c, 3, (unsigned int)&data_ov007_020cf024
};
#pragma section forcerodata end
