/* .data 0x02137a0c..0x02137a18 */
extern unsigned char data_ov006_02137a28[];
extern unsigned char data_ov006_02137a18[];
extern unsigned char data_ov006_02137a38[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02137a0c[3] = {
    (unsigned int)&data_ov006_02137a28, (unsigned int)&data_ov006_02137a18, (unsigned int)&data_ov006_02137a38
};
#pragma section forcedata end
#pragma pop
