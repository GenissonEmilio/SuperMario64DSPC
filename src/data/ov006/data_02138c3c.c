/* .data 0x02138c3c..0x02138c40 */
extern unsigned char data_ov006_02138c40[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138c3c[1] = {
    (unsigned int)&data_ov006_02138c40
};
#pragma section forcedata end
#pragma pop
