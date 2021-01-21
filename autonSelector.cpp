#include "vex.h"
using namespace vex;

brain Brain;
brain::lcd screen;

void squares(){
  screen.drawRectangle(50, 50, 100, 100);
  screen.drawRectangle(200, 200, 100, 100);
  Brain.Screen.setFillColor(blue);
  
}
