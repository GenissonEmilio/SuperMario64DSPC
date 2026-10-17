/* .data 0x02111218..0x02111228 */
extern unsigned char data_ov038_02111254[];
extern unsigned char data_ov038_021111d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov038_02111218[4] = {
    (unsigned int)&data_ov038_02111254, (unsigned int)&data_ov038_021111d4, 0x7c707c9, 0x7cb07ca
};
#pragma section forcedata end
#pragma pop
