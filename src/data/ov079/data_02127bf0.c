/* .data 0x02127bf0..0x02127bf8 */
extern unsigned char gBattanCollisionFile[];
extern unsigned char gBattanKingCollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov079_02127bf0[2] = {
    (unsigned int)&gBattanCollisionFile, (unsigned int)&gBattanKingCollisionFile
};
#pragma section forcedata end
#pragma pop
