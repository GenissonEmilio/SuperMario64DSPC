/* .data 0x02137a00..0x02137a04 */
extern unsigned char data_ov006_02137a04[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02137a00[1] = {
    (unsigned int)&data_ov006_02137a04
};
#pragma section forcedata end
#pragma pop
