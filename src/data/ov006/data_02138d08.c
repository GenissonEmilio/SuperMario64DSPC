/* .data 0x02138d08..0x02138d28 */
extern unsigned char data_ov006_02138cf0[];
extern unsigned char data_ov006_02138cd8[];
extern unsigned char data_ov006_02138cc0[];
extern unsigned char data_ov006_02138ca8[];
extern unsigned char data_ov006_02138c90[];
extern unsigned char data_ov006_02138c78[];
extern unsigned char data_ov006_02138c60[];
extern unsigned char data_ov006_02138c48[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138d08[8] = {
    (unsigned int)&data_ov006_02138cf0, (unsigned int)&data_ov006_02138cd8, (unsigned int)&data_ov006_02138cc0, (unsigned int)&data_ov006_02138ca8, (unsigned int)&data_ov006_02138c90, (unsigned int)&data_ov006_02138c78, (unsigned int)&data_ov006_02138c60, (unsigned int)&data_ov006_02138c48
};
#pragma section forcedata end
#pragma pop
