/* .data 0x021111ec..0x021111fc */
extern unsigned char data_ov037_021112e8[];
extern unsigned char data_ov037_021111c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov037_021111ec[4] = {
    (unsigned int)&data_ov037_021112e8, (unsigned int)&data_ov037_021111c8, 0x90009002U, 0x90049003U
};
#pragma section forcedata end
#pragma pop
