/* .data 0x02138260..0x02138270 */
extern unsigned char data_ov006_021382a0[];
extern unsigned char data_ov006_02138288[];
extern unsigned char data_ov006_02138270[];
extern unsigned char data_ov006_021382b8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02138260[4] = {
    (unsigned int)&data_ov006_021382a0, (unsigned int)&data_ov006_02138288, (unsigned int)&data_ov006_02138270, (unsigned int)&data_ov006_021382b8
};
#pragma section forcedata end
#pragma pop
