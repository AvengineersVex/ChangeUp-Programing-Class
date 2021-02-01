#include "vex.h"
#include "robot-config.h"

using namespace vex;

extern brain Brain;
brain::lcd screen;
// int xpmin1 = 50, xpmax = 150;
// int xpmax1 = 150;
// int ypmin1 = 50;
// int ypmax1 = 150;
// int xpmin2 = 200;
// int xpmax2 = 300;
// int ypmin2 = 100;
// int ypmax2 = 150;

struct rectStruct{
  int startx;
  int starty;
  int lengthx;
  int lengthy;
};

rectStruct blueSquare;
rectStruct redSquare;

void squares(){
  Brain.Screen.setPenColor(black);
  screen.drawRectangle(blueSquare.startx, blueSquare.starty, blueSquare.lengthx, blueSquare.lengthy, blue);
  Brain.Screen.setPenColor(black);
  screen.drawRectangle(redSquare.startx, redSquare.starty, redSquare.lengthx, redSquare.lengthy, red);
}

void squareBuilder(){
  blueSquare.startx = 100;
  blueSquare.starty = 50;
  blueSquare.lengthx = 100;
  blueSquare.lengthy = 100;
  redSquare.startx = 300;
  redSquare.starty = 50;
  redSquare.lengthx = 100;
  redSquare.lengthy = 100;
}
bool squareCheck(){
  int xPos = Brain.Screen.xPosition();
  int yPos = Brain.Screen.yPosition();
  if (Brain.Screen.pressing() && xPos>blueSquare.startx && xPos<blueSquare.startx+blueSquare.lengthx && yPos>blueSquare.starty && yPos<blueSquare.starty+blueSquare.lengthy) {
    return true;
  }
  return false;
}