/* .data 0x02134b78..0x02134b84 */
extern unsigned char data_ov006_02134c80[];
extern unsigned char data_ov006_02134c50[];
extern unsigned char data_ov006_02134c38[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134b78[3] = {
    (unsigned int)&data_ov006_02134c80, (unsigned int)&data_ov006_02134c50, (unsigned int)&data_ov006_02134c38
};
#pragma section forcedata end
#pragma pop
