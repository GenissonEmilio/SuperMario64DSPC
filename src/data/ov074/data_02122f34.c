/* .data 0x02122f34..0x02122fe0 */
extern unsigned char data_ov009_02112404[];
extern unsigned char gKurikingAngerAnimationFile[];
extern unsigned char gKurikingDamageBAnimationFile[];
extern unsigned char data_ov009_0211244c[];
extern unsigned char gKurikingDamageFAnimationFile[];
extern unsigned char gKurikingDownStartAnimationFile[];
extern unsigned char data_ov010_02112464[];
extern unsigned char gKurikingDownAnimationFile[];
extern unsigned char data_ov010_021124c4[];
extern unsigned char gKurikingSerchWaitAnimationFile[];
extern unsigned char data_ov009_02112434[];
extern unsigned char gKurikingTurnAnimationFile[];
extern unsigned char data_ov010_021124ac[];
extern unsigned char data_ov074_02123030[];
extern unsigned char gKurikingWalkAnimationFile[];
extern unsigned char gKurikingWalkEndAnimationFile[];
extern unsigned char gKurikingWalkStartAnimationFile[];
extern unsigned char gKurikingSpawnAnimationFile[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov074_02122f38[1] = {
    (unsigned int)&data_ov009_02112404
};

unsigned int data_ov074_02122f34[1] = {
    (unsigned int)&gKurikingAngerAnimationFile
};

unsigned int data_ov074_02122f3c[41] = {
    0x40000000, (unsigned int)&gKurikingDamageBAnimationFile, (unsigned int)&data_ov009_0211244c, 0x40000000, (unsigned int)&gKurikingDamageFAnimationFile, (unsigned int)&data_ov009_0211244c, 0x40000000, (unsigned int)&gKurikingDownStartAnimationFile,
    (unsigned int)&data_ov010_02112464, 0x40000000, (unsigned int)&gKurikingDownAnimationFile, (unsigned int)&data_ov010_021124c4, 0, (unsigned int)&gKurikingSerchWaitAnimationFile, (unsigned int)&data_ov009_02112434, 0,
    (unsigned int)&gKurikingTurnAnimationFile, (unsigned int)&data_ov010_021124ac, 0x40000000, (unsigned int)&data_ov074_02123030, (unsigned int)&data_ov010_021124ac, 0, (unsigned int)&gKurikingWalkAnimationFile, (unsigned int)&data_ov010_021124ac,
    0, (unsigned int)&gKurikingWalkEndAnimationFile, (unsigned int)&data_ov010_021124ac, 0x40000000, (unsigned int)&gKurikingWalkStartAnimationFile, (unsigned int)&data_ov010_021124ac, 0x40000000, (unsigned int)&gKurikingSpawnAnimationFile,
    (unsigned int)&data_ov009_02112404, 0x40000000, (unsigned int)&data_ov074_02123030, (unsigned int)&data_ov010_021124ac, 0x40000000, 0, 0, 0,
    0
};
#pragma section forcedata end
#pragma pop
