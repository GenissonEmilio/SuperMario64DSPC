//cpp
// MATCHING. dScStage_c::InitResources @ 0x0202cc0c (arm9, size 0xa84), mwccarm 2004/b56.
//
// This function sat at a declared floor of 3-4 words for two campaigns. The residue was
// never an allocator preference: GetSoundGroupID takes TWO arguments and this file
// declared it with one. The callee (0x0202de24) reads r1 before it ever writes it --
// `cmp r1,#1`, `cmp r1,#4`, `cmp r1,#2` -- so the second argument is real, and
// src/GetSoundGroupID.c already defines it as `(int group, int sub)`. A `bl` is
// byte-identical whether or not an argument is passed, so no byte gate, linkcheck or
// fdiff run could see the error.
//
// Passing data_0209f220 (already loaded and compared at +0x514/+0x520) keeps that value
// live in r1 all the way to the call at +0x570. That blocks r1 for the `bank` web, so
// bank is coloured r2 (`mov r2,#0x36` at +0x524, `ldrb r2,[r1,r2]` at +0x580) and the
// join copy `mov r1,r2` at +0x584 becomes necessary -- all three residual words at once.
//
// The levers are coupled: the old draft's widening cast on the LoadGroupAndSetBank
// argument existed only to buy back the size the missing copy cost. With the copy
// restored it overshoots, so the plain spelling is the matching one.
//   (2-arg, plain) = MATCH   (2-arg, widened) = 1   (1-arg, plain) = 0xa80   (1-arg, widened) = 3
//
// The two pairs of stores below (f284/f294 and f2d4/f20c) are in ROM statement order.
// Swapping either pair is byte-identical -- the literal-pool words are relocations and
// therefore wildcards to the byte gate -- but sends each address to the wrong pool slot.
// match.py --strict-relocs is what distinguishes them; keep this order.
#include "dScStage_c.h"
#include "Sound.h"
#include "Heap.h"
#include "dExtShadowModel_c.h"
#include "dFdWipe_c.h"
#include "SharedFilePtr.h"

extern "C" {
extern u8 data_0209f2d8;
extern u8 data_0208a0e0;
extern u8 data_0209f21c;
extern u8 data_0209f250;
extern s8 data_02092110;
extern s8 data_0209f2c4;
extern s8 data_0209f2f8;
extern u8 data_0209f26c;
extern s32 data_0209f34c;
extern s32 data_0209f4f8[3][16];
extern u8 data_0209f30c[16];
extern u8 data_0209f310[16];
extern s16 data_0209f358[16];
extern u8 data_0209f2fc;
extern s8 data_02092124;
extern s8 data_02092118;
extern u8 data_0209f264;
extern u8 data_0209f268;
extern u8 data_0209f220;
extern u8 data_0209f1f0;
extern s8 data_02092120;
extern void *data_0209f314;
extern s32 data_0209f32c;
extern s8 data_0209f274;
extern s8 data_0209f2bc;
extern s16 data_0209f304;
extern s16 data_0209f308;
extern s32 data_0209f40c[12];
extern s32 data_0209f3e8[9];
extern s32 data_0209f3a4[8];
extern u8 data_0209f1f8;
extern u8 data_0209f2d0;
extern u8 data_0209f258;
extern u8 data_0209f2e8;
extern u8 data_0209f25c;
extern s32 data_0209f338;
extern s32 data_02092134;
extern u8 data_02075769[];
extern s8 data_0207576a[];
extern void *data_020756f0[12];
extern u16 data_02075600[7];
extern u16 data_020755f0[7];
extern u16 data_020755e0[7];
extern s32 data_0209f324;
extern s32 data_02092208[];
extern s32 data_0209f340;
extern s32 data_0208ee44;
extern s32 data_0209caa0[];
extern void *data_0209f394[];
extern u8 data_0209d454;
extern void *data_0209d4a8;
extern s32 data_0209f3c4;
extern u8 data_0209f204;
extern s32 data_0209b454;
extern void *data_020a0eac;
extern s32 data_0209fc48;
extern s32 data_0209fc68;
extern s16 data_0209f300;
extern u8 data_0209f284;
extern u8 data_0209f2d4;
extern u8 data_0209f20c;
extern u8 data_0209f290;
extern u8 data_0209d45c;
extern u8 data_0209f294;
extern s32 data_0209cee8;
extern s32 data_0209cef0;
extern u8 data_02092778;
extern s32 data_0209e650;
extern u8 data_0209f208;
extern s32 data_0209f344;
extern char VS_STAR_SPAWN_ORDERS[][0xC];

void Enable3dEngines(void);
void ResetInput(void);
int SublevelToLevel(int i);
void UnloadArchive(int i);
void LoadTextNarcs(void);
int LoadArchive(int idx);
void Initialise3dGraphics(int arg);
void InitialiseVramGlobals(void);
void func_02039218(void);
void ResetKuppaScript(void);
int GetSoundGroupID(int level, int mode);
void LoadDebugFont(void);
int IsLevelInsideCastle(int level);
int IsLevelTinyHugeIslandOutside(int level);
int func_020308a8(void);
int func_0203da9c(void);
int func_0203da3c(void);
u32 func_0203dad4(void);
void func_0203b9b4(int *p, int v);
void *func_02073470(int a, int b, int c, void *ctor, void *dtor);
void func_ov001_020ab2e4(void);
// local extern: constructor address passed to the array-construction helper.
void *_ZN9dFdWipe_cC1Ev(void *thiz);
// local extern: destructor address passed to the array-construction helper.
void _ZN9dFdWipe_cD1Ev(void *thiz);

void _ZN2GX15DisableAllBanksEv(void);
// local extern: member form converts the e3d argument to bool; the ROM call passes the raw int
void _ZN10dScStage_c14LoadGraphics2DEbi(int e3d, int level);
void _ZN2GX15SetGraphicsModeEiii(int a, int b, int c);
void _ZN3GXS15SetGraphicsModeEi(int a);
void _ZN2GX6DispOnEv(void);
void _Z17LoadLevelOverlaysi(int level);
void _ZN5Sound19LoadGroupAndSetBankEii(int a, int b);
int _ZN5Sound8SetMusicEjj(u32 a, u32 b);
}

