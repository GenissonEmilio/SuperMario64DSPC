extern unsigned int data_0209f4f8[3][16];

unsigned int ReadUnalignedInt(unsigned char *p){
return p[0] | (p[1]<<8) | (p[2]<<16) | (p[3]<<24);
}
