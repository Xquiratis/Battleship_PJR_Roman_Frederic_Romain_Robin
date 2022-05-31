#pragma once
#include <iostream>

#ifndef joueur_h
#define joueur_h

using namespace std;

class Joueur {
//private:
protected:
  Bateau porte_avion,croiseur,contre_torpilleur1,contre_torpilleur2,torpilleur;
public:
  virtual Joueur()=0;//virtuelle pure
  virtual bool Attaque()=0;//virtuelle pure
};

#endif