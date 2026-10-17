/* .data 0x0211cfd8..0x0211cfe8 */
extern unsigned char data_ov012_02112138[];
extern unsigned char gCtMechaObj02ModelFile[];
extern unsigned char gCtMechaObj02CollisionFile[];
extern unsigned char data_ov012_02112178[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov065_0211cfd8[4] = {
    (unsigned int)&data_ov012_02112138, (unsigned int)&gCtMechaObj02ModelFile, (unsigned int)&gCtMechaObj02CollisionFile, (unsigned int)&data_ov012_02112178
};
#pragma section forcedata end
#pragma pop
