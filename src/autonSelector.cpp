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
  redsquare.startx = 100;
  redsquare.lengthx = 100;
  redsquare.starty = 50;
  redsquare.lengthy = 100;
  bluesquare.startx = 300;
  bluesquare.lengthx = 100;
  bluesquare.starty = 50;
  bluesquare.lengthy = 100;
}

void rectangle(){

  Screen.drawRectangle(redsquare.startx, redsquare.lengthx, redsquare.starty, redsquare.lengthy,red);
  Screen.drawRectangle(bluesquare.startx, bluesquare.lengthx, bluesquare.starty, bluesquare.lengthy,blue);
  
}

void pressing(){
  int xPos = Brain.Screen.xPosition();
  int yPos = Brain.Screen.yPosition();
  if (xPos > redsquare.startx && xPos < redsquare.startx+redsquare.lengthx && yPos > redsquare.starty && yPos < redsquare.starty+redsquare.lengthy) {
    Brain.Screen.clearScreen();
    Screen.drawRectangle(redsquare.startx, redsquare.lengthx, redsquare.starty, redsquare.lengthy, ClrGray);
  }
  if (xPos > bluesquare.startx && xPos < bluesquare.startx+bluesquare.lengthx && yPos > bluesquare.starty && yPos < bluesquare.starty+bluesquare.lengthy) {
    Brain.Screen.clearScreen();
    Screen.drawRectangle(bluesquare.startx, bluesquare.lengthx, bluesquare.starty, bluesquare.lengthy, ClrGray);
  }
}