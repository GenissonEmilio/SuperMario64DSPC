/* .data 0x02133a5c..0x02133a60 */
extern unsigned char data_ov006_02133a60[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02133a5c[1] = {
    (unsigned int)&data_ov006_02133a60
};
#pragma section forcedata end
#pragma pop
