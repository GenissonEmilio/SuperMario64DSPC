/* .data 0x021132c0..0x021132c8 */
extern unsigned char func_ov019_02111d58[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov019_021132c0[2] = {
    (unsigned int)&func_ov019_02111d58, 0
};
#pragma section forcedata end
#pragma pop
