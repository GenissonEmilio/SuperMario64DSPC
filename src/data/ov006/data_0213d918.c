/* .data 0x0213d918..0x0213d920 */
extern unsigned char PachinkoBg_State1[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_PachinkoBg_State1[2] = {
    (unsigned int)&PachinkoBg_State1, 0
};
#pragma section forcedata end
#pragma pop
