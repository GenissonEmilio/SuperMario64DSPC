/* .rodata 0x020cda5c..0x020cda74 */
extern unsigned char data_ov007_020cd03c[];
extern unsigned char data_ov007_020cccd4[];
extern unsigned char data_ov007_020cdb1c[];
extern unsigned char data_ov007_020cf078[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cda5c[6] = {
    2, (unsigned int)&data_ov007_020cd03c, (unsigned int)&data_ov007_020cccd4, (unsigned int)&data_ov007_020cdb1c, 3, (unsigned int)&data_ov007_020cf078
};
#pragma section forcerodata end
