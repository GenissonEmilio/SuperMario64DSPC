/* .data 0x020bc5bc..0x020bc5d0 */
extern unsigned char data_ov004_020ba010[];
extern unsigned char data_ov004_020b9eec[];
extern unsigned char data_ov004_020b9e94[];
extern unsigned char data_ov004_020b9fa4[];
extern unsigned char data_ov004_020b9ef4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc5bc[5] = {
    (unsigned int)&data_ov004_020ba010, (unsigned int)&data_ov004_020b9eec, (unsigned int)&data_ov004_020b9e94, (unsigned int)&data_ov004_020b9fa4, (unsigned int)&data_ov004_020b9ef4
};
#pragma section forcedata end
#pragma pop
