/* .data 0x0213dd58..0x0213dd64 */
extern unsigned char data_ov006_0213df30[];
extern unsigned char data_ov006_0213e140[];
extern unsigned char data_ov006_0213e1fc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213dd58[3] = {
    (unsigned int)&data_ov006_0213df30, (unsigned int)&data_ov006_0213e140, (unsigned int)&data_ov006_0213e1fc
};
#pragma section forcedata end
#pragma pop
