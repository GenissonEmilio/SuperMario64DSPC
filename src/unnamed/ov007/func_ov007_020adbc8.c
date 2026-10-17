extern int func_ov007_020c3d1c();
extern int func_ov007_020c937c();
int func_ov007_020adbc8(char* c){
  unsigned char x = *(unsigned char*)(c+8);
  if(x==1 || x==5)
    func_ov007_020c3d1c(*(int*)(*(int*)(c+4)+0x10));
  func_ov007_020c937c(*(int*)c);
  return func_ov007_020c3d1c(c);
}

/* .rodata 0x020ccc20..0x020ccc44 */
#pragma force_active on
#pragma cplusplus on
extern "C" {
extern const unsigned int data_ov007_020ccc20[];
const unsigned int data_ov007_020ccc20[9] = {
    0x00000000u, 0x0000000bu, 0x0000000cu, 0x0000000du,
    0x00000000u, 0x0000000eu, 0x0000000fu, 0x00000010u,
    0x00000000u,
};
}
#pragma cplusplus off
#pragma force_active off
