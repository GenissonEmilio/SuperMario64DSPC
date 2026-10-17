/* .data 0x02134924..0x02134928 */
extern unsigned char data_ov006_021349c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134924[1] = {
    (unsigned int)&data_ov006_021349c8
};
#pragma section forcedata end
#pragma pop
