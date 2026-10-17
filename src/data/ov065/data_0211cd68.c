/* .data 0x0211cd68..0x0211cd84 */
extern unsigned char data_ov065_0211cf64[];
extern unsigned char data_ov065_0211cf44[];
extern unsigned char data_ov065_0211cf24[];
extern unsigned char data_ov065_0211cf04[];
extern unsigned char data_ov065_0211cee4[];
extern unsigned char data_ov065_0211cec4[];
extern unsigned char data_ov065_0211cf84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov065_0211cd68[7] = {
    (unsigned int)&data_ov065_0211cf64, (unsigned int)&data_ov065_0211cf44, (unsigned int)&data_ov065_0211cf24, (unsigned int)&data_ov065_0211cf04, (unsigned int)&data_ov065_0211cee4, (unsigned int)&data_ov065_0211cec4, (unsigned int)&data_ov065_0211cf84
};
#pragma section forcedata end
#pragma pop
