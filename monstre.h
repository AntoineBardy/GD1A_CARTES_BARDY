#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include <iostream>
#include <string>
 
class Monstre
{
    public:
 
    Monstre();
    Monstre(std::string nom, int pv, int degats, bool etat);
    void Affichage();
    void Attaque(Monstre &ennemis);
    void priseDegats(int nbDegats);
    int getDegats() const;
 
    private:
 
    std::string nomM;
    int hp;
    int atq;
    bool currentState;
};
 
#endif
