/* .data 0x02087544..0x0208754c */
extern unsigned char data_020883d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087544[2] = {
    9, (unsigned int)&data_020883d0
};
#pragma section forcedata end
#pragma pop
