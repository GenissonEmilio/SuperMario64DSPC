/* .data 0x0213e528..0x0213e530 */
extern unsigned char data_ov006_0213e500[];
extern unsigned char data_ov006_0213e540[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213e528[2] = {
    (unsigned int)&data_ov006_0213e500, (unsigned int)&data_ov006_0213e540
};
#pragma section forcedata end
#pragma pop
