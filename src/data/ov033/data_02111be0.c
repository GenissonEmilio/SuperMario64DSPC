/* .data 0x02111be0..0x02111bfc */
extern unsigned char data_ov033_02111e44[];
extern unsigned char data_ov033_02111aec[];
extern unsigned char data_ov033_02111b20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov033_02111be0[7] = {
    (unsigned int)&data_ov033_02111e44, (unsigned int)&data_ov033_02111aec, 0x7e807ea, 0x7ec07eb, (unsigned int)&data_ov033_02111b20, 0x3e80001, 31
};
#pragma section forcedata end
#pragma pop
