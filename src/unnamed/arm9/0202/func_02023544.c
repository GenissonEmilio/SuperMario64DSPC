
/* data 0x02092110..0x02092114 */
#pragma force_active on
#pragma explicit_zero_data on
unsigned char data_02092110[4] = { 255, 0, 0, 0 };
#pragma explicit_zero_data off
#pragma force_active off

extern unsigned char data_0209f1e0;
extern unsigned char data_0209b2fc;
extern unsigned char gMgSaveDirty;
extern void func_0202fd2c(void);
extern void func_0202ed48(void);
extern void func_02011c8c(void);
extern int GetSoundMode(void);
extern void SetSoundMode(int mode);

void func_02023544(void)
{
    data_0209f1e0 = 0;
    func_0202fd2c();
    data_0209b2fc = 0;
    gMgSaveDirty = 0;
    func_0202ed48();
    func_02011c8c();
    SetSoundMode(GetSoundMode());
}
