#include <iostream>
#include "Bateau.h"

int main() {
  std::cout << "Hello World!\n"<<endl;
  
  int shot_x = 2;
  int shot_y = 3;

  bool touche;
  /*x = 2 , y = 3 , taille = 5 , orietation = NORD*/
  bateau b1(2,3,5,NORD);


  std::cout <<b1.getShot(shot_x,shot_y)<<endl;
}