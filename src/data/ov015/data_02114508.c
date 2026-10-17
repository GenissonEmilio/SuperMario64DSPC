/* .data 0x02114508..0x02114510 */
extern unsigned char func_ov015_02111d98[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_02114508[2] = {
    (unsigned int)&func_ov015_02111d98, 0
};
#pragma section forcedata end
#pragma pop
