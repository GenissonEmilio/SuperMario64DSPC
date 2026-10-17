/* .data 0x021138f0..0x02113930 */
extern unsigned char gIceDonketuModelFile[];
extern unsigned char gIceDonketuDeadAnimationFile[];
extern unsigned char gIceDonketuHitAnimationFile[];
extern unsigned char gIceDonketuTurnAnimationFile[];
extern unsigned char gIceDonketuWalkAnimationFile[];
extern unsigned char _ZTI12daIDonketu_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov027_021138f0[4] = {
    0, 128, 187, 0
};

unsigned int data_ov027_021138f4[2] = {
    (unsigned int)&gIceDonketuModelFile, (unsigned int)&gIceDonketuDeadAnimationFile
};

unsigned int data_ov027_021138fc[13] = {
    (unsigned int)&gIceDonketuHitAnimationFile, (unsigned int)&gIceDonketuTurnAnimationFile, (unsigned int)&gIceDonketuWalkAnimationFile, 0x5a000, 0xaa000, 0x2800, 0, 0x78000,
    0xa0000, 0x5000, 121, 0, (unsigned int)&_ZTI12daIDonketu_c
};
#pragma section forcedata end
#pragma pop
