/* .rodata 0x02113860..0x0211389c */
extern unsigned char gHanachanHeadWalkAnimationFile[];
extern unsigned char gHanachanBody01WalkAnimationFile[];
extern unsigned char gHanachanBody02WalkAnimationFile[];
extern unsigned char gHanachanBody03WalkAnimationFile[];
extern unsigned char gHanachanBody04WalkAnimationFile[];
extern unsigned char gHanachanHeadWaitAnimationFile[];
extern unsigned char gHanachanBody01WaitAnimationFile[];
extern unsigned char gHanachanBody02WaitAnimationFile[];
extern unsigned char gHanachanBody03WaitAnimationFile[];
extern unsigned char gHanachanBody04WaitAnimationFile[];
extern unsigned char gHanachanHeadWalkStartAnimationFile[];
extern unsigned char gHanachanBody01WalkStartAnimationFile[];
extern unsigned char gHanachanBody02WalkStartAnimationFile[];
extern unsigned char gHanachanBody03WalkStartAnimationFile[];
extern unsigned char gHanachanBody04WalkStartAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov034_02113874[5] = {
    (unsigned int)&gHanachanHeadWalkAnimationFile, (unsigned int)&gHanachanBody01WalkAnimationFile, (unsigned int)&gHanachanBody02WalkAnimationFile, (unsigned int)&gHanachanBody03WalkAnimationFile, (unsigned int)&gHanachanBody04WalkAnimationFile
};

unsigned int data_ov034_02113860[5] = {
    (unsigned int)&gHanachanHeadWaitAnimationFile, (unsigned int)&gHanachanBody01WaitAnimationFile, (unsigned int)&gHanachanBody02WaitAnimationFile, (unsigned int)&gHanachanBody03WaitAnimationFile, (unsigned int)&gHanachanBody04WaitAnimationFile
};

unsigned int data_ov034_02113888[5] = {
    (unsigned int)&gHanachanHeadWalkStartAnimationFile, (unsigned int)&gHanachanBody01WalkStartAnimationFile, (unsigned int)&gHanachanBody02WalkStartAnimationFile, (unsigned int)&gHanachanBody03WalkStartAnimationFile, (unsigned int)&gHanachanBody04WalkStartAnimationFile
};
#pragma section forcerodata end
