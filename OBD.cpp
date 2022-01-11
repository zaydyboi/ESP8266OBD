#include "Arduino.h"
#include <mcp_can.h>
#include "OBD.h"

bool OBDclass::begin(int _intpin){ //sets up OBD

 
  CAN0.setMode(MCP_NORMAL);
  intpin = _intpin;
  pinMode(intpin, INPUT);
 
  
  if(CAN0.begin(MCP_STDEXT, CAN_500KBPS, MCP_16MHZ) == CAN_OK){
    #if verbose
    Serial.println("MCP2515 Initialized Successfully!");
    #endif
  }
  else{
    #if verbose
    Serial.println("Error Initializing MCP2515!");
    #endif
    return 1;
  }

  if(FxID == 0x98DB33F1){
    #if verbose
    Serial.println("Extended ID selected!");
    delay(1000);
    #endif
    CAN0.init_Mask(0,0x90FF0000);                // Init first mask...
    CAN0.init_Filt(0,0x90DA0000);                // Init first filter...
    CAN0.init_Filt(1,0x90DB0000);                // Init second filter...
    CAN0.init_Mask(1,0x90FF0000);                // Init second mask...
    CAN0.init_Filt(2,0x90DA0000);                // Init third filter...
    CAN0.init_Filt(3,0x90DB0000);                // Init fourth filter...
    CAN0.init_Filt(4,0x90DA0000);                // Init fifth filter...
    CAN0.init_Filt(5,0x90DB0000);                // Init sixth filter...
  }
  else{
    #if verbose
    Serial.println("Standard ID selected!");
    delay(1000);
    #endif
    CAN0.init_Mask(0,0x7F00000);                // Init first mask...
    CAN0.init_Filt(0,0x7DF0000);                // Init first filter...
    CAN0.init_Filt(1,0x7E10000);                // Init second filter...
    CAN0.init_Mask(1,0x7F00000);                // Init second mask...
    CAN0.init_Filt(2,0x7DF0000);                // Init third filter...
    CAN0.init_Filt(3,0x7E10000);                // Init fourth filter...
    CAN0.init_Filt(4,0x7DF0000);                // Init fifth filter...
    CAN0.init_Filt(5,0x7E10000);                // Init sixth filter... 
  }
  CAN0.setMode(MCP_NORMAL);  
  #if verbose
  Serial.println("Done setup!");
  #endif
  return 0;
}

bool OBDclass::send(byte svc, byte pid){

  txData[1] = svc;
  txData[2] = pid;

    if(CAN0.sendMsgBuf(FxID, 8, txData) == CAN_OK){
    #if verbose
      Serial.println("Message Sent Successfully!");
    #endif
    return 0;
    } else {
    #if verbose
      Serial.println("Error Sending Message...");
    #endif
    return 1;
    }
}

bool OBDclass::readBuf(){ //reads buffer and writes to RxBuf{
  if(!(intpin)) { CAN0.readMsgBuf(&rxID, &dlc, rxBuf); 
  return 1;
  }
  else{
    return 0;
  }
}

void OBDclass::writeBuf(){ //formats rxBuf and writes to char array out
  char stbuf[2] = {0};
  for(int i=0; i<128; i++){out[i]=0;}
  
      for(byte i = 0; i<dlc; i++){
        sprintf(stbuf, "%.2X", rxBuf[i]);
    out[(2*i)] = stbuf[0];
    out[((2*i)+1)] = stbuf[1];
      }
}

OBDclass OBD;
