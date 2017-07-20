
/*
  simpleMovements.ino

 This  sketch simpleMovements shows how they move each servo motor of Braccio

 Created on 18 Nov 2015
 by Andrea Martino

 This example is in the public domain.
 */

#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

void setup() {
  //Initialization functions and set up the initial position for Braccio
  //All the servo motors will be positioned in the "safety" position:
  //Base (M1):90 degrees
  //Shoulder (M2): 45 degrees
  //Elbow (M3): 180 degrees
  //Wrist vertical (M4): 180 degrees
  //Wrist rotation (M5): 90 degrees
  //gripper (M6): 10 degrees
  Braccio.begin();
   Braccio.ServoMovement(20,         0, 100, 90, 90, 105,  73); // Vertically align 
  delay(1000);
}

void loop() {
   /*
   Step Delay: a milliseconds delay between the movement of each servo.  Allowed values from 10 to 30 msec.
   M1=base degrees. Allowed values from 0 to 180 degrees
   M2=shoulder degrees. Allowed values from 15 to 165 degrees
   M3=elbow degrees. Allowed values from 0 to 180 degrees
   M4=wrist vertical degrees. Allowed values from 0 to 180 degrees
   M5=wrist rotation degrees. Allowed values from 0 to 180 degrees
   M6=gripper degrees. Allowed values from 10 to 73 degrees. 10: the toungue is open, 73: the gripper is closed.
  */
  
                       //(step delay, M1, M2, M3, M4, M5, M6);
   Braccio.ServoMovement(20,         0, 150, 180, 20, 105,  20); //M3 drop down
   delay(1000);
   Braccio.ServoMovement(20,         0, 150, 180, 20,105 ,  73); //grip close
   delay(1000);
   Braccio.ServoMovement(20,         0, 100, 150, 180,105 ,  73); //M2 tilts up
   delay(1000);  
   Braccio.ServoMovement(20,         0, 100, 150, 180,105 ,  73); //M3 tilts up
   delay(1000);
   Braccio.ServoMovement(20,         180, 100, 150, 180, 105,  73); // 180deg move
   delay(1000);
   Braccio.ServoMovement(20,         180, 100, 150, 180, 105,  10); // Grip opens next side
   delay(1000);
   //Braccio.ServoMovement(20,         0, 100, 150, 180, 105,  10); //M drop down
   //delay(1000);
   Braccio.ServoMovement(20,         0, 100, 120, 140, 105,  10); //M4 drop down
   delay(1000);
   
   
 

   
   

   
   //Braccio.ServoMovement(20,         0, 160, 180, 0, 105,  73); 
  // Braccio.ServoMovement(20,         180, 100, 30, 30, 105,  73); //M3 aligns horizontally + grip move(close)
   //delay(1000);
  
 /* Braccio.ServoMovement(20,         180, 100, 0, 30, 105,  73); //Grip closes
  delay(1000);
  //Braccio.ServoMovement(20,         60, 100, 0, 30, 105,  73);  
  delay(1000);
  Braccio.ServoMovement(20,         180, 100, 0, 30, 105,  73); // 180deg move
  //delay(1000);
  //Braccio.ServoMovement(20,         180, 100, 0, 30, 105,  10); //Grip opens opp side
  //delay(1000);*/


  //delay(1000);

}
