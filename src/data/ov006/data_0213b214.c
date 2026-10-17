/* .data 0x0213b214..0x0213b21c */
extern unsigned char Trmp2Mario_State7[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Trmp2Mario_State7_5[2] = {
    (unsigned int)&Trmp2Mario_State7, 0
};
#pragma section forcedata end
#pragma pop
