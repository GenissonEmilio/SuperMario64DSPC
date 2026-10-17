/* .data 0x0209a424..0x0209a42c */
extern unsigned char func_0206e254[];
extern unsigned char func_0206e240[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a424[2] = {
    (unsigned int)&func_0206e254, (unsigned int)&func_0206e240
};
#pragma section forcedata end
#pragma pop
