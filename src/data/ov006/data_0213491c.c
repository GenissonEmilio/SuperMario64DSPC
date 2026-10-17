/* .data 0x0213491c..0x02134920 */
extern unsigned char data_ov006_02134928[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213491c[1] = {
    (unsigned int)&data_ov006_02134928
};
#pragma section forcedata end
#pragma pop
