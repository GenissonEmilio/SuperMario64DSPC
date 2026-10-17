/* .rodata 0x0211389c..0x021138a8 */
extern unsigned char gHanachanHeadWalkEndAnimationFile[];
extern unsigned char gHanachanBody01WalkEndAnimationFile[];
extern unsigned char gHanachanBody02WalkEndAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov034_0211389c[3] = {
    (unsigned int)&gHanachanHeadWalkEndAnimationFile, (unsigned int)&gHanachanBody01WalkEndAnimationFile, (unsigned int)&gHanachanBody02WalkEndAnimationFile
};
#pragma section forcerodata end
