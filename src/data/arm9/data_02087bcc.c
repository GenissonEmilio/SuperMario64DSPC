/* .data 0x02087bcc..0x02087c00 */
extern unsigned char data_ov006_02140000[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087bcc[13] = {
    0x2e08, (unsigned int)&data_ov006_02140000, 15, 0x5b000000, 0x46150001, 0xf2e0001, 0xff000004U, 0x6ff,
    0, 0xb0d0000, 0xcc00cc, 0x20008, 0
};
#pragma section forcedata end
#pragma pop
