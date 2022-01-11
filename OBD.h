#ifndef OBD_h
#define OBD_h

#include "Arduino.h"

#ifndef mcp_can_h
#include <mcp_can.h>
#endif

#define FX_ID_X 0x98DB33F1
#define FX_ID_S 0x7DF
#define verbose 1 //enables serial printout

extern MCP_CAN CAN0;

class OBDclass{
public:

int intpin = 5; //interrupt pin (any digital pin works)
unsigned long FxID = FX_ID_X; //CAN functional ID for requests

char out[128] = {0};

// CAN TX Variables
 byte txData[8] = {0x02,0x01,0x00,0x55,0x55,0x55,0x55,0x55};
// CAN RX Variables
unsigned long rxID;
byte dlc; //data length code
byte rxBuf[8]; //gonna needa make bigger

bool begin(int _intpin);
bool send(byte svc, byte pid);
bool readBuf(); //reads buffer and writes to RxBuf
void writeBuf();
  
};

extern OBDclass OBD;

#endif
