/* .data 0x02134c34..0x02134c38 */
extern unsigned char gObjUpdnliftCollisionFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov091_02134c34[1] = {
    (unsigned int)&gObjUpdnliftCollisionFile
};
#pragma section forcedata end
#pragma pop
