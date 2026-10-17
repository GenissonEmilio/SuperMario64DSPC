/* .data 0x02111720..0x02111724 */
extern unsigned char data_ov058_02111784[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_02111720[1] = {
    (unsigned int)&data_ov058_02111784
};
#pragma section forcedata end
#pragma pop
