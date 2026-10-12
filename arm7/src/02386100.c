// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x02386100 size 0x70 (runtime 0x037FDF98, wram)
// C tried by: AH17, AM17, AR52, AR9; asm taken from the AH17 branch. PLACEHOLDER: AH17 (fn_02386100) still running; replace with its result when it lands.
/* storage 0x02386100 runtime 0x037FDF98 size 0x6C wram ARM.
 * SND_SetTrackMute(player, trackMask, data): for each set track bit, call
 * fn_023859CC (PlayerGetTrack), write the halfword to track+0x1E, then set
 * bit 7 of the status byte at track+0 (mute flag).
 * Whole-asm: the mask (R3) and the loop counter (R12) stay in caller-saved
 * registers across BL fn_023859CC, and the halfword stays in R2 — only
 * possible when the caller knows the leaf clobbers nothing but R0/R1.
 * b56 models every call as a full caller-saved clobber (verified on
 * 02385F2C this session: static and extern callees, inline-asm bl, and
 * leaf/pure attributes all stage args through callee-saved regs), so no
 * C spelling produces the {R4,LR}-only frame (~30 variants across
 * AM17/AR9/AR52, best 0x78). Pool +0x6C: unk_3807B04 (SNDi_Work.players). */

extern unsigned char *fn_023859CC(int, int); /* =0x037FD864 */
extern unsigned char unk_3807B04[];

asm void fn_02386100(int player, unsigned int trackMask, unsigned int data) {
    STMDB SP!, {R4, LR}
    MOV R3, R1
    LDR R12, =unk_3807B04
    MOV R1, #0x24
    MLA R4, R0, R1, R12
    MOV R12, #0
    MOV R0, R2, LSL#16
    MOV R2, R0, LSR#16
    B test
loop:
    ANDS R0, R3, #1
    BEQ next
    MOV R0, R4
    MOV R1, R12
    BL fn_023859CC
    CMP R0, #0
    STRNEH R2, [R0, #0x1E]
    LDRNEB R1, [R0]
    ORRNE R1, R1, #0x80
    STRNEB R1, [R0]
next:
    ADD R12, R12, #1
    MOV R3, R3, LSR#1
test:
    CMP R12, #0x10
    BGE done
    CMP R3, #0
    BNE loop
done:
    LDMIA SP!, {R4, LR}
    BX LR
}
