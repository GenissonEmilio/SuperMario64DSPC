/* .data 0x0213b2e0..0x0213b2f4 */
extern unsigned char Trmp2Mario_GetPos[];
extern unsigned char Trmp2Mario_GetPrevPos[];
extern unsigned char Trmp2Mario_GetVelocity[];
extern unsigned char Trmp2Mario_Reset[];
extern unsigned char TrmpRingObjAdapter_Clear[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213b2e0[5] = {
    (unsigned int)&Trmp2Mario_GetPos, (unsigned int)&Trmp2Mario_GetPrevPos, (unsigned int)&Trmp2Mario_GetVelocity, (unsigned int)&Trmp2Mario_Reset, (unsigned int)&TrmpRingObjAdapter_Clear
};
#pragma section forcedata end
#pragma pop
