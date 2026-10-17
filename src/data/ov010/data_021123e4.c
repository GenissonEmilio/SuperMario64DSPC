/* .data 0x021123e4..0x021123f4 */
extern unsigned char data_ov010_02112288[];
extern unsigned char data_ov010_02112580[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021123e4[4] = {
    (unsigned int)&data_ov010_02112288, 0xb04, (unsigned int)&data_ov010_02112580, 0x50b
};
#pragma section forcedata end
#pragma pop
