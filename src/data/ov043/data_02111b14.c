/* .data 0x02111b14..0x02111b18 */
extern unsigned char data_ov043_02111b34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov043_02111b14[1] = {
    (unsigned int)&data_ov043_02111b34
};
#pragma section forcedata end
#pragma pop
