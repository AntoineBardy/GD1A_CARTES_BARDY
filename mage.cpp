#ifndef MAGE_CPP
#define MAGE_CPP

#include "Mage.h"
#include <iostream>
#include <string>
#include <vector>

Mage::Mage(): _name("Mage"), _hp(30){
    Monstre test = Monstre();
    _board.push_back(test);

}

void Mage::printStat(){
    std::cout << "Name: " << _name << " || Hp: " << _hp  << std::endl << "Board:" << std::endl;
    for (int i = 0; i < _board.size(); i++){
        _board[i].Affichage();
    }
}

void Mage::ajoutMonstre(Monstre monster){
    _board.push_back(monster);
}



#endif