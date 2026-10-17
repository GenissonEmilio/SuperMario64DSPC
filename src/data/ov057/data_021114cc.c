/* .data 0x021114cc..0x021114d8 */
extern unsigned char data_ov057_021114ac[];
extern unsigned char data_ov057_02111508[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov057_021114cc[3] = {
    (unsigned int)&data_ov057_021114ac, (unsigned int)&data_ov057_02111508, 0x6400000
};
#pragma section forcedata end
#pragma pop
