/* .data 0x0214e18c..0x0214e190 */
extern unsigned char gKiIwaCollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov102_0214e18c[1] = {
    (unsigned int)&gKiIwaCollisionFile
};
#pragma section forcedata end
#pragma pop
