#pragma once
#include <string>
#include <iostream>

#define NORD 0
#define SUD 1
#define EST 2
#define OUEST 3

#define PLOUF 0
#define TOUCHE 1
#define COULE 2

using namespace std;

class bateau
{
private :
	int posX = 0;
	int posY = 0;
	int orientation;
	int taille = 0;
	int tabVie[5] = {0};

public:
	bateau();
	bateau(int x, int y, int taille, int orientation);
	void afficherCoordonnees();
	void afficherInfoBateau();
    int getShot(int x, int y);

	// GETTERS
	int getPosX();
	int getPosY();
	int getOrientation();
	int getTaille();
	int getTabVie(int num);

	// SETTERS
	void setPosX(int posX);
	void setPosY(int posY);
	void setOrientation(int orientation);
	void setTaille(int taille);
	void setTabVie(int num, int valeur);





};
