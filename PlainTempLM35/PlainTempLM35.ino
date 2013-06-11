#include <SD.h>
#include <Time.h>

int sensorPin = A0;    // select the input pin for the potentiometer
//int ledPin = 10;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

String inputString = "";
//const int chipSelect = 10;

//const float MIN_TEMP = 19.0;
//const float MAX_TEMP = 25.0;

void setup() {
  // declare the ledPin as an OUTPUT:
  //pinMode(ledPin, OUTPUT);
  //digitalWrite( ledPin, LOW );
  Serial.begin( 9600 );
  inputString.reserve( 200 );
    
  //if (!SD.begin( chipSelect ) ) {
    //  Serial.println( "Card failed" );
      //return; 
  //}
  
  //Serial.println( "Card init." );
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  float tempCelsius;
  tempCelsius=(5.0 * sensorValue * 100.0)/1024.0;
  String str = String( ( int ) tempCelsius );
  
  //File dataFile = SD.open( "tempData.txt", FILE_WRITE );
  //if ( dataFile ) {
    //  dataFile.println( str );
      //dataFile.close(); 
      delay(1000);
      //Serial.println(TIME);
      Serial.println( str );
 // } else {
   // Serial.println( "Error opening file" );
  //}
  
 // if (temperatureCelsius >= MAX_TEMP ) {
    
    //digitalWrite( ledPin, HIGH );
    
    //digitalWrite( ledPin, LOW );
    //delay( 1000 );
   // Serial.println("Alert");
  //} else {
    //for( int i = 0; i < 100; i++ ) {
    //  digitalWrite( ledPin, HIGH );
    //  delay( 10 );
    //}
   // Serial.println("Normal");
  //}
}
