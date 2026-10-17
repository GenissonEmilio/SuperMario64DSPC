/* .data 0x021374a4..0x021374a8 */
extern unsigned char gObjSeesawCollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov095_021374a4[1] = {
    (unsigned int)&gObjSeesawCollisionFile
};
#pragma section forcedata end
#pragma pop
