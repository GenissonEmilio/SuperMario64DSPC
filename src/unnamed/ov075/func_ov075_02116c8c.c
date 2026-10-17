#include "types.h"
extern void PrepareVsMode(void);
extern void LoadLevelNoReturn(u32 levelID, u32 arg1, u32 arg2, u32 arg3);
extern void _ZN5Sound22StopLoadedMusic_Layer1Ej(unsigned int);
extern unsigned char data_0209b2e4[];
extern signed char data_ov075_0211c6ec[];
extern unsigned char data_02092778[];
void func_ov075_02116c8c(void) {
    PrepareVsMode();
    unsigned char idx = data_0209b2e4[0];
    LoadLevelNoReturn((u32)(signed int)data_ov075_0211c6ec[idx], 0, 2, 0);
    _ZN5Sound22StopLoadedMusic_Layer1Ej(0x3c);
    data_02092778[0] = 1;
}

signed char data_ov075_0211c6ec[4] = {0x33, 0x2b, 0x1d, 0x2a};
/* .data 0x0211c8e0..0x0211c94c */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern int _ZTI10dScEntry_c[3] ;
extern int _ZTIN10dScEntry_c6icon_cE[3] = {
    0x0209a764, 0x0211ca1c, 0x020ad478,
int _ZTIN10dScEntry_c15graphCallback_cE[3] = {
    0x0209a764, 0x0211cb44, 0x0208ee04,
int data_ov075_0211c914[4] = {
    0x00088018, 0x0000e282, 0x41f80018, (int)0xffffe280u,
int _ZTS10dScEntry_c[4] = {
    0x53643031, 0x746e4563, 0x635f7972, 0x00000000,
int data_ov075_0211c924[4] = {
    0x001d0010, 0x0000e11d, 0x00130009, (int)0xffffe11eu,
int data_ov075_0211c934[6] = {
    0x11cb0010, 0x0000e11d, 0x11d50009, (int)0xffffe11eu, 0x00000000, 0x0211c8e0,
#pragma section forcedata end
