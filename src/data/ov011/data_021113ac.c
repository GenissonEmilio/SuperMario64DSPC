/* .data 0x021113ac..0x021113c8 */
extern unsigned char data_ov011_02111450[];
extern unsigned char data_ov011_02111358[];
extern unsigned char data_ov011_02111360[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov011_021113ac[1] = {
    (unsigned int)&data_ov011_02111450
};

unsigned int data_ov011_021113b0[6] = {
    (unsigned int)&data_ov011_02111358, 0x79a079c, 0x79e079d, (unsigned int)&data_ov011_02111360, 0x3e80001, 31
};
#pragma section forcedata end
#pragma pop
