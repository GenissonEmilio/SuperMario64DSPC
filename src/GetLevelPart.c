/* GetLevelPart at 0x02013548
 *
 * Matched byte-for-byte with mwccarm 1.2/sp2p3 (arm9 main).
 */

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
signed char data_02075264[52] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1,
    0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1,
    0, 1, 0, 0
};
#pragma section forcerodata end
signed char GetLevelPart(int idx) {
    return data_02075264[idx];
}
