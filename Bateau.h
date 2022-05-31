#pragma once
#include <string>
#include <iostream>

#define NORD 0
#define SUD 1
#define EST 2
#define OUEST 3

using namespace std;

class bateau
{
private :
	int posX = 0;
	int posY = 0;
	
	int taille = 0;
	string tabVie[5];

public:
	bateau();
	bateau(int x, int y, int taille, string orientation);
	void afficherCoordonnees();
	void afficherInfoBateau();

	// GETTERS
	int getPosX();
	int getPosY();
	string getOrientation();
	int getTaille();
	string getTabVie(int num);

	// SETTERS
	void setPosX(int posX);
	void setPosY(int posY);
	void setOrientation(string orientation);
	void setTaille(int taille);
	void setTabVie(int num, string valeur);





};
