/* .data 0x02138110..0x02138120 */
extern unsigned char data_ov006_02138150[];
extern unsigned char data_ov006_02138138[];
extern unsigned char data_ov006_02138120[];
extern unsigned char data_ov006_02138168[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138110[4] = {
    (unsigned int)&data_ov006_02138150, (unsigned int)&data_ov006_02138138, (unsigned int)&data_ov006_02138120, (unsigned int)&data_ov006_02138168
};
#pragma section forcedata end
#pragma pop
