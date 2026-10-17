/* .rodata 0x021138bc..0x021138ec */
extern unsigned char gHanachanBody03DamageAnimationFile[];
extern unsigned char gHanachanBody04DamageAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov034_021138bc[2] = {
    (unsigned int)&gHanachanBody03DamageAnimationFile, (unsigned int)&gHanachanBody04DamageAnimationFile
};

unsigned char data_ov034_021138c4[20] = {
    0, 0, 0, 0, 43, 123, 5, 0, 201, 88, 8, 0,
    175, 175, 7, 0, 152, 26, 8, 0
};

unsigned char data_ov034_021138d8[20] = {
    154, 57, 4, 0, 102, 230, 3, 0, 102, 182, 4, 0,
    102, 230, 3, 0, 102, 182, 4, 0
};
#pragma section forcerodata end
