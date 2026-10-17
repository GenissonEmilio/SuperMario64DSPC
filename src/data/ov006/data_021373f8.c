/* .data 0x021373f8..0x021373fc */
extern unsigned char data_ov006_02136e44[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021373f8[1] = {
    (unsigned int)&data_ov006_02136e44
};
#pragma section forcedata end
#pragma pop
