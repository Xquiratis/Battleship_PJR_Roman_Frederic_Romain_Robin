#pragma once
#include <iostream>
#include "./Joueur/Joueur.h"
#include "./Joueur/Humain/Humain.h"
#include "./Joueur/IA/IA.h"
#include "./Tools/Tools.h"

#ifndef Partie_h
#define Partie_h

using namespace std;

class Partie { //constructeur de la Partie
private:
  int compteur_tour = 0;
  static int dim_plateau[2];
protected:
public:
  Joueur J1(), J2();
  // accesseurs en lecture
  int getdim_plateau_x()  {return dim_plateau[0];}
  int getdim_plateau_y()  {return dim_plateau[1];}

  // accesseurs en ecriture
  void setdim_plateau(int dim_x, int dim_y);

  Partie(void);
  void Affichage(Joueur &Actif, Joueur &Passif);
  void Tour(Joueur &Actif, Joueur &Passif);
  void Deroulement();
};

#endif