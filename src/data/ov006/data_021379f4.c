/* .data 0x021379f4..0x02137a00 */
extern unsigned char data_ov006_021379f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021379f4[1] = {
    (unsigned int)&data_ov006_021379f8
};

unsigned char data_ov006_021379f8[8] = {
    248, 0, 248, 65, 150, 113, 255, 255
};
#pragma section forcedata end
#pragma pop
