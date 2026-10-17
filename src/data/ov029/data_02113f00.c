/* .data 0x02113f00..0x02113f0c */
extern unsigned char gWcObj06ModelFile[];
extern unsigned char gWcObj06CollisionFile[];
extern unsigned char data_ov029_0211308c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov029_02113f00[3] = {
    (unsigned int)&gWcObj06ModelFile, (unsigned int)&gWcObj06CollisionFile, (unsigned int)&data_ov029_0211308c
};
#pragma section forcedata end
#pragma pop
