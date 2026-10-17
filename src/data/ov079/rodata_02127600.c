/* .rodata 0x02127600..0x02127618 */
extern unsigned char gBattanKingAttack01AnimationFile[];
extern unsigned char gBattanKingAttack02AnimationFile[];
extern unsigned char gBattanKingRecoverAnimationFile[];
extern unsigned char gBattanKingWalkAnimationFile[];
extern unsigned char gBattanKingWalkstartAnimationFile[];
extern unsigned char data_ov079_021281b0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov079_02127600[6] = {
    (unsigned int)&gBattanKingAttack01AnimationFile, (unsigned int)&gBattanKingAttack02AnimationFile, (unsigned int)&gBattanKingRecoverAnimationFile, (unsigned int)&gBattanKingWalkAnimationFile, (unsigned int)&gBattanKingWalkstartAnimationFile, (unsigned int)&data_ov079_021281b0
};
#pragma section forcerodata end
