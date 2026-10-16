unsigned char data_0208ee74[12] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x00
};
typedef struct { int a; int b; int c,d,e; } AR;
extern void func_02018908(int,int);
extern AR data_0208ecf4[];
void UnloadArchives(void){
  unsigned int i;
  AR* p = data_0208ecf4;
  for (i = 0; i < 0xd; i++) {
    if (p->a != 0) {
      func_02018908(p->a, p->b);
      p->a = 0;
    }
    p++;
  }
}
