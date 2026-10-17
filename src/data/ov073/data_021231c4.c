/* .data 0x021231c4..0x021231e8 */
extern unsigned char data_ov008_0211153c[];
extern unsigned char gEwbIceBModelFile[];
extern unsigned char gEwbIceBCollisionFile[];
extern unsigned char data_ov008_0211155c[];
extern unsigned char gEwbIceCModelFile[];
extern unsigned char gEwbIceCCollisionFile[];
extern unsigned char data_ov008_0211159c[];
extern unsigned char _ZTI13daObjEwbIce_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov073_021231c4[9] = {
    (unsigned int)&data_ov008_0211153c, (unsigned int)&gEwbIceBModelFile, (unsigned int)&gEwbIceBCollisionFile, (unsigned int)&data_ov008_0211155c, (unsigned int)&gEwbIceCModelFile, (unsigned int)&gEwbIceCCollisionFile, (unsigned int)&data_ov008_0211159c, 0,
    (unsigned int)&_ZTI13daObjEwbIce_c
};
#pragma section forcedata end
#pragma pop
