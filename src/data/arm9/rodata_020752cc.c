/* .rodata 0x020752cc..0x02075358 */
extern unsigned char data_0208f278[];
extern unsigned char data_020754c4[];
extern unsigned char data_0208f29c[];
extern unsigned char data_0208f2d0[];
extern unsigned char data_02075530[];
extern unsigned char data_020753f8[];
extern unsigned char data_02075398[];
extern unsigned char data_0207545c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_02075320[7] = {
    0, (unsigned int)&data_0208f278, (unsigned int)&data_020754c4, (unsigned int)&data_0208f29c, (unsigned int)&data_0208f2d0, 0x800000, 4
};

unsigned int data_02075304[7] = {
    0, (unsigned int)&data_0208f278, (unsigned int)&data_02075530, (unsigned int)&data_0208f29c, (unsigned int)&data_0208f2d0, 0x800000, 4
};

unsigned int data_020752e8[7] = {
    0, (unsigned int)&data_0208f278, (unsigned int)&data_020753f8, (unsigned int)&data_0208f29c, (unsigned int)&data_0208f2d0, 0x800000, 4
};

unsigned int data_020752cc[7] = {
    0, (unsigned int)&data_0208f278, (unsigned int)&data_02075398, (unsigned int)&data_0208f29c, (unsigned int)&data_0208f2d0, 0x800000, 4
};

unsigned int data_0207533c[7] = {
    0, (unsigned int)&data_0208f278, (unsigned int)&data_0207545c, (unsigned int)&data_0208f29c, (unsigned int)&data_0208f2d0, 0x800000, 4
};
#pragma section forcerodata end
