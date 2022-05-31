#include <iostream>
#include "Joueur.h"
//#include "stdlib.h"
using namespace std;

void Joueur::setplateau_dim(int dim_x, int dim_y) {
  this->plateau.resize(dim_x);
  for(int i=0; i<dim_x; i++) {
    this->plateau[i].resize(dim_y);
  }
}

Joueur::Joueur(string nom, int dim_x, int dim_y) {
  this->nom = nom;
  setplateau_dim(dim_x, dim_y);
}

bool Joueur::verif_egal(Joueur &J) { //méthode de vérification d'égalité de deux Joueurs
  if(this->nom == J.getnom()){
    return true;
  }
  else {
    return false;
  }
}