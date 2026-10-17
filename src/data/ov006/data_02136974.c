/* .data 0x02136974..0x02136980 */
extern unsigned char data_ov006_02136990[];
extern unsigned char data_ov006_02136980[];
extern unsigned char data_ov006_021369a0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02136974[3] = {
    (unsigned int)&data_ov006_02136990, (unsigned int)&data_ov006_02136980, (unsigned int)&data_ov006_021369a0
};
#pragma section forcedata end
#pragma pop
