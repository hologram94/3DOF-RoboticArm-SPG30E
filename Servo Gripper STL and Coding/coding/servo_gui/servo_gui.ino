
#include <Servo.h>
Servo myservo; 
int pos = 0;
int update_interval=100; // time interval in ms for updating panel indicators 
unsigned long last_time=0; // time of last update
char data_in; // data received from serial link

void setup() {

  Serial.begin(9600); //Change baud rate as required!
  myservo.attach(7);
}

void loop() {

  /////////////   Receive and Process Data

  if (Serial.available()){
    data_in=Serial.read();  //Get next character 

    if(data_in=='R'){ //Button Pressed
      myservo.write(0);
    }
    if(data_in=='R'){ // Button Released 
      myservo.write(0); 
    }

    if(data_in=='Y'){ //Button Pressed
      myservo.write(270);
    }
    if(data_in=='Y'){ // Button Released 
      myservo.write(270);
    }

  }

  /////////////  Send Data to Android device

  unsigned long t=millis();
  if ((t-last_time)>update_interval){
    last_time=t;

  }

}
