/* .data 0x02111cc8..0x02111ce4 */
extern unsigned char data_ov052_02111e84[];
extern unsigned char data_ov052_02111c6c[];
extern unsigned char data_ov052_02111c84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov052_02111cc8[7] = {
    (unsigned int)&data_ov052_02111e84, (unsigned int)&data_ov052_02111c6c, 0x7310733, 0x7350734, (unsigned int)&data_ov052_02111c84, 0x6400001, 159
};
#pragma section forcedata end
#pragma pop
