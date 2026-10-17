/* .data 0x021347c8..0x021347cc */
extern unsigned char data_ov006_02134844[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021347c8[1] = {
    (unsigned int)&data_ov006_02134844
};
#pragma section forcedata end
#pragma pop
