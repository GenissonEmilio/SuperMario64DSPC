/* .data 0x0213a4b0..0x0213a4c0 */
extern unsigned char data_ov006_0213a4a8[];
extern unsigned char data_ov006_0213a4a0[];
extern unsigned char data_ov006_0213a498[];
extern unsigned char data_ov006_0213a490[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213a4b0[4] = {
    (unsigned int)&data_ov006_0213a4a8, (unsigned int)&data_ov006_0213a4a0, (unsigned int)&data_ov006_0213a498, (unsigned int)&data_ov006_0213a490
};
#pragma section forcedata end
#pragma pop
