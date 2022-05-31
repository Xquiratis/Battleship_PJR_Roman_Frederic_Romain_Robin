#pragma once
#include <iostream>
#include <vector>
#include "../Bateau.h"
//#include "./Humain/Humain.h"
//#include "./IA/IA.h"

#ifndef joueur_h
#define joueur_h

using namespace std;

class Joueur {
private:
  //string plateau[1];
  vector<vector<string>> plateau;
protected:
  string nom;
  //Bateau porte_avion,croiseur,contre_torpilleur1,contre_torpilleur2,torpilleur;
public:
  // accesseurs en lecture
  string getnom()  {return nom;} 
  vector<vector<string>> getPlateau()  {return plateau;} 

  // accesseurs en ecriture
  void setnom(string nom) { nom = nom; }
  void setplateau_dim(int dim_x, int dim_y);
  //void Init

  Joueur(string nom, int dim_x, int dim_y);

  bool verif_egal(Joueur &J);

  virtual bool Attaque()=0;//virtuelle pure
  virtual void Init_plateau()=0;//virtuelle pure
};

#endif