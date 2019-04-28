/*
This projects design and code is by Lewis at DIY Machines.

There is an instructional video to go along with the project available here: https://youtu.be/T_tpKoNCVYw
The code is published and maintained here: https://github.com/DIY-Machines/SmartPlantV1

*/

// Teensy 
#if defined (CORE_TEENSY) // Teensy 3.0 
#define WATERLEVELPIN 6
// Arduino
#else
#define WATERLEVELPIN A3
#endif



// These constants won't change. They're used to give names to the pins used:
const int waterLevelPin = WATERLEVELPIN; // Analoge pin water level sensor is connected to  - below 50 = refill


int sensorWaterLevelValue = 0;        // somewhere to store the value read from the waterlevel sensor
  
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  sensorWaterLevelValue = analogRead(waterLevelPin); //read the value of the water level sensor
  Serial.print("Water level sensor value: "); //print it to the serial monitor
  Serial.println(sensorWaterLevelValue);

   delay(300); //wait before checking the water level

}
