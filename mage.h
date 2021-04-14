#ifndef MAGE_H
#define MAGE_H

#include "Monstre.h"
#include <iostream>
#include <string>
#include <vector>

class Mage{

    private:
        std::string _name;
        int _hp;
        std::vector<Monstre> _board;

    public:
        Mage();
        void Affichage();
        void ajoutMonstre(Monstre monstre);
        void suprimerMonstre();

};

#endif