/* .data 0x02139c38..0x02139c3c */
extern unsigned char data_ov006_02139c3c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02139c38[1] = {
    (unsigned int)&data_ov006_02139c3c
};
#pragma section forcedata end
#pragma pop
