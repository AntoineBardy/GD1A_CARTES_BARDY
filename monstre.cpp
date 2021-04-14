#include "monstre.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Monstre::Monstre() : nomM("Kappa"), atq(3), hp(2), currentState(true){

}

Monstre::Monstre(std::string nom, int pv, int degats, bool etat) : nomM(nom), hp(pv), atq(degats), currentState(etat){

}

void Monstre::Affichage(){
    std::cout <<nomM << " : Attaque = " << atq << " Point de vie = " << hp << endl;
    if (hp == 0){
        std::cout << nomM << " est mort " << endl;
    }
}

void Monstre::Attaque(Monstre &ennemis){
    if (currentState){
        ennemis.priseDegats(getDegats());
    }
    else{
        std::cout << nomM << "ne peux plus attaquer " << endl;

    }
}

void Monstre::priseDegats (int nbDegats){
    hp -= nbDegats;

    if (hp < 0)
    {
        hp = 0;
    }
}

int Monstre::getDegats() const{
    return atq;
}