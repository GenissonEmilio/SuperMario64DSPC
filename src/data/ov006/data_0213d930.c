/* .data 0x0213d930..0x0213d938 */
extern unsigned char PachinkoPipe_State0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_PachinkoPipe_State0[2] = {
    (unsigned int)&PachinkoPipe_State0, 0
};
#pragma section forcedata end
#pragma pop
