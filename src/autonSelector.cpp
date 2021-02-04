/*Goal:
  -Make two buttons (Alliance Buttons)
  -Position from front wall entry (in)
  -Skills
  ----------------------------------------------
  -Ball placement buttons
*/
#include "vex.h"
#include "robot-config.h"




using namespace vex;

brain Brain;
brain::lcd Screen;
// int xpmin1 = 50;
// int xpmax1 = 150;
// int ypmin1 = 50;
// int ypax1 = 150;
// int xpmin2 = 200;
// int xpmax2 = 300;
// int ypmin2 = 50;
// int ypax2 = 150;

struct rectStruct{
  int startx;
  int starty;
  int lengthx;
  int lengthy;
};

rectStruct blueSquare;
rectStruct redSquare;


void drawing(){
  Brain.Screen.setPenColor(blue);
  Screen.drawRectangle(blueSquare.startx,blueSquare.starty,blueSquare.lengthx,blueSquare.lengthy,blue);
  Brain.Screen.setPenColor(red);
  Screen.drawRectangle(redSquare.startx,redSquare.starty,redSquare.lengthx,redSquare.lengthy,red);
  //Brain.Screen.setFillColor(blue);
}
  void squareParam(){
    blueSquare.startx = 50;
    blueSquare.starty = 50;
    blueSquare.lengthx = 100;
    blueSquare.lengthy = 100;
    redSquare.startx = 200;
    redSquare.starty = 50;
    redSquare.lengthx = 100;
    redSquare.lengthy = 100;
    }

    
    
    void squareCheck(void){
    int xPos = Brain.Screen.xPosition();
    int yPos = Brain.Screen.xPosition();

    
  if(Brain.Screen.pressing() && xPos >= blueSquare.startx && xPos < blueSquare.lengthx && yPos > blueSquare.starty && yPos < redSquare.lengthy){
    Brain.Screen.clearScreen();
    Screen.drawRectangle(blueSquare.startx, blueSquare.starty, blueSquare.lengthx,blueSquare.lengthy, ClrGray);
  }

  if(Brain.Screen.pressing() && xPos >= redSquare.startx && xPos < redSquare.lengthx && yPos > redSquare.starty && yPos < redSquare.lengthy){
    Brain.Screen.clearScreen();
    Screen.drawRectangle(redSquare.startx, redSquare.starty, redSquare.lengthx,redSquare.lengthy, ClrGray);
  }
  
     }

     void rectCall(){
      Brain.Screen.pressed(squareCheck);
    }
  


