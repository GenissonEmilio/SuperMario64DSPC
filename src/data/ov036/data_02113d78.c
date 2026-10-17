/* .data 0x02113d78..0x02113d84 */
extern unsigned char gRcGuruguruModelFile[];
extern unsigned char gRcGuruguruCollisionFile[];
extern unsigned char data_ov036_02112ac8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov036_02113d78[3] = {
    (unsigned int)&gRcGuruguruModelFile, (unsigned int)&gRcGuruguruCollisionFile, (unsigned int)&data_ov036_02112ac8
};
#pragma section forcedata end
#pragma pop
