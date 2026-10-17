/* .data 0x02111428..0x02111438 */
extern unsigned char data_ov039_02111518[];
extern unsigned char data_ov039_02111658[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov039_02111428[4] = {
    0x1400, (unsigned int)&data_ov039_02111518, 0x3805, (unsigned int)&data_ov039_02111658
};
#pragma section forcedata end
#pragma pop
