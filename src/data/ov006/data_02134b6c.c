/* .data 0x02134b6c..0x02134b78 */
extern unsigned char data_ov006_02134bf0[];
extern unsigned char data_ov006_02134cb0[];
extern unsigned char data_ov006_02134c68[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134b6c[3] = {
    (unsigned int)&data_ov006_02134bf0, (unsigned int)&data_ov006_02134cb0, (unsigned int)&data_ov006_02134c68
};
#pragma section forcedata end
#pragma pop
