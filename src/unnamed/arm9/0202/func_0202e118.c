const int data_020755d4[3] = {0x0007d000, 0x0007d000, 0x0007d000};

/* data 0x02092128..0x0209212c */
#pragma force_active on
#pragma explicit_zero_data on
unsigned char data_02092128[4] = { 0, 1, 2, 3 };
#pragma explicit_zero_data off
#pragma force_active off
extern signed char data_0209f2f8;
extern void* data_02092584[];
extern int data_02092654;
void* func_0202e118(void){
  signed char i = data_0209f2f8;
  return (unsigned)i < 0x34 ? data_02092584[i] : (void*)&data_02092654;
}

short data_0209f4a0[1];
