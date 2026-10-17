/* GetLevelPart at 0x02013548
 *
 * Matched byte-for-byte with mwccarm 1.2/sp2p3 (arm9 main).
 */

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
extern signed char data_02075264[52] ;
#pragma section forcerodata end
signed char GetLevelPart(int idx) {
    return data_02075264[idx];
}

/* arm9-data-run 0x02087C68 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_02087ed0[14] ;
extern unsigned int data_02087e98[14] ;
extern unsigned int data_02087e60[14] ;
extern unsigned int data_02087e28[14] ;
extern unsigned int data_02087df0[14] ;
extern unsigned int data_02087db8[14] ;
extern unsigned int data_02087d80[14] ;
extern unsigned int data_02087d48[14] ;
extern unsigned int data_02087d10[14] ;
extern unsigned int data_02087cd8[14] ;
extern unsigned int data_02087ca0[14] ;
extern unsigned int data_02087c68[14] ;
extern unsigned int data_02087f08[14] ;
#pragma pop
/* end arm9-data-run 0x02087C68 */
