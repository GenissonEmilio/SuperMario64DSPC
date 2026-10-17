/* .data 0x02134b84..0x02134b90 */
extern unsigned char data_ov006_02134c08[];
extern unsigned char data_ov006_02134bd8[];
extern unsigned char data_ov006_02134c20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134b84[3] = {
    (unsigned int)&data_ov006_02134c08, (unsigned int)&data_ov006_02134bd8, (unsigned int)&data_ov006_02134c20
};
#pragma section forcedata end
#pragma pop
