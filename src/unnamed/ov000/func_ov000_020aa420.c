extern int data_0209d574;
extern int data_020a6134[];
extern int data_ov000_020bd4b8[];
extern int func_0201a9ec(int* p);
extern int func_02018a58(int n);
extern int func_02057e7c(int p);
extern int func_02057e84(int p, int v);
extern int func_020189f0(int a);
extern void func_02018a40(unsigned i, int v);
extern int func_0201a9fc(int* p);
extern int func_0201a96c(int* self, int newVal);
void func_ov000_020aa420(void){
  int sb=func_0201a9ec(&data_0209d574);
  func_02018a58(0x80a);
  int r8=data_020a6134[2];
  int r7=func_02057e7c(r8);
  func_02057e84(r8,0x1f);
  int i;
  for(i=0;i<0x80a;i++){
    int v=func_020189f0(data_ov000_020bd4b8[i]);
    if(v) func_02018a40(i,v);
  }
  func_02057e84(r8,r7);
  func_0201a9fc(&data_0209d574);
  func_0201a96c(&data_0209d574,sb);
}

/* .data 0x020aa4e0..0x020aa5a0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
int data_ov000_020aa580[4] = {
    0x722f474d, 0x656c756f, 0x2e657474, 0x00646d62,
};
int data_ov000_020aa570[4] = {
    0x662f474d, 0x5f656361, 0x2e6e6977, 0x00616362,
};
int data_ov000_020aa560[4] = {
    0x652f474d, 0x635f7073, 0x2e647261, 0x00707462,
};
int data_ov000_020aa550[4] = {
    0x652f474d, 0x695f7073, 0x2e656972, 0x00646d62,
};
int data_ov000_020aa540[4] = {
    0x652f474d, 0x635f7073, 0x2e647261, 0x00646d62,
};
int data_ov000_020aa530[4] = {
    0x662f474d, 0x7261705f, 0x622e7374, 0x0000646d,
};
int data_ov000_020aa520[4] = {
    0x6c2f474d, 0x69676975, 0x622e645f, 0x0000646d,
};
int data_ov000_020aa510[4] = {
    0x6b2f474d, 0x5f6f6e69, 0x6d622e64, 0x00000064,
};
int data_ov000_020aa500[4] = {
    0x722f474d, 0x41676e69, 0x646d622e, 0x00000000,
};
int data_ov000_020aa4f0[4] = {
    0x722f474d, 0x43676e69, 0x646d622e, 0x00000000,
};
int data_ov000_020aa4e0[4] = {
    0x722f474d, 0x42676e69, 0x646d622e, 0x00000000,
};
int data_ov000_020aa590[4] = {
    0x662f474d, 0x5f656361, 0x2e6e6977, 0x00707462,
};
#pragma section forcedata end
