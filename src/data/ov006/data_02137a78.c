/* .data 0x02137a78..0x02137a7c */
extern unsigned char data_ov006_02137a7c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02137a78[1] = {
    (unsigned int)&data_ov006_02137a7c
};
#pragma section forcedata end
#pragma pop
