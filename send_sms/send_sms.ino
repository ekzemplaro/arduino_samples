// ---------------------------------------------------------------
/*

*/
// ---------------------------------------------------------------

#include <WioLTEforArduino.h>

#define PHONE_NUMBER  "02018983559"

WioLTE Wio;

void setup() {
/*
  delay(200);

  SerialUSB.println("");
  SerialUSB.println("--- START ---------------------------------------------------");
  
  SerialUSB.println("### I/O Initialize.");
  Wio.Init();
  
  SerialUSB.println("### Power supply ON.");
  Wio.PowerSupplyLTE(true);
  delay(500);

  SerialUSB.println("### Turn on or reset.");
  if (!Wio.TurnOnOrReset()) {
    SerialUSB.println("### ERROR! ###");
    return;
  }

*/

	setupLTE();

  delay(3000);
  
  SerialUSB.println("### Send SMS.");
  if (!Wio.SendSMS(PHONE_NUMBER, "Hello world!")) {
    SerialUSB.println("### ERROR! ###");
    return;
  }

  SerialUSB.println("### Setup completed.");
}

void loop() {
}
