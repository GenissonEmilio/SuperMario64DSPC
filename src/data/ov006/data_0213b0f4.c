/* .data 0x0213b0f4..0x0213b11c */
extern unsigned char Trmp2Mario_State7[];
extern unsigned char Trmp2Mario_State3[];
extern unsigned char Trmp3DMario_State6[];
extern unsigned char Trmp2Mario_State0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Trmp2Mario_State7_2[2] = {
    (unsigned int)&Trmp2Mario_State7, 0
};

unsigned int pmf_Trmp2Mario_State7[2] = {
    (unsigned int)&Trmp2Mario_State7, 0
};

unsigned int pmf_Trmp2Mario_State3[2] = {
    (unsigned int)&Trmp2Mario_State3, 0
};

unsigned int pmf_Trmp3DMario_State6[2] = {
    (unsigned int)&Trmp3DMario_State6, 0
};

unsigned int pmf_Trmp2Mario_State0[2] = {
    (unsigned int)&Trmp2Mario_State0, 0
};
#pragma section forcedata end
#pragma pop
