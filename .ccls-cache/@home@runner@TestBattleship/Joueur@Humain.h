#pragma once
#include <iostream>
#include "../Joueur.h"
#ifndef Humain_h
#define Humain_h
using namespace std;


class Humain : public Joueur{
public:
  Humain(Joueur &J, string nom, static int dim_plateau[2]);
  bool Attaque(string x, int y);
};

#endif