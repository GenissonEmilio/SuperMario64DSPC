//cpp
#include "types.h"
#include "SaveData.h"
#include "Message.h"
#include "dScStage_c.h"
extern u8 data_0209d660;
extern u8 data_0209d654;
extern s16 data_0209d6d4;
extern u8 data_0209d67c;
extern u8 data_0209d670;
extern s32 data_0208ee44;

void dScStage_c::UpdateMessage()
{
    if (data_0209d660 == 0)
        return;

    if (Message::UpdateWindow()) {
        if (data_0209d654 == 0) {
            Message::Update();
            return;
        }

        if (data_0209d6d4 == 0x295) {
            if (data_0209d67c == 0x3c) {
                SaveData::SaveCurrentFile();
            }
            if (data_0209d67c != 0) {
                data_0209d67c -= data_0208ee44;
                if (data_0209d67c == 0) {
                    data_0209d670 = 1;
                }
            }
            return;
        }

        if (data_0209d67c != 0) {
            data_0209d67c -= data_0208ee44;
            if (data_0209d67c == 0) {
                data_0209d670 = 1;
            }
        }
        return;
    }

    if (data_0209d654 != 0) {
        if (data_0209d660 != 0)
            return;
        if (data_0209d6d4 != 0x295) {
            data_0209d654 = 0;
            return;
        }
        Message::DisplaySaving(0x296);
    }
}
