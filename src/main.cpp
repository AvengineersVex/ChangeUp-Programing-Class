/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\druck                                            */
/*    Created:      Mon Jan 11 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*Goal: 
ALLIANCE BUTTONS
POSITION FROM FRONT WALL ENTRY
SKILLS
BALL PLACEMENT
*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "autonSelector.h"

using namespace vex;

competition Competition;

void preAuton(void){
  vexcodeInit();
  Brain.Screen.pressed(rectCheck);
  startUp();
}


void autonomous(void){
  autonSelect();
}

void usercontrol(void){
  while (1) {

    wait(20,msec);
  }
}

int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);
  preAuton();

  while (true) {
    wait(100, msec);
  }
}