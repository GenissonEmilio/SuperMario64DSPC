/* .data 0x02134d1c..0x02134d28 */
extern unsigned char data_ov006_02134d20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134d1c[1] = {
    (unsigned int)&data_ov006_02134d20
};

unsigned char data_ov006_02134d20[8] = {
    248, 0, 248, 65, 30, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
