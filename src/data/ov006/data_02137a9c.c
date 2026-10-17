/* .data 0x02137a9c..0x02137aa8 */
extern unsigned char data_ov006_02137a94[];
extern unsigned char data_ov006_02137a8c[];
extern unsigned char data_ov006_02137a84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02137a9c[3] = {
    (unsigned int)&data_ov006_02137a94, (unsigned int)&data_ov006_02137a8c, (unsigned int)&data_ov006_02137a84
};
#pragma section forcedata end
#pragma pop
