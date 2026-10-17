/* .data 0x02111cb0..0x02111cc8 */
extern unsigned char data_ov052_0211186c[];
extern unsigned char data_ov052_02111868[];
extern unsigned char data_ov052_0211188c[];
extern unsigned char data_ov052_02111870[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov052_02111cb0[6] = {
    181, (unsigned int)&data_ov052_0211186c, (unsigned int)&data_ov052_02111868, (unsigned int)&data_ov052_0211188c, 1, (unsigned int)&data_ov052_02111870
};
#pragma section forcedata end
#pragma pop
