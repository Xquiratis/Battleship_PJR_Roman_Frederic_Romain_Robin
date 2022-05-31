#include "bateau.h"



bateau::bateau()
{
    
	this->orientation = 0;
	for (int i = 0; i < this->taille; i++) {
		this->tabVie[i] = 1;
	}
	for (int i = taille; i < 5; i++)
	{
		this->tabVie[i] = 0;
	}
}

bateau::bateau(int x, int y, int taille, int orientation) {
	this->posX = x;
	this->posY = y;
	this->taille = taille;
	this->orientation = orientation;
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
int bateau::getOrientation() {
	return this->orientation;
}
int bateau::getTaille() {
	return this->taille;
}
int bateau::getTabVie(int num) {
	return this->tabVie[num];
}

// SETTERS
void bateau::setPosX(int posX) {
	this->posX = posX;
}
void bateau::setPosY(int posY) {
	this->posY = posY;
}
void bateau::setOrientation(int orientation) {
	this->orientation = orientation;
}
void bateau::setTaille(int taille) {
	this->taille = taille;
}
void bateau::setTabVie(int num, int valeur) {
	this->tabVie[num] = valeur;
}

//RECEPTION SHOT
int bateau::getShot(int x, int y){
    int recep_vie = 0;
    int resultat = PLOUF;

    for(int j=0 ; j <this->taille;j++){
        if(this->orientation == OUEST){
            if ((this->posX == x+j) && (this->posY == y)){
                //touché !
                this->tabVie[j] = 1;
                resultat = TOUCHE;
            }
        }else if(this->orientation == NORD){
            if ((this->posX == x) && (this->posY == y+j)){
                //touché !
                this->tabVie[j] = 1;
                resultat = TOUCHE;
            }
        }else if(this->orientation == EST){

            if ((this->posX == x-j) && (this->posY == y)){
                //touché !
                this->tabVie[j] = 1;
                resultat = TOUCHE;
            }
        }else if(this->orientation == SUD){

            if ((this->posX == x) && (this->posY == y-j)){
                //touché !
                this->tabVie[j] = 1;
                resultat = TOUCHE;
            }
        }
    }
    

    for(int j=0 ; j <this->taille;j++){
        recep_vie += this->tabVie[j];
    }

    if (recep_vie == this->taille) resultat = COULE;

    return resultat;

}