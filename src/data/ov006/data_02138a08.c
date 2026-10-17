/* .data 0x02138a08..0x02138a10 */
extern unsigned char data_ov006_02138a00[];
extern unsigned char data_ov006_021389f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138a08[2] = {
    (unsigned int)&data_ov006_02138a00, (unsigned int)&data_ov006_021389f8
};
#pragma section forcedata end
#pragma pop
