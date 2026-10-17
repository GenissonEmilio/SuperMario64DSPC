/* .data 0x0213b20c..0x0213b214 */
extern unsigned char Trmp3DMario_State0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Trmp3DMario_State0[2] = {
    (unsigned int)&Trmp3DMario_State0, 0
};
#pragma section forcedata end
#pragma pop
