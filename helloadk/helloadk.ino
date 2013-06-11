#include <Max3421e.h>
#include <Usb.h>
#include <AndroidAccessory.h>
#define ARRAY_SIZE 12
AndroidAccessory acc("Google, Inc.", "DemoKit", "Description",
"1.0", "URI", "Serial");
char hello[ARRAY_SIZE] = {'h','e','l','l','o',' ',
'w','o','r','l','d','!'};
void setup() {
Serial.begin(9600);
acc.powerOn();
  pinMode(13, OUTPUT);
}
void loop() {
if (acc.isConnected()) 
{
Serial.println("Connected");
  digitalWrite(13, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(1000); 
  
}
else
{
Serial.println("Not connected");
}
//delay(250);
}


