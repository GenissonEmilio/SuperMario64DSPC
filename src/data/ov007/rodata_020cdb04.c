/* .rodata 0x020cdb04..0x020cdb1c */
extern unsigned char data_ov007_020ccd90[];
extern unsigned char data_ov007_020cccd8[];
extern unsigned char data_ov007_020d147c[];
extern unsigned char data_ov007_020ce8c4[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cdb04[6] = {
    700, (unsigned int)&data_ov007_020ccd90, (unsigned int)&data_ov007_020cccd8, (unsigned int)&data_ov007_020d147c, 2, (unsigned int)&data_ov007_020ce8c4
};
#pragma section forcerodata end
