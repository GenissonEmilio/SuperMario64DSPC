/* .rodata 0x021275ec..0x02127600 */
extern unsigned char gBattanAttack01AnimationFile[];
extern unsigned char gBattanAttack02AnimationFile[];
extern unsigned char gBattanRecoverAnimationFile[];
extern unsigned char gBattanWalkAnimationFile[];
extern unsigned char gBattanWalkstartAnimationFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern unsigned int data_ov079_021275ec[5] ;
#pragma section forcerodata end
