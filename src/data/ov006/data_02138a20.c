/* .data 0x02138a20..0x02138a28 */
extern unsigned char data_ov006_02138a18[];
extern unsigned char data_ov006_02138a10[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138a20[2] = {
    (unsigned int)&data_ov006_02138a18, (unsigned int)&data_ov006_02138a10
};
#pragma section forcedata end
#pragma pop
