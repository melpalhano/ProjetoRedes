#include <DHT.h>
/* 
  Sketch generated by the Arduino IoT Cloud Thing "Untitled"
  https://create.arduino.cc/cloud/things/962d83b5-2f39-4d6a-ba97-2dca722424a4 

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  CloudTemperatureSensor tempH;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"
const int DHTPIN = 32;
const int DHTTYPE = DHT11;
float temperatura = 0;

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  dht.begin();
}

float lerTemperatura() {
  float temperature = dht.readTemperature();
  return temperature;
}

void loop() {
  ArduinoCloud.update();
  delay(1000);
  temperatura = lerTemperatura();
  tempH = temperatura;
  Serial.print("Temperature (C): ");
  Serial.println(temperatura);
  // Your code here 
  
  
}



/*
  Since TempH is READ_WRITE variable, onTempHChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onTempHChange()  {
}