/* .data 0x02138d28..0x02138d34 */
extern unsigned char data_ov006_02138d44[];
extern unsigned char data_ov006_02138d34[];
extern unsigned char data_ov006_02138d54[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138d28[3] = {
    (unsigned int)&data_ov006_02138d44, (unsigned int)&data_ov006_02138d34, (unsigned int)&data_ov006_02138d54
};
#pragma section forcedata end
#pragma pop
