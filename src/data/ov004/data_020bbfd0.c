/* .data 0x020bbfd0..0x020bbfe4 */
extern unsigned char data_ov006_02134a0c[];
extern unsigned char data_ov006_02134a04[];
extern unsigned char data_ov006_02134a08[];
extern unsigned char data_ov006_02134a10[];
extern unsigned char data_ov006_02134a00[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bbfd0[5] = {
    (unsigned int)&data_ov006_02134a0c, (unsigned int)&data_ov006_02134a04, (unsigned int)&data_ov006_02134a08, (unsigned int)&data_ov006_02134a10, (unsigned int)&data_ov006_02134a00
};
#pragma section forcedata end
#pragma pop
