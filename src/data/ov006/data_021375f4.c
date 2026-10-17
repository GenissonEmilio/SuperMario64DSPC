/* .data 0x021375f4..0x021375fc */
extern unsigned char data_ov006_021375ec[];
extern unsigned char data_ov006_021375e4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021375f4[2] = {
    (unsigned int)&data_ov006_021375ec, (unsigned int)&data_ov006_021375e4
};
#pragma section forcedata end
#pragma pop
