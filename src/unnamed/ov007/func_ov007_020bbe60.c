#include "types.h"
#include "nitro/fx/fx.h"
extern void func_ov007_020c6784(void *self, int count, const int *p2, const void *p3,
                                const void *p4, const int *const *p5, int mode);

/* Six portrait drawings, selected by a two-way selector and three-step cycle.
 * Plotting the byte coordinates produces Mario, Luigi and Yoshi portraits.
 * Names are reconstructed from that evidence, not recovered identifiers.
 * The projector uses these as screen X/Y inputs and negates Y; depth is separate.
 * Nested coordinate/threshold pointer arrays remain ROM imports; their units are unknown.
 */
static const int sPortraitStrokeCounts[6] = {30, 34, 36, 20, 32, 32};
static const int sMarioFrontStrokePointCounts[30] = {16, 12, 10, 17, 7,  8, 52, 19, 16, 10,
                                                     13, 12, 24, 12, 13, 3, 2,  12, 13, 3,
                                                     77, 17, 20, 6,  8,  2, 2,  7,  7,  3};
static const int sMarioSideStrokePointCounts[34] = {22, 9,  5,  5,  2,  15, 11, 4, 1,  8,  6,  25,
                                                    25, 3,  21, 12, 5,  23, 10, 4, 14, 24, 30, 38,
                                                    20, 12, 13, 11, 33, 31, 18, 1, 1,  2};
/* The stored final one-point record is unused by the 36-stroke dispatcher. */
static const int sLuigiStrokePointCounts[37] = {18, 7,  5,  14, 6,  3,  10, 7,  8,  20, 26, 20, 22,
                                                6,  3,  14, 8,  20, 31, 3,  26, 14, 19, 9,  7,  35,
                                                9,  17, 19, 5,  6,  9,  7,  6,  14, 8,  1};
static const int sYoshiPlainStrokePointCounts[20] = {27, 14, 5,  8,  4,  3,  19, 10, 63, 11,
                                                     9,  31, 15, 11, 22, 26, 5,  20, 5,  4};
static const int sYoshiHeartStrokePointCounts[32] = {27, 14, 5,  8,  4,  3, 19, 10, 63, 11, 9,
                                                     31, 15, 11, 22, 26, 5, 20, 5,  4,  28, 42,
                                                     26, 3,  1,  4,  6,  6, 5,  5,  4,  3};
static const int sYoshiStarStrokePointCounts[32] = {27, 14, 5,  8,  4,  3,  19, 10, 63, 11, 9,
                                                    31, 15, 11, 22, 26, 5,  20, 5,  4,  37, 5,
                                                    5,  8,  9,  7,  5,  10, 8,  7,  5,  7};
static const int *sPortraitStrokePointCounts[6] = {
    sMarioFrontStrokePointCounts, sMarioSideStrokePointCounts,  sLuigiStrokePointCounts,
    sYoshiPlainStrokePointCounts, sYoshiHeartStrokePointCounts, sYoshiStarStrokePointCounts};
extern const unsigned char *const data_ov007_020d7ffc[30];
extern const unsigned char *const data_ov007_020d8464[34];
extern const unsigned char *const data_ov007_020d85fc[36];
extern const unsigned char *const data_ov007_020d7f0c[20];
extern const unsigned char *const data_ov007_020d82e4[32];
extern const unsigned char *const data_ov007_020d8164[32];
static const unsigned char *const *sPortraitStrokeXCoords[6] = {
    data_ov007_020d7ffc, data_ov007_020d8464, data_ov007_020d85fc,
    data_ov007_020d7f0c, data_ov007_020d82e4, data_ov007_020d8164};
extern const unsigned char *const data_ov007_020d8074[30];
extern const unsigned char *const data_ov007_020d84ec[34];
extern const unsigned char *const data_ov007_020d8690[36];
extern const unsigned char *const data_ov007_020d7f5c[20];
extern const unsigned char *const data_ov007_020d8364[32];
extern const unsigned char *const data_ov007_020d81e4[32];
static const unsigned char *const *sPortraitStrokeYCoords[6] = {
    data_ov007_020d8074, data_ov007_020d84ec, data_ov007_020d8690,
    data_ov007_020d7f5c, data_ov007_020d8364, data_ov007_020d81e4};
extern const int *const data_ov007_020d80ec[30];
extern const int *const data_ov007_020d8574[34];
extern const int *const data_ov007_020d8724[36];
extern const int *const data_ov007_020d7fac[20];
extern const int *const data_ov007_020d83e4[32];
extern const int *const data_ov007_020d8264[32];
static const int *const *sPortraitStrokeProgressThresholds[6] = {
    data_ov007_020d80ec, data_ov007_020d8574, data_ov007_020d8724,
    data_ov007_020d7fac, data_ov007_020d83e4, data_ov007_020d8264};

extern char *data_ov007_0210342c;
extern char *data_ov007_02104ba0;

void func_ov007_020bbe60(int idx) {
    int drawing = idx * 3 + *(u8 *)(data_ov007_0210342c + idx + 0xfc);
    func_ov007_020c6784(*(void **)data_ov007_02104ba0, sPortraitStrokeCounts[drawing],
                        sPortraitStrokePointCounts[drawing], sPortraitStrokeXCoords[drawing],
                        sPortraitStrokeYCoords[drawing], sPortraitStrokeProgressThresholds[drawing],
                        1);
    *(int *)(data_ov007_02104ba0 + 0x38) = 0x78;
    if (idx == 0 && *(u8 *)(data_ov007_0210342c + idx + 0xfc) == 2) {
        int *o = (int *)data_ov007_02104ba0;
        int mid = FX_MUL((o[0x38 / 4] << 12), 0x1800);
        o[0x38 / 4] = mid >> 12;
    }
    ((u8 *)(data_ov007_0210342c + 0xfc))[idx]++;
    {
        u8 *p = (u8 *)(data_ov007_0210342c + 0xfc);
        if (p[idx] >= 3)
            p[idx] = 0;
    }
}
