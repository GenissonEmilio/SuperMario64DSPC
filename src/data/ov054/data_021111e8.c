/* .data 0x021111e8..0x021111fc */
extern unsigned char data_ov054_02111248[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_021111ec[1] = {
    (unsigned int)&data_ov054_02111248
};

unsigned char data_ov054_021111e8[4] = {
    2, 0, 0, 0
};

unsigned char data_ov054_021111f0[12] = {
    36, 7, 37, 7, 38, 7, 39, 7, 40, 7, 0, 0
};
#pragma section forcedata end
#pragma pop
