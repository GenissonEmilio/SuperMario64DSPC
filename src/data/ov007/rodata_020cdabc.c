/* .rodata 0x020cdabc..0x020cdad4 */
extern unsigned char data_ov007_020ccd60[];
extern unsigned char data_ov007_020cccf0[];
extern unsigned char data_ov007_020ccdac[];
extern unsigned char data_ov007_020ce854[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cdabc[6] = {
    2, (unsigned int)&data_ov007_020ccd60, (unsigned int)&data_ov007_020cccf0, (unsigned int)&data_ov007_020ccdac, 2, (unsigned int)&data_ov007_020ce854
};
#pragma section forcerodata end
