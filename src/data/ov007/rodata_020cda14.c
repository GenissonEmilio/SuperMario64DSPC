/* .rodata 0x020cda14..0x020cda2c */
extern unsigned char data_ov007_020ccd58[];
extern unsigned char data_ov007_020ccd7c[];
extern unsigned char data_ov007_020ccdb8[];
extern unsigned char data_ov007_020ce73c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cda14[6] = {
    48, (unsigned int)&data_ov007_020ccd58, (unsigned int)&data_ov007_020ccd7c, (unsigned int)&data_ov007_020ccdb8, 2, (unsigned int)&data_ov007_020ce73c
};
#pragma section forcerodata end
