
/* data 0x0208ee00..0x0208ee04 */
#pragma explicit_zero_data on
unsigned char data_0208ee00[4] = { 1, 0, 0, 0 };
#pragma explicit_zero_data off

extern void func_020190b8(void);

void Enable3dEngines(void){
  func_020190b8();
  *(volatile unsigned short*)0x4000304 |= 8;
  *(volatile unsigned short*)0x4000304 |= 4;
  data_0208ee00[0] = 1;
}
