/* .data 0x0211cfd4..0x0211cfd8 */
extern unsigned char gCtMechaObj01CollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov065_0211cfd4[1] = {
    (unsigned int)&gCtMechaObj01CollisionFile
};
#pragma section forcedata end
#pragma pop
