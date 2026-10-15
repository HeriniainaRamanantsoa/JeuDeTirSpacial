#include <iostream>
#include "../headers/player.h"
#include "../headers/constants.h"

Player::Player (std::string pseudo,double  x,double y) :
Character (x, y),
pseudo (pseudo) {
    this->resistance = PLAYER_RESISTANCE;
    this->vitesse = PLAYER_RESISTANCE;
    std::cout << "Joueur créé" << std::endl;
}

Player::~Player () {}
