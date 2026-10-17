/* .data 0x02087694..0x0208769c */
extern unsigned char data_02087df0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087694[2] = {
    7, (unsigned int)&data_02087df0
};
#pragma section forcedata end
#pragma pop
