/* .data 0x021137f8..0x02113800 */
extern unsigned char data_ov015_021134c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov015_021137f8[2] = {
    (unsigned int)&data_ov015_021134c0, 270
};
#pragma section forcedata end
#pragma pop
