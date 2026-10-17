/* .data 0x02133a70..0x02133a80 */
extern unsigned char data_ov006_02133ab0[];
extern unsigned char data_ov006_02133a98[];
extern unsigned char data_ov006_02133a80[];
extern unsigned char data_ov006_02133ac8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02133a70[4] = {
    (unsigned int)&data_ov006_02133ab0, (unsigned int)&data_ov006_02133a98, (unsigned int)&data_ov006_02133a80, (unsigned int)&data_ov006_02133ac8
};
#pragma section forcedata end
#pragma pop
