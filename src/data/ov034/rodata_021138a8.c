/* .rodata 0x021138a8..0x021138bc */
extern unsigned char gHanachanBody03WalkEndAnimationFile[];
extern unsigned char gHanachanBody04WalkEndAnimationFile[];
extern unsigned char gHanachanHeadDamageAnimationFile[];
extern unsigned char gHanachanBody01DamageAnimationFile[];
extern unsigned char gHanachanBody02DamageAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov034_021138a8[2] = {
    (unsigned int)&gHanachanBody03WalkEndAnimationFile, (unsigned int)&gHanachanBody04WalkEndAnimationFile
};

unsigned int data_ov034_021138b0[3] = {
    (unsigned int)&gHanachanHeadDamageAnimationFile, (unsigned int)&gHanachanBody01DamageAnimationFile, (unsigned int)&gHanachanBody02DamageAnimationFile
};
#pragma section forcerodata end
