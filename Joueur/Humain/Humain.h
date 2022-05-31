#pragma once
#include <iostream>
#include "../Joueur.h"
#ifndef Humain_h
#define Humain_h
using namespace std;


class Humain : public Joueur{
public:
  Humain(Joueur &J, string nom, int dim_x, int dim_y);
  bool Attaque(string x, int y);
  void Init_plateau();
};

#endif