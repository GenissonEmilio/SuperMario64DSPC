int AngleDiff(int a, int b){
  short d = (short)(a - b);
  if (d < 0) return -d;
  return d;
}

/* arm9-data-run 0x020994CC data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTV8dM3dGSph[2] ;
#pragma pop
/* end arm9-data-run 0x020994CC */
