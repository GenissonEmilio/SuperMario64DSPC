/* .rodata 0x021280d8..0x021280e8 */
extern unsigned char data_ov081_02128edc[];
extern unsigned char gGamaguchiWalkEndAnimationFile[];
extern unsigned char gGamaguchiJumpAnimationFile[];
extern unsigned char gGamaguchiJumpEndAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov081_021280d8[4] = {
    (unsigned int)&data_ov081_02128edc, (unsigned int)&gGamaguchiWalkEndAnimationFile, (unsigned int)&gGamaguchiJumpAnimationFile, (unsigned int)&gGamaguchiJumpEndAnimationFile
};
#pragma section forcerodata end
