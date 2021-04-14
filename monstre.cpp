#include "monstre.h"

using namespace std;

Monstre::Monstre() : nomM("Kappa"), atq(3), hp(2), currentState(true){

}

Monstre::Monstre(std::string nom, int pv, int degats, bool etat) : nomM(nom), hp(pv), atq(degats), currentState(etat){

}

