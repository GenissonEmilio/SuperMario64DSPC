/* .data 0x0213b2c4..0x0213b2e0 */
extern unsigned char Trmp3DMario_GetPos[];
extern unsigned char Trmp3DMario_GetPrevPos[];
extern unsigned char Trmp3DMario_GetVelocity[];
extern unsigned char Trmp3DMario_IsInState6[];
extern unsigned char TrmpObjAdapter_Clear[];
extern unsigned char _ZTI17dMgTrmpln2Mario_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213b2c4[7] = {
    (unsigned int)&Trmp3DMario_GetPos, (unsigned int)&Trmp3DMario_GetPrevPos, (unsigned int)&Trmp3DMario_GetVelocity, (unsigned int)&Trmp3DMario_IsInState6, (unsigned int)&TrmpObjAdapter_Clear, 0, (unsigned int)&_ZTI17dMgTrmpln2Mario_c
};
#pragma section forcedata end
#pragma pop
