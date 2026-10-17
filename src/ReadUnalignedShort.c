extern unsigned char data_0209f2d0;

short ReadUnalignedShort(unsigned char *p){
return (short)(p[0] | (p[1]<<8));
}
