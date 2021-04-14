#ifndef MAGE_CPP
#define MAGE_CPP

#include "Mage.h"
#include <iostream>
#include <string>
#include <vector>

Mage::Mage(): nomMage("Mage"), hpMage(35){
    Monstre test = Monstre();
    board.push_back(test);

}

void Mage::Affichage(){
    std::cout << "Name: " << nomMage << " || Hp: " << hpMage  << std::endl << "Board:" << std::endl;
    for (int i = 0; i < board.size(); i++){
        board[i].Affichage();
    }
}

void Mage::ajoutMonstre(Monstre monster){
    board.push_back(monster);
}



#endif