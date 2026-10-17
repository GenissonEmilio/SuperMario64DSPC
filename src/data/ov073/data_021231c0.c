/* .data 0x021231c0..0x021231c4 */
extern unsigned char gEwbIceACollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_021231c0[1] = {
    (unsigned int)&gEwbIceACollisionFile
};
#pragma section forcedata end
#pragma pop
