/* .data 0x02138a40..0x02138a48 */
extern unsigned char data_ov006_02138a48[];
extern unsigned char data_ov006_02138a68[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138a40[2] = {
    (unsigned int)&data_ov006_02138a48, (unsigned int)&data_ov006_02138a68
};
#pragma section forcedata end
#pragma pop