int dScStage_c::InitResources()
{
    dScStage_c *scene = this;

    if (scene->mWaitingForLoad == 0) {
        u8 mode = data_0209f2d8;
        int isVsMode = (mode == 1) ? 1 : 0;
        if (isVsMode) {
            Sound::Player::SetPlayableSeqCount(2, 5);
            int sequenceCount = 3;
            Sound::Player::SetPlayableSeqCount(sequenceCount, sequenceCount);
        }
        dScene_c::Initialise3dGraphics();
        Enable3dEngines();
        data_0209f21c = data_0208a0e0;
        data_0209f250 = (u8)func_0203da9c();
        ResetInput();
        data_0209f2c4 = 0;

        int nextLevel = SublevelToLevel(data_02092110);
        int previousLevel = SublevelToLevel(data_0209f2f8);
        u32 sublevelBit = ((u8)data_02092110 + 0xDC) & 0xFF;
        int specialSublevel = 0;
        if (sublevelBit <= 0xD) {
            if ((1 << sublevelBit) & 0x2A15)
                specialSublevel = 1;
        }
        mode = data_0209f2d8;
        int vsModeReset = (mode == 1) ? 1 : 0;

        if (vsModeReset || data_0209f26c == 2 || specialSublevel || nextLevel == 0x1D ||
            nextLevel != previousLevel) {
            int row = 0;
            data_0209f34c = 0;
            do {
                int column = 0;
                do {
                    data_0209f4f8[row][column] = 0;
                    column += 1;
                } while (column < 0x10);
                row += 1;
            } while (row < 3);

            if ((s32)data_0209f21c > 0) {
                int playerCount = data_0209f21c;
                int playerIndex = 0;
                u8 *redCoins = data_0209f30c;
                u8 *vsStars = data_0209f310;
                int vsModeCounters = (mode == 1) ? 1 : 0;
                u8 loadMode = data_0209f26c;
                do {
                    if (vsModeCounters || (specialSublevel == 0 && loadMode != 1)) {
                        data_0209f358[playerIndex] = 0;
                    }
                    *redCoins = 0;
                    *vsStars = 0;
                    playerIndex += 1;
                    redCoins += 1;
                    vsStars += 1;
                } while (playerIndex < playerCount);
            }
        }

        data_0209f2fc = data_0209f26c;
        if (data_0209f2fc == 1) {
            data_02092124 = data_0209f2f8;
            data_02092118 = -1;
        }

        s8 previousSublevel = data_0209f2f8;
        data_0209f2f8 = data_02092110;
        data_0209f264 = data_0209f268;
        data_0209f220 = data_0209f1f0;
        data_02092120 = -1;
        data_0209f314 = (void *)scene->mTexAnimSlots;
        data_0209f32c = 0x80000000;
        data_0209f274 = 0;
        SublevelToLevel(data_0209f2f8);

        s32 levelArchive = 0xBF;
        if (data_0209f2f8 == 0x33)
            levelArchive = 2;
        else if (data_0209f2f8 == 0x2B)
            levelArchive = 3;
        else if (data_0209f2f8 == 0x1D)
            levelArchive = 4;
        else if (data_0209f2f8 == 0x2A)
            levelArchive = 5;

        u32 archiveToUnload = 2;
        do {
            if (archiveToUnload != (u32)levelArchive) {
                UnloadArchive(archiveToUnload);
            }
            archiveToUnload += 1;
        } while (archiveToUnload <= 5);

        LoadTextNarcs();
        LoadArchive(0);
        if (data_0209f2f8 == 1) {
            mHeap::Heap_t *previousHeap = ((mHeap::Heap_t *)data_020a0eac)->SetDefault();
            LoadArchive(7);
            previousHeap->SetDefault();
        }
        if (levelArchive != 0xBF) {
            LoadArchive(levelArchive);
        }

        ::Initialise3dGraphics(0x1F);
        _ZN2GX15DisableAllBanksEv();
        dScStage_c::SetVramBanks();

        volatile u32 *mainDisplay = (volatile u32 *)0x04000000;
        volatile u32 *subDisplay = (volatile u32 *)0x04001000;
        *mainDisplay &= 0xFFCFFFEF;
        *subDisplay &= 0xFFCFFFEF;
        int one = 1;
        _ZN2GX15SetGraphicsModeEiii(one, 0, one);
        _ZN3GXS15SetGraphicsModeEi(3);
        *mainDisplay = (*mainDisplay & ~0x38000000) | 0x08000000;
        *(volatile u16 *)0x04000304 = (*(volatile u16 *)0x04000304 & 0xFFFFFDF1) | 0x20E;
        _ZN2GX6DispOnEv();
        *subDisplay |= 0x10000;
        InitialiseVramGlobals();

        volatile u16 *bg1Control = (volatile u16 *)0x0400000A;
        *bg1Control = *bg1Control & ~3;
        *bg1Control = (*bg1Control & 0x43) | 0x1F1C;
        *bg1Control = *bg1Control & ~0x40;
        data_0209d454 = 0x18;
        data_0209f204 = 0;
        data_0209d4a8 = (void *)&data_0209f3c4;
        data_0209b454 = 0;
        func_02039218();
        ResetKuppaScript();

        int vsModeTimers = (data_0209f2d8 == 1) ? 1 : 0;
        if (vsModeTimers) {
            data_0209f2bc = 3;
            data_0209f304 = 0x28;
            data_0209f308 = 0;
        } else {
            data_0209f2bc = 0;
            data_0209f304 = 0;
        }

        {
            int i;
            for (i = 0; i < 0xC; i++) {
                data_0209f40c[i] = 0;
            }
        }
        {
            int i;
            for (i = 0; i < 9; i++) {
                data_0209f3e8[i] = 0;
            }
        }
        func_ov001_020ab2e4();
        {
            int i;
            for (i = 0; i < 8; i++) {
                data_0209f3a4[i] = 0;
            }
        }

        data_0209f1f8 = 0;
        data_0209f2d0 = 0;
        data_0209f258 = 0;
        data_0209f2e8 = 0;
        data_0209f25c = 0;
        data_0209f338 = 0;
        data_02092134 = 0x44444444;
        _Z17LoadLevelOverlaysi(data_0209f2f8);

        int skipSoundGroup = (data_0209f2d8 == 2) ? 1 : 0;
        if (skipSoundGroup == 0) {
            s8 sublevel = *(s8 *)(unsigned)(((unsigned long long)(unsigned)&data_0209f2f8) & ~0ULL);
            int soundGroup = 0;
            u8 bank = 0x36;
            if (data_0209f220 == 2) {
                if (sublevel == 1 || sublevel == 0x33)
                    soundGroup = 0x2B;
                else if (sublevel == 0x1D)
                    soundGroup = 0x2E;
                else if (sublevel == 0x2A)
                    soundGroup = 0x2C;
                else if (sublevel == 0x2B)
                    soundGroup = 0x2D;
            }
            if (soundGroup == 0) {
                int soundTableIndex = sublevel * 3;
                soundGroup = GetSoundGroupID(sublevel, data_0209f220);
                bank = data_02075769[soundTableIndex];
            }
            _ZN5Sound19LoadGroupAndSetBankEii(soundGroup, bank);
        }

        *(volatile u16 *)0x04000008 = (*(volatile u16 *)0x04000008 & ~3) | 2;
        int vsModeGraphics = (data_0209f2d8 == 1) ? 1 : 0;
        _ZN10dScStage_c14LoadGraphics2DEbi(vsModeGraphics, data_0209f2f8);

        {
            u32 i;
            for (i = 0; i < 0xC; i++) {
                Model::LoadFile(*(SharedFilePtr *)data_020756f0[i]);
            }
        }

        int vsModeFaders = (data_0209f2d8 == 1) ? 1 : 0;
        u16 *faderFileIds;
        if (vsModeFaders && levelArchive != 0xBF) {
            faderFileIds = data_02075600;
        } else if (data_0209f2f8 == 5) {
            faderFileIds = data_020755f0;
        } else {
            faderFileIds = data_020755e0;
        }

        data_0209f324 =
            (s32)func_02073470(7, 0x60, 8, (void *)&_ZN9dFdWipe_cC1Ev, (void *)&_ZN9dFdWipe_cD1Ev);
        int faderIndex = 0;
        int faderOffset = 0;
        do {
            ((dFdWipe_c *)(data_0209f324 + faderOffset))->LoadAndSetFile(faderFileIds[faderIndex]);
            faderIndex += 1;
            faderOffset += 0x60;
        } while (faderIndex < 7);

        data_0209f340 = data_02092208[data_0209f2f8];
        scene->LoadModel();
        data_0208ee44 = 2;
        dScStage_c::LoadClsnAndObjects(*(LVL_Overlay *)data_0209f340, data_0209f264,
                                       scene->mMeshCollider);

        int vsModeMusic = (data_0209f2d8 == 1) ? 1 : 0;
        if (vsModeMusic == 0) {
            int skipMusicSetup = (data_0209fc48 != 0) ? 1 : 0;
            if (skipMusicSetup == 0) {
                if (!IsLevelInsideCastle(data_0209f2f8) || !IsLevelInsideCastle(previousSublevel)) {
                    if (!IsLevelTinyHugeIslandOutside(data_0209f2f8) ||
                        !IsLevelTinyHugeIslandOutside(previousSublevel)) {
                        if (data_0209f2f8 != 2 || (data_0209caa0[2] & 0x200)) {
                            Sound::LoadAndSetMusic_Layer1(data_0207576a[data_0209f2f8 * 3]);
                            u8 localPlayer = data_0209f250;
                            if (((u8 *)data_0209f394[localPlayer])[0x6ff] != 0) {
                                _ZN5Sound8SetMusicEjj(localPlayer, 0x33);
                            }
                        }
                    }
                }
            }
        }

        if (func_0203da3c() != 2 && levelArchive != 0xBF) {
            UnloadArchive(levelArchive);
        }
        LoadDebugFont();
        scene->LoadFog();
        scene->LoadTextureTransformers();
        scene->LoadSkybox();
        data_0209cef0 = 1;
        scene->mSysTracker.Initialise();

        u8 loadMode = data_0209f2fc;
        data_0209f294 = 0;
        data_0209f290 = 0;
        data_0209f284 = 0;
        data_0209f300 = 0;
        if (loadMode != 1) {
            data_0209f20c = 0;
            data_0209f2d4 = 0;
        }
        data_0209d45c = 0x11;

        *mainDisplay = (*mainDisplay & ~0x1F00) | 0x1100;
        int skipSubDisplayLayers = (data_0209f2d8 == 2) ? 1 : 0;
        if (skipSubDisplayLayers == 0) {
            *subDisplay = (*subDisplay & ~0x1F00) | (data_0209d454 << 8);
        }
        data_0209cee8 = 0;
        dExtShadowModel_c::CleanAll();
        data_02092110 = -1;

        if (data_0209fc68 != 0) {
            scene->mWaitingForLoad = 1;
        }
    }

    if (scene->mWaitingForLoad != 0) {
        if (func_020308a8() == 0)
            return -1;
    }

    data_02092778 = 0;
    func_0203b9b4(&data_0209e650, func_0203dad4());
    data_0209f208 = 0;
    u32 starOrderIndex = func_0203dad4() % 6;
    data_0209f344 = (s32)&VS_STAR_SPAWN_ORDERS[starOrderIndex];

    return 1;
}
