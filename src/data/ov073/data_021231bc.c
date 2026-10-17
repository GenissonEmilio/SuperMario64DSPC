/* .data 0x021231bc..0x021231c0 */
extern unsigned char gEwbIceAModelFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_021231bc[1] = {
    (unsigned int)&gEwbIceAModelFile
};
#pragma section forcedata end
#pragma pop
