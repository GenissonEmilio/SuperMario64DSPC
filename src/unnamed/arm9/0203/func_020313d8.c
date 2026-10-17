signed char data_0209f30c;
/* func_020313d8 - calls func_02031b84 (the glyph emitter Message3.cpp's text
 * loop uses for an ordinary character) twice, with a font-encoded char and char+1.
 * Reads index from data_0209fd0c bytes [3] and [4], looks up in data_02092810.
 * Attempt 3: correct types - S* (not S**), AddChar(int), u16 idx, reversed load order.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern void func_02031b84(int c);

struct MsgTextChar {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 indexHi;  /* offset 3 */
    u8 indexLo;  /* offset 4 */
};
extern struct MsgTextChar* data_0209fd0c;
extern u8 data_02092810[];

void func_020313d8(void) {
    struct MsgTextChar* state = data_0209fd0c;
    u16 idx = state->indexLo | (state->indexHi << 8);
    func_02031b84(data_02092810[idx]);
    func_02031b84((data_02092810[idx] + 1) & 0xff);
}

extern unsigned int data_0209fca4[1];
/* arm9-data-run 0x020991C8 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTI5dBgCh[4] ;
#pragma pop
/* end arm9-data-run 0x020991C8 */
extern u8 data_02092810[8] ;
