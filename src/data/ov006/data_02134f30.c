/* .data 0x02134f30..0x02134f60 */
extern unsigned char data_ov006_02134f34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02134f30[1] ;

unsigned char data_ov006_02134f34[44] = {
    248, 0, 248, 1, 29, 1, 0, 0, 248, 0, 240, 1,
    29, 1, 0, 0, 248, 0, 232, 1, 29, 1, 0, 0,
    248, 0, 224, 1, 29, 1, 0, 0, 248, 0, 216, 1,
    29, 1, 0, 0, 248, 0, 208, 1
};
#pragma section forcedata end
#pragma pop
