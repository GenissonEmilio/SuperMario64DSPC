/* .data 0x02136e2c..0x02136e38 */
extern unsigned char data_ov006_02136e30[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02136e2c[1] = {
    (unsigned int)&data_ov006_02136e30
};

unsigned char data_ov006_02136e30[8] = {
    248, 0, 248, 65, 136, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
