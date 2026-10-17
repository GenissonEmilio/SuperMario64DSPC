/* .data 0x021114d4..0x021114dc */
extern unsigned char data_ov059_02111520[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov059_021114d4[2] = {
    2, (unsigned int)&data_ov059_02111520
};
#pragma section forcedata end
#pragma pop
