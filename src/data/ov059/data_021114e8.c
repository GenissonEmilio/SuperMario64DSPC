/* .data 0x021114e8..0x021114f4 */
extern unsigned char data_ov059_021114d4[];
extern unsigned char data_ov059_02111530[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov059_021114e8[3] = {
    (unsigned int)&data_ov059_021114d4, (unsigned int)&data_ov059_02111530, 0x3a980000
};
#pragma section forcedata end
#pragma pop
