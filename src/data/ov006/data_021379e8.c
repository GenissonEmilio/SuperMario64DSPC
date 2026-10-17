/* .data 0x021379e8..0x021379f4 */
extern unsigned char data_ov006_021379ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021379e8[1] = {
    (unsigned int)&data_ov006_021379ec
};

unsigned char data_ov006_021379ec[8] = {
    248, 0, 248, 65, 86, 81, 255, 255
};
#pragma section forcedata end
#pragma pop
