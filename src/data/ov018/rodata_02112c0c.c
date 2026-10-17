/* .rodata 0x02112c0c..0x02112c14 */
extern unsigned char gPenguinWait1AnimationFile[];
extern unsigned char gPenguinWalkAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov018_02112c0c[2] = {
    (unsigned int)&gPenguinWait1AnimationFile, (unsigned int)&gPenguinWalkAnimationFile
};
#pragma section forcerodata end
