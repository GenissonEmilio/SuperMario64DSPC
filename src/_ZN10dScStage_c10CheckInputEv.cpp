//cpp
#include "dScStage_c.h"
#include "types.h"
#include "PlayerInput.h"
struct TouchData {
    u8 held;
    u8 edge;
    u8 x;
    u8 y;
};
// The ROM reads this record table through one base pointer (gTouchHeld) plus
// field offsets, not through the per-lane gTouchX/gTouchY/gTouchEdge symbols.
#define TOUCH_DATA ((struct TouchData *)gTouchHeld)
struct PadData {
    u16 held;
    u16 pressed;
};
struct Ctrl {
    s16 touchDeltaX;    /* 0x00 */
    s16 touchDeltaY;    /* 0x02 */
    u16 held;           /* 0x04 */
    u16 pressed;        /* 0x06 */
    s16 magnitude;      /* 0x08 */
    s16 scaledX;        /* 0x0a */
    s16 scaledY;        /* 0x0c */
    s16 angle;          /* 0x0e */
    u8 touchOriginX;    /* 0x10 */
    u8 touchOriginY;    /* 0x11 */
    u8 touchStartDelay; /* 0x12 */
    u8 recontactTimer;  /* 0x13 */
    u8 touching;        /* 0x14 */
    u8 pad15;           /* 0x15 */
    u8 controlMode;     /* 0x16 */
    u8 pad17;           /* 0x17 */
};

extern "C" {
u8 DecIfAbove0_Byte(u8 *p);
int _ZN4cstd4sqrtEy(unsigned long long v);
int _ZN4cstd4fdivEii(int a, int b);
s16 _ZN4cstd5atan2E5Fix12IiES1_(int y, int x);

extern u8 data_0209f2d8;
extern int data_0209caa0[];
extern u8 data_0209d660;
extern int data_0209fc48;
extern u8 data_0209f21c;
extern u8 data_0209f350[];
extern struct Ctrl data_0209f498[];
extern struct PadData data_020a0e58[];
extern s16 data_020756b0[];
extern s16 data_02082214[];
extern u16 *data_0209214c[];
}

