/* .data 0x021111e4..0x021111fc */
extern unsigned char data_ov049_02111354[];
extern unsigned char data_ov049_02111238[];
extern unsigned char data_ov049_02111274[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov049_021111e4[2] = {
    0x4002, (unsigned int)&data_ov049_02111354
};

unsigned int data_ov049_021111ec[4] = {
    0xa03, (unsigned int)&data_ov049_02111238, 0x401, (unsigned int)&data_ov049_02111274
};
#pragma section forcedata end
#pragma pop
