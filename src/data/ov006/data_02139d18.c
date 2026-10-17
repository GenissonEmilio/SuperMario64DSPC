/* .data 0x02139d18..0x02139d1c */
extern unsigned char data_ov006_02139d1c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02139d18[1] = {
    (unsigned int)&data_ov006_02139d1c
};
#pragma section forcedata end
#pragma pop
