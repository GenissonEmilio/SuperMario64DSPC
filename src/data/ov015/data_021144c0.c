/* .data 0x021144c0..0x021144c8 */
extern unsigned char func_ov015_02111e60[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_021144c0[2] = {
    (unsigned int)&func_ov015_02111e60, 0
};
#pragma section forcedata end
#pragma pop
