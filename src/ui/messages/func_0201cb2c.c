unsigned char data_0209d670;
static unsigned char data_0209d670_pad[3];

#include "MessageBank.h"

extern int gMessageBankBase;
extern int gMessageBankHeader;
extern int gMessageInfoSection;
extern int gMessageDataSection;
extern int gMessageEntries;

void ParseMessageBankSections(void)
{
    int bankBase = gMessageBankBase;
    int infoSection = bankBase + 0x20;
    gMessageBankHeader = bankBase;
    gMessageInfoSection = infoSection;
    int dataSection = infoSection + *(int *)(infoSection + 4);
    gMessageDataSection = dataSection;
    gMessageEntries = bankBase + 0x30;
}

extern unsigned int data_0209d664[1];
