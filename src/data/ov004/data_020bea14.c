/* .data 0x020bea14..0x020bea28 */
extern unsigned char data_ov004_020bea0c[];
extern unsigned char data_ov004_020bea04[];
extern unsigned char data_ov004_020be9fc[];
extern unsigned char data_ov004_020be9f4[];
extern unsigned char data_ov004_020be9ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bea14[5] = {
    (unsigned int)&data_ov004_020bea0c, (unsigned int)&data_ov004_020bea04, (unsigned int)&data_ov004_020be9fc, (unsigned int)&data_ov004_020be9f4, (unsigned int)&data_ov004_020be9ec
};
#pragma section forcedata end
#pragma pop
