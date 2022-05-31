#include <iostream>
#include "Partie.h"
//#include "stdlib.h"
using namespace std;

void Partie::setdim_plateau(int dim_x, int dim_y) {
  this->dim_plateau[0] = dim_x;
  this->dim_plateau[1] = dim_y;
}

Partie::Partie(void){ //constructeur de la Partie
  setdim_plateau(10,10);
  this->J1 = new Humain("1", getdim_plateau_x(), getdim_plateau_y());
  int nb=0;

  while((nb!=1)||(nb!=2)){ //Tant que l'on n'a pas sélectionné 1 ou 2 joueurs
    cout << endl << "Veuillez saisir le nombre de Joueurs (1 ou 2) :" << endl;
    cin >> nb;
  }

  if(nb == 1){ //si un seul joueur
    J2 = new IA(J2, this->dim_plateau); //adversaire IA
  }
  else { //autrement
    J2 = new Humain(J2, "2",this->dim_plateau);  //deux joueurs
  }
}

void Partie::Affichage(Joueur &Actif, Joueur &Passif){ //méthode d'affichage
  bool egal = Actif.verif_egal(Passif); //true si l'observateur regarde son plateau
  vector<vector<string>> plateau = Passif.getPlateau();

  for(int y = 0; y<=(this->dim_plateau[1]); y++){ //ligne
    for(int i = 0; i<2; i++){ //2 lignes de caractères pour chaque lignes
      for(int x = 0; x<=(this->dim_plateau[0]); x++){ //colonnes
        if(i == 1){
          cout << "-+";
        }
        else {
          if(y == 0) {
            if(x == 0) {
              cout << " |";
            }
            else {
              cout << 'A'+x-1 << "|";
            }
          }
          else {
            if(x == 0) {
              cout << y << "|";
            }
            else {
              if((plateau[x][y]=="eau")||((plateau[x][y]=="plouf")&&(egal==true))||((plateau[x][y]=="bateau")&&(egal==false))) {
                cout << " |";
              }
              else if((plateau[x][y]=="plouf")&&(egal==false)) {
                cout << "○|";
              }
              else if((plateau[x][y]=="bateau")&&(egal==true)) {
                cout << "■|";
              }
              else if(plateau[x][y]=="touche") {
                cout << "□|";
              }
            }
          }
        }
      }
      cout << endl;
    }
  }
  
  
  /*if(Observateur.getnom() == Observe.getnom()) {
    //afficher le vide, les bateaux, les touchés
  }
  else {
    //afficher le vide, les touchés, les ploufs
  }*/
}

void Partie::Tour(Joueur &Actif, Joueur &Passif){ //méthode d'affichage
  char temp, x;
  int y;
  cout << endl << "Au tour du Joueur " << Actif.getnom() << " :"<< endl;
  cin >> temp; //première temporisation

  clear();
  cout << endl << "Etat de votre flotte " << Actif.getnom() << " :"<< endl;
  Affichage(Actif, Actif);
  cin >> temp; //temporisation

  clear();
  cout << endl << "Etat du champ adverse :"<< endl;
  Affichage(Actif, Passif);
  cout << endl << "Veuillez saisir les coordonées d'attaque :" << endl << "x : ";
  cin >> x; //saisie
  cout << endl << "y : ";
  cin >> y; //saisie

  clear();
  cout << endl << "Etat du champ adverse :"<< endl;
  Affichage(Actif, Passif);
  cin >> temp; //temporisation
}

void Partie::Deroulement() {
  
}
