/* .data 0x0213b14c..0x0213b154 */
extern unsigned char Trmp2Mario_State2[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Trmp2Mario_State2[2] = {
    (unsigned int)&Trmp2Mario_State2, 0
};
#pragma section forcedata end
#pragma pop
