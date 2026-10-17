/* .data 0x0213b16c..0x0213b174 */
extern unsigned char Trmp2Mario_State3[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Trmp2Mario_State3_2[2] = {
    (unsigned int)&Trmp2Mario_State3, 0
};
#pragma section forcedata end
#pragma pop
