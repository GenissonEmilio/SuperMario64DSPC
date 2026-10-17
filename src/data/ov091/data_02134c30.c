/* .data 0x02134c30..0x02134c34 */
extern unsigned char gObjUpdnliftModelFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov091_02134c30[1] = {
    (unsigned int)&gObjUpdnliftModelFile
};
#pragma section forcedata end
#pragma pop
