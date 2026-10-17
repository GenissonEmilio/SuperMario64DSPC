struct S { int a, b, c; };
extern struct S data_0209d3c4[];
void func_02017e60(void){
  unsigned int i;
  struct S *p = data_0209d3c4;
  for(i=0;i<12;i++,p++){
    p->a=-1; p->b=0; p->c=0;
  }
}

/* arm9-data-run 0x0208EBAC data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_0208ec4c[5] ;
extern unsigned int data_0208ec38[5] ;
extern unsigned int data_0208ec24[5] ;
extern unsigned int data_0208ec10[5] ;
extern unsigned int data_0208ebfc[5] ;
extern unsigned int data_0208ebe8[5] ;
extern unsigned int data_0208ebd4[5] ;
extern unsigned int data_0208ebc0[5] ;
extern unsigned int data_0208ebac[5] ;
extern unsigned int data_0208ec60[5] ;
#pragma pop
/* end arm9-data-run 0x0208EBAC */
