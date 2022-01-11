//////////////////////////////////////////////////////////////////////////////////////
//OBDII CAN library V1 by Zayd Abbas
//based on Coryjfowler's MCP2515 library: https://github.com/coryjfowler/MCP_CAN_lib
//See https://en.wikipedia.org/wiki/OBD-II_PIDs for list of PIDs
//
//This sketch requests PID 0x00 from Service 1, which returns an encoded list of
//compatible PIDs. The raw data is displayed over serial.
//
//Future versions will include a list of PIDs and a method to decode some PIDs
//////////////////////////////////////////////////////////////////////////////////////
#include <SPI.h>
#include <mcp_can.h>
#include <OBD.h>



MCP_CAN CAN0(4); //cs pin

void setup() {
   Serial.begin(115200);
  while(!Serial);
  
  OBD.begin(5); //interrupt pin
}

void loop() {
OBD.send(0x01, 0x00);
bool ready = OBD.readBuf();

if(ready){
  Serial.println("Buffer read successfully");
OBD.writeBuf();
Serial.println(OBD.out);
delay(2000);
}
}
