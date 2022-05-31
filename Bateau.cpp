#include "bateau.h"

bateau::bateau(int x, int y, int taille, string orientation) {
	this->posX = x;
	this->posY = y;
	this->taille = taille;
	this->orientation = orientation;
}

bateau::bateau()
{
	this->orientation = "None";
	for (int i = 0; i < this->taille; i++) {
		this->tabVie[i] = "intact";
	}
	for (int i = taille; i < 5; i++)
	{
		this->tabVie[i] = "None";
	}
}

void bateau::afficherCoordonnees()
{
	cout << "X = " << this->posX << ", Y = " << this->posY << endl;
}
void bateau::afficherInfoBateau()
{
	this->afficherCoordonnees();
	cout << "orientation = " << this->orientation << endl;
	cout << "tabVie = ";
	for(int i = 0; i < 5; i++) {
		cout << this->tabVie[i]<<", ";
	}
	cout << endl;

}

// GETTERS
int bateau::getPosX() {
	return this->posX;
}
int bateau::getPosY() {
	return this->posY;
}
string bateau::getOrientation() {
	return this->orientation;
}
int bateau::getTaille() {
	return this->taille;
}
string bateau::getTabVie(int num) {
	return this->tabVie[num];
}

// SETTERS
void bateau::setPosX(int posX) {
	this->posX = posX;
}
void bateau::setPosY(int posY) {
	this->posY = posY;
}
void bateau::setOrientation(string orientation) {
	this->orientation = orientation;
}
void bateau::setTaille(int taille) {
	this->taille = taille;
}
void bateau::setTabVie(int num, string valeur) {
	this->tabVie[num] = valeur;
}