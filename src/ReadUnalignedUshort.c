extern signed char data_0209f2f4;

unsigned short ReadUnalignedUshort(unsigned char *p){
return (unsigned short)(p[0] | (p[1]<<8));
}
