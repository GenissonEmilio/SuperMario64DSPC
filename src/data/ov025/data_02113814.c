/* .data 0x02113814..0x02113820 */
extern unsigned char gDonkakuModelFile[];
extern unsigned char gDonkakuCollisionFile[];
extern unsigned char data_ov025_02112d28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov025_02113814[3] = {
    (unsigned int)&gDonkakuModelFile, (unsigned int)&gDonkakuCollisionFile, (unsigned int)&data_ov025_02112d28
};
#pragma section forcedata end
#pragma pop
