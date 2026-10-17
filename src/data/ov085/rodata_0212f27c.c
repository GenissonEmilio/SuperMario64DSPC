/* .rodata 0x0212f27c..0x0212f29c */
extern unsigned char data_ov085_021304d4[];
extern unsigned char data_ov085_021304c4[];
extern unsigned char data_ov085_021304e4[];
extern unsigned char data_ov085_021304ec[];
extern unsigned char gPeachJumpEndAnimationFile[];
extern unsigned char gPeachJumpLoopAnimationFile[];
extern unsigned char data_ov085_021304bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov085_0212f27c[4] = {
    20, 40, 60, 0
};

unsigned int data_ov085_0212f280[7] = {
    (unsigned int)&data_ov085_021304d4, (unsigned int)&data_ov085_021304c4, (unsigned int)&data_ov085_021304e4, (unsigned int)&data_ov085_021304ec, (unsigned int)&gPeachJumpEndAnimationFile, (unsigned int)&gPeachJumpLoopAnimationFile, (unsigned int)&data_ov085_021304bc
};
#pragma section forcerodata end
