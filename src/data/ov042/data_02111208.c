/* .data 0x02111208..0x02111210 */
extern unsigned char data_ov042_02111404[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov042_02111208[2] = {
    0x1c00, (unsigned int)&data_ov042_02111404
};
#pragma section forcedata end
#pragma pop
