/* .data 0x02113290..0x02113298 */
extern unsigned char func_ov019_02111dec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov019_02113290[2] = {
    (unsigned int)&func_ov019_02111dec, 0
};
#pragma section forcedata end
#pragma pop
