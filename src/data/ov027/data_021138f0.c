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
extern unsigned char data_ov027_021138f0[4] ;

unsigned int data_ov027_021138f4[2] = {
    (unsigned int)&gIceDonketuModelFile, (unsigned int)&gIceDonketuDeadAnimationFile
};

extern unsigned int data_ov027_021138fc[13] ;
#pragma section forcedata end
#pragma pop
