/* .data 0x02111c84..0x02111c90 */
extern unsigned char data_ov052_02111c74[];
extern unsigned char data_ov052_02111cb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov052_02111c84[3] = {
    (unsigned int)&data_ov052_02111c74, (unsigned int)&data_ov052_02111cb0, 0x27100000
};
#pragma section forcedata end
#pragma pop
