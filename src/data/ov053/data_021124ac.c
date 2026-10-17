/* .data 0x021124ac..0x021124c4 */
extern unsigned char data_ov053_021111c4[];
extern unsigned char data_ov053_021111ac[];
extern unsigned char data_ov053_02111404[];
extern unsigned char data_ov053_0211134c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_021124ac[6] = {
    30, (unsigned int)&data_ov053_021111c4, (unsigned int)&data_ov053_021111ac, (unsigned int)&data_ov053_02111404, 2, (unsigned int)&data_ov053_0211134c
};
#pragma section forcedata end
#pragma pop
