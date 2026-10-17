const int data_020755d4[3] = {0x0007d000, 0x0007d000, 0x0007d000};

/* data 0x02092128..0x0209212c */
#pragma force_active on
#pragma explicit_zero_data on
unsigned char data_02092128[4] = { 0, 1, 2, 3 };
#pragma explicit_zero_data off
#pragma force_active off
extern signed char data_0209f2f8;
extern unsigned char data_0209230c[];
extern unsigned char data_0209252c[];
extern unsigned char data_02092390[];
extern unsigned char data_0209253c[];
extern unsigned char data_02092348[];
extern unsigned char data_0209233c[];
extern unsigned char data_0209242c[];
extern unsigned char data_0209254c[];
extern unsigned char data_020924cc[];
extern unsigned char data_0209247c[];
extern unsigned char data_020922f0[];
extern unsigned char data_02092438[];
extern unsigned char data_0209249c[];
extern unsigned char data_020922d8[];
extern unsigned char data_02092378[];
extern unsigned char data_020922e8[];
extern unsigned char data_02092444[];
extern unsigned char data_02092384[];
extern unsigned char data_020923c0[];
extern unsigned char data_02092354[];
extern unsigned char data_0209236c[];
extern unsigned char data_020923cc[];
extern unsigned char data_02092330[];
extern unsigned char data_02092414[];
extern unsigned char data_020923f0[];
extern unsigned char data_020923fc[];
extern unsigned char data_0209246c[];
extern unsigned char data_02092408[];
extern unsigned char data_0209251c[];
extern unsigned char data_0209255c[];
extern unsigned char data_020922e0[];
extern unsigned char data_02092300[];
extern unsigned char data_02092318[];
extern unsigned char data_020924ac[];
extern unsigned char data_020924ec[];
extern unsigned char data_020923b4[];
extern unsigned char data_02092450[];
extern unsigned char data_020923d8[];
extern unsigned char data_020923e4[];
extern unsigned char data_020923a8[];
extern unsigned char data_02092420[];
extern unsigned char data_02092570[];
extern unsigned char data_02092324[];
extern unsigned char data_02092360[];
extern unsigned char data_020924bc[];
extern unsigned char data_020924fc[];
extern unsigned char data_0209245c[];
extern unsigned char data_020924dc[];
extern unsigned char data_0209248c[];
extern unsigned char data_0209250c[];
extern unsigned char data_0209239c[];
extern unsigned char data_020922f8[];

#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02092584[52] = {
    (unsigned int)&data_0209230c, (unsigned int)&data_0209252c, (unsigned int)&data_02092390, (unsigned int)&data_0209253c, (unsigned int)&data_02092348, (unsigned int)&data_0209233c, (unsigned int)&data_0209242c, (unsigned int)&data_0209254c,
    (unsigned int)&data_020924cc, (unsigned int)&data_0209247c, (unsigned int)&data_020922f0, (unsigned int)&data_02092438, (unsigned int)&data_0209249c, (unsigned int)&data_020922d8, (unsigned int)&data_02092378, (unsigned int)&data_020922e8,
    (unsigned int)&data_02092444, (unsigned int)&data_02092384, (unsigned int)&data_020923c0, (unsigned int)&data_02092354, (unsigned int)&data_0209236c, (unsigned int)&data_020923cc, (unsigned int)&data_02092330, (unsigned int)&data_02092414,
    (unsigned int)&data_020923f0, (unsigned int)&data_020923fc, (unsigned int)&data_0209246c, (unsigned int)&data_02092408, (unsigned int)&data_0209251c, (unsigned int)&data_0209255c, (unsigned int)&data_020922e0, (unsigned int)&data_02092300,
    (unsigned int)&data_02092318, (unsigned int)&data_020924ac, (unsigned int)&data_020924ec, (unsigned int)&data_020923b4, (unsigned int)&data_02092450, (unsigned int)&data_020923d8, (unsigned int)&data_020923e4, (unsigned int)&data_020923a8,
    (unsigned int)&data_02092420, (unsigned int)&data_02092570, (unsigned int)&data_02092324, (unsigned int)&data_02092360, (unsigned int)&data_020924bc, (unsigned int)&data_020924fc, (unsigned int)&data_0209245c, (unsigned int)&data_020924dc,
    (unsigned int)&data_0209248c, (unsigned int)&data_0209250c, (unsigned int)&data_0209239c, (unsigned int)&data_020922f8
};
#pragma section forcedata end
extern int data_02092654;
void* func_0202e118(void){
  signed char i = data_0209f2f8;
  return (unsigned)i < 0x34 ? data_02092584[i] : (void*)&data_02092654;
}

short data_0209f4a0[1];
extern unsigned int data_0209f260[1];
extern unsigned char data_0209f228[4];
