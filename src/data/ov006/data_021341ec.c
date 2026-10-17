/* .data 0x021341ec..0x021341f0 */
extern unsigned char data_ov006_021341f0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021341ec[1] = {
    (unsigned int)&data_ov006_021341f0
};
#pragma section forcedata end
#pragma pop
