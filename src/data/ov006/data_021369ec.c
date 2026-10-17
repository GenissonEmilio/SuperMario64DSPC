/* .data 0x021369ec..0x021369f8 */
extern unsigned char data_ov006_02136a08[];
extern unsigned char data_ov006_021369f8[];
extern unsigned char data_ov006_02136a18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021369ec[3] = {
    (unsigned int)&data_ov006_02136a08, (unsigned int)&data_ov006_021369f8, (unsigned int)&data_ov006_02136a18
};
#pragma section forcedata end
#pragma pop
