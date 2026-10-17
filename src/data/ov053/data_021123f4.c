/* .data 0x021123f4..0x02112404 */
extern unsigned char data_ov053_0211194c[];
extern unsigned char data_ov053_02111384[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_021123f4[4] = {
    90, (unsigned int)&data_ov053_0211194c, 1, (unsigned int)&data_ov053_02111384
};
#pragma section forcedata end
#pragma pop
