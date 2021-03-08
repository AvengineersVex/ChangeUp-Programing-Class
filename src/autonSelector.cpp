#include "vex.h"
#include "robot-config.h"
#include "autonSelector.h"

using namespace vex;

extern brain Brain;
competition Competition;
brain::lcd screen;

void draw(){
  Brain.Screen.setPenWidth(5);
  Brain.Screen.setPenColor("white");
  Brain.Screen.drawLine(240, 0, 240, 272);

  Brain.Screen.setFont(prop20);
  Brain.Screen.setCursor(100,100);
  Brain.Screen.print("Left");
}

bool isLeft = false;
void side(){
  int xPos = Brain.Screen.xPosition();
  if(xPos<240){
    isLeft = true;
  }
  Brain.Screen.clearScreen();
}

