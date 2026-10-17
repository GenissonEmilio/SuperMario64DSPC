/* .data 0x0211241c..0x02112434 */
extern unsigned char data_ov053_021111cc[];
extern unsigned char data_ov053_021111b4[];
extern unsigned char data_ov053_02111dc4[];
extern unsigned char data_ov053_021111e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_0211241c[3] = {
    181, (unsigned int)&data_ov053_021111cc, (unsigned int)&data_ov053_021111b4
};

extern unsigned int data_ov053_02112428[3] ;
#pragma section forcedata end
#pragma pop
