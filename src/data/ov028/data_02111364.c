/* .data 0x02111364..0x02111370 */
extern unsigned char data_ov028_02111348[];
extern unsigned char data_ov028_021113b8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov028_02111364[3] = {
    (unsigned int)&data_ov028_02111348, (unsigned int)&data_ov028_021113b8, 0x2580000
};
#pragma section forcedata end
#pragma pop
