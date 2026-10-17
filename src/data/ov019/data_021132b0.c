/* .data 0x021132b0..0x021132b8 */
extern unsigned char func_ov019_02111fec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov019_021132b0[2] = {
    (unsigned int)&func_ov019_02111fec, 0
};
#pragma section forcedata end
#pragma pop
