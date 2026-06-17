/*
   LaBox Project
   XpressNet part

   @Author : lebelge2
   @Organization : Locoduino.org

   Dernière modif: 17-06-26
*/

#ifndef __XPressNet_h
#define __XPressNet_h

#include "DCC.h"
#include "EXComm.h"

#ifdef ENABLE_XPRESSNET

const bool DIAG_XPNET = false;  // Sans Debug
//const bool DIAG_XPNET = true;   // Avec Debug
void getfonction(uint8_t adr);

class XPressNet: public EXCommItem {
  public:
    XPressNet(int inRxPin, int inTxPin, int inDirPin);
    bool begin() override;
    bool loop() override;
    static void XNetTrntInfo(uint16_t Address, uint8_t data);
};
#endif
#endif
