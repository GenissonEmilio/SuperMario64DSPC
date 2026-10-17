/* func_ov075_02118a78 @ 0x2118a78 (ov075) -- tail-call veneer to func_020308b4 (0x20308b4).
 * ldr ip, [pc]; bx ip; .word 0x20308b4
 */
extern void func_020308b4(void);

void func_ov075_02118a78(void) {
    func_020308b4();
}

/* .data 0x0211cb80..0x0211cb84 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
int data_ov075_0211cb80[1] = {
    0x0211d21c,
};
#pragma section forcedata end
