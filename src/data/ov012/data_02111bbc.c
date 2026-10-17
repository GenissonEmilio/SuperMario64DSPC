/* .data 0x02111bbc..0x02111bc4 */
extern unsigned char data_ov012_02111b84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov012_02111bbc[2] = {
    1, (unsigned int)&data_ov012_02111b84
};
#pragma section forcedata end
#pragma pop
