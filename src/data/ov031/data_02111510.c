/* .data 0x02111510..0x02111518 */
extern unsigned char data_ov031_02111578[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov031_02111510[2] = {
    6, (unsigned int)&data_ov031_02111578
};
#pragma section forcedata end
#pragma pop
