/* .rodata 0x021136d4..0x021136ec */
extern unsigned char gKiFuneUpCollisionFile[];
extern unsigned char gKiFuneDownACollisionFile[];
extern unsigned char gKiFuneUpModelFile[];
extern unsigned char gKiFuneDownAModelFile[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern unsigned int data_ov016_021136dc[2] ;

extern unsigned char data_ov016_021136d4[8] ;

extern unsigned int data_ov016_021136e4[2] ;
#pragma section forcerodata end
