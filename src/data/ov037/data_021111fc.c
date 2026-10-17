/* .data 0x021111fc..0x02111204 */
extern unsigned char data_ov037_021111e0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov037_021111fc[2] = {
    (unsigned int)&data_ov037_021111e0, 0x5dc0001
};
#pragma section forcedata end
#pragma pop
