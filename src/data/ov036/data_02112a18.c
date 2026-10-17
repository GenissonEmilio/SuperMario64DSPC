/* .data 0x02112a18..0x02112a24 */
extern unsigned char data_ov036_02112a08[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02112a18[3] = {
    (unsigned int)&data_ov036_02112a08, 0, 0x1b7b0000
};
#pragma section forcedata end
#pragma pop
