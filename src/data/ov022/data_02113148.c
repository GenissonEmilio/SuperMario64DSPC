/* .data 0x02113148..0x02113150 */
extern unsigned char data_ov022_02113360[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov022_02113148[2] = {
    9, (unsigned int)&data_ov022_02113360
};
#pragma section forcedata end
#pragma pop