void dScStage_c::CheckInput()
{
    u8 mode = data_0209f2d8;
    int isVsMode = (mode == 1);
    if (isVsMode == false) {
        int modeIsTwo = (mode == 2);
        if (modeIsTwo == false && (data_0209caa0[2] & 0x80)) {
            if (data_0209d660 == 0) {
                int suppressInput = (data_0209fc48 != 0);
                if (suppressInput == false)
                    goto main_part;
            } else {
                goto main_part;
            }
        }
        {
            Ctrl *control = data_0209f498;
            int playerIndex;
            for (playerIndex = 0; playerIndex < 4; playerIndex++) {
                control->touching = 0;
                control->touchStartDelay = 0;
                control->recontactTimer = 0;
                control->magnitude = 0;
                control->scaledX = 0;
                control->scaledY = 0;
                control->angle = 0;
                control->held = 0;
                control->pressed = 0;
                control++;
            }
        }
        return;
    }
main_part: {
    Ctrl *control = data_0209f498;
    int playerIndex = 0;
    int playerCount = data_0209f21c;
    int touchX;
    int touchY;
    u8 *playerInputState;
    if (playerCount <= 0)
        return;
    playerInputState = data_0209f350;
    do {
        u32 held = data_020a0e58[playerIndex].held;
        u32 pressed = data_020a0e58[playerIndex].pressed;
        u8 touched = TOUCH_DATA[playerIndex].held;
        if ((touched != 0 && data_0209d660 != 0) || (*playerInputState != 1 && touched != 0)) {
            control->touching = 1;
            DecIfAbove0_Byte(&control->recontactTimer);
            {
                int touchBegan =
                    (TOUCH_DATA[playerIndex].held != 0 && TOUCH_DATA[playerIndex].edge != 0);
                if (touchBegan != false) {
                    if (control->recontactTimer != 0) {
                        int originY = TOUCH_DATA[playerIndex].y - control->touchDeltaY;
                        int originX = TOUCH_DATA[playerIndex].x - control->touchDeltaX;
                        if (originX < 0)
                            originX = 0;
                        else if (originX > 0xff)
                            originX = 0xff;
                        if (originY < 0)
                            originY = 0;
                        else if (originY > 0xbf)
                            originY = 0xbf;
                        control->touchOriginX = originX;
                        control->touchOriginY = originY;
                    } else {
                        control->touchStartDelay = 5;
                    }
                }
            }
            if (DecIfAbove0_Byte(&control->touchStartDelay) != 0) {
                control->touchOriginX = TOUCH_DATA[playerIndex].x;
                control->touchOriginY = TOUCH_DATA[playerIndex].y;
                control->magnitude = 0;
                control->scaledX = 0;
                control->scaledY = 0;
                control->angle = 0;
            } else {
                int deltaX;
                int deltaY;
                int distance;
                int maxDistance;
                touchX = TOUCH_DATA[playerIndex].x;
                touchY = TOUCH_DATA[playerIndex].y;
                deltaX = touchX - control->touchOriginX;
                deltaY = touchY - control->touchOriginY;
                // Keep the unclamped displacement for a quick stylus recontact.
                control->touchDeltaX = deltaX;
                control->touchDeltaY = deltaY;
                {
                    s64 distanceSquared = (s64)deltaX * deltaX;
                    distanceSquared += (s64)deltaY * deltaY;
                    distance = _ZN4cstd4sqrtEy(distanceSquared);
                }
                if (control->controlMode == 2)
                    maxDistance = 0x30;
                else
                    maxDistance = 0x24;
                if (distance > maxDistance) {
                    int clampScale = _ZN4cstd4fdivEii(maxDistance, distance);
                    deltaX = (int)(((s64)deltaX * clampScale + 0x800) >> 12);
                    control->touchOriginX = touchX - deltaX;
                    deltaY = (int)(((s64)deltaY * clampScale + 0x800) >> 12);
                    control->touchOriginY = touchY - deltaY;
                    distance = maxDistance;
                } else if (distance < 4) {
                    distance = 0;
                }
                control->magnitude = (distance << 12) / maxDistance;
                control->scaledX = (deltaX << 12) / maxDistance;
                control->scaledY = (deltaY << 12) / maxDistance;
                control->angle = _ZN4cstd5atan2E5Fix12IiES1_(deltaX, deltaY);
            }
        } else {
            int touchEnded;
            int directionButtons;
            touchEnded = (touched == 0 && TOUCH_DATA[playerIndex].edge != 0);
            if (touchEnded != false)
                control->recontactTimer = 5;
            DecIfAbove0_Byte(&control->recontactTimer);
            control->touching = 0;
            directionButtons = 0;
            if (control->controlMode == 0)
                directionButtons = data_020a0e58[playerIndex].held & 0xf0;
            control->angle = data_020756b0[directionButtons >> 4];
            if (directionButtons != 0) {
                control->magnitude = 0x1000;
                control->scaledX = data_02082214[((u16)control->angle >> 4) * 2];
                control->scaledY = data_02082214[((u16)control->angle >> 4) * 2 + 1];
            } else {
                control->magnitude = 0;
                control->scaledX = 0;
                control->scaledY = 0;
            }
        }
        {
            int skipButtonMapping = (data_0209fc48 != 0);
            if (skipButtonMapping == false) {
                u16 *buttonMap = data_0209214c[control->controlMode];
                u32 buttonIndex = 0;
                do {
                    if (held & 1)
                        control->held |= *buttonMap;
                    held >>= 1;
                    if (pressed & 1)
                        control->pressed |= *buttonMap;
                    pressed >>= 1;
                    buttonMap++;
                    buttonIndex++;
                } while (buttonIndex < 0x10);
                if (control->controlMode != 2 && (control->held & 0x300) == 0x300) {
                    control->held |= 0x4000;
                    if (control->pressed & 0x300) {
                        control->pressed |= 0x4000;
                    }
                }
            }
        }
        playerInputState++;
        playerIndex++;
        control++;
    } while (playerIndex < data_0209f21c);
}
}
