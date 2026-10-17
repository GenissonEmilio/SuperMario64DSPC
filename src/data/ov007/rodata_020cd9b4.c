/* .rodata 0x020cd9b4..0x020cd9cc */
extern unsigned char data_ov007_020ccd5c[];
extern unsigned char data_ov007_020ccd68[];
extern unsigned char data_ov007_020d042c[];
extern unsigned char data_ov007_020ce6cc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cd9b4[6] = {
    48, (unsigned int)&data_ov007_020ccd5c, (unsigned int)&data_ov007_020ccd68, (unsigned int)&data_ov007_020d042c, 2, (unsigned int)&data_ov007_020ce6cc
};
#pragma section forcerodata end
