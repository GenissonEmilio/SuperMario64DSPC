/* .data 0x0211b834..0x0211b870 */
extern unsigned char gDonketuModelFile[];
extern unsigned char gDonketuDeadAnimationFile[];
extern unsigned char gDonketuHitAnimationFile[];
extern unsigned char gDonketuTurnAnimationFile[];
extern unsigned char gDonketuWalkAnimationFile[];
extern unsigned char _ZTI11daDonketu_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov064_0211b834[15] = {
    (unsigned int)&gDonketuModelFile, (unsigned int)&gDonketuDeadAnimationFile, (unsigned int)&gDonketuHitAnimationFile, (unsigned int)&gDonketuTurnAnimationFile, (unsigned int)&gDonketuWalkAnimationFile, 0x3c000, 0x78000, 0x1c00,
    0, 0x3c000, 0x64000, 0x3c000, 247, 0, (unsigned int)&_ZTI11daDonketu_c
};
#pragma section forcedata end
#pragma pop
