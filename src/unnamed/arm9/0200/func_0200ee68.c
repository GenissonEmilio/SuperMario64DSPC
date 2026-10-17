extern int data_0209fc48;
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern int data_020889b0[26] ;
#pragma section forcedata end
int func_0200ee68(void){
return data_0209fc48 == (int)&data_020889b0;
}
