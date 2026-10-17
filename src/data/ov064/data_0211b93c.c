/* .data 0x0211b93c..0x0211b978 */
extern unsigned char gBossDonketuModelFile[];
extern unsigned char gdaBDonketuDonketuDeadAnimationFile[];
extern unsigned char gdaBDonketuDonketuHitAnimationFile[];
extern unsigned char gdaBDonketuDonketuTurnAnimationFile[];
extern unsigned char gdaBDonketuDonketuWalkAnimationFile[];
extern unsigned char _ZTI12daBDonketu_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov064_0211b93c[15] = {
    (unsigned int)&gBossDonketuModelFile, (unsigned int)&gdaBDonketuDonketuDeadAnimationFile, (unsigned int)&gdaBDonketuDonketuHitAnimationFile, (unsigned int)&gdaBDonketuDonketuTurnAnimationFile, (unsigned int)&gdaBDonketuDonketuWalkAnimationFile, 0x6e000, 0x8c000, 0x2800,
    0x3c000, 0x78000, 0xc8000, 0x3c000, 17, 0, (unsigned int)&_ZTI12daBDonketu_c
};
#pragma section forcedata end
#pragma pop
