#pragma once
#include <iostream>
#include "../Joueur.h"
#ifndef IA_h
#define IA_h
using namespace std;


class IA : public Joueur{
public:
  IA(Joueur &J, int dim_x, int dim_y);
  bool Attaque();
  void Init_plateau();
};

#endif