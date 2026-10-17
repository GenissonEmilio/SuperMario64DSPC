/* .data 0x0211172c..0x02111734 */
extern unsigned char data_ov058_02111744[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov058_0211172c[2] = {
    256, (unsigned int)&data_ov058_02111744
};
#pragma section forcedata end
#pragma pop
