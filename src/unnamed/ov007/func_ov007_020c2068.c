extern int data_ov007_02103240[];
extern char* func_ov007_020c3df4(int,int);
extern void func_ov007_020c2024(char*);
char* func_ov007_020c2068(void){
  char* p=func_ov007_020c3df4((int)data_ov007_02103240,0x44);
  func_ov007_020c2024(p);
  return p;
}

int data_ov007_02103240[3] = {
    0x63756f74, 0x61705f68, 0x6c656e
};
