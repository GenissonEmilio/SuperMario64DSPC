//cpp
// @symbol _ZN5Sound8EndMusicEj
//
// Resume the previous music for the active player. The six reconstructed
// callers pass only the player number; no second argument is consumed here.
extern "C" {
extern int data_0209b4ac;
extern unsigned char data_0209f250;
extern int data_0208e43c;
extern int data_0208e444;
extern int data_0208e440;
extern int data_0209b4a0[];
extern int func_02011dcc(int* g, int x);
extern void func_0204fa2c(int* g, int z);
}

namespace Sound {

void EndMusic(unsigned int j1)
{
  if(data_0209b4ac < 0) return;
  if(j1 != data_0209f250) return;
  int e43c = data_0208e43c;
  int e444 = data_0208e444;
  data_0209b4ac = e43c;
  if(e444 >= 0) return;
  int e440 = data_0208e440;
  if(e440 >= 0){ func_02011dcc(data_0209b4a0, e440); return; }
  if(e43c >= 0){ func_02011dcc(data_0209b4a0, e43c); return; }
  func_0204fa2c(data_0209b4a0, 0);
}

}
