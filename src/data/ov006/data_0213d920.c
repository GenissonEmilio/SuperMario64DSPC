/* .data 0x0213d920..0x0213d928 */
extern unsigned char PachinkoBall_State3[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_PachinkoBall_State3[2] = {
    (unsigned int)&PachinkoBall_State3, 0
};
#pragma section forcedata end
#pragma pop
