/* .data 0x0211227c..0x02112288 */
extern unsigned char data_ov010_02112520[];
extern unsigned char data_ov010_02112470[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_0211227c[3] = {
    (unsigned int)&data_ov010_02112520, 0xa05, (unsigned int)&data_ov010_02112470
};
#pragma section forcedata end
#pragma pop
