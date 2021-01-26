#include "vex.h"
#include "robot-config.h"
#include "autonSelector.h"

using namespace vex;

brain Brain;
brain::lcd Screen;

struct rectStruct{
  int startx;
  int starty;
  int lengthx;
  int lengthy;
};

rectStruct redsquare;
rectStruct bluesquare;

void rectSize(){
  redsquare.startx = 120;
  redsquare.lengthx = 200;
  redsquare.starty = 116;
  redsquare.lengthy = 156;
  bluesquare.startx = 280;
  bluesquare.lengthx = 360;
  bluesquare.starty = 116;
  bluesquare.lengthy = 156;
}

void rectangle(){

  Screen.drawRectangle(redsquare.startx, redsquare.lengthx, redsquare.starty, redsquare.lengthy,red);
  Screen.drawRectangle(bluesquare.startx, bluesquare.lengthx, bluesquare.starty, bluesquare.lengthy,blue);
  
}

bool pressing(){
  int xPos = Brain.Screen.xPosition();
  int yPos = Brain.Screen.yPosition();
  if (Brain.Screen.pressing() && xPos > redsquare.startx && xPos < redsquare.startx+redsquare.lengthx && yPos> redsquare.starty && yPos < redsquare.starty+redsquare.lengthy) {
    return true;
  } 
    return false;
}