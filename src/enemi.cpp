#include <iostream>
#include "../headers/enemi.h"
#include "../headers/constants.h"

Enemi::Enemi (double x,double y) :
Character (x,y) {
    this->resistance = ENEMI_RESISTANCE;
    this->vitesse = ENEMI_VITESSE;
    std::cout << "Enemi créé" << std::endl;
}

Enemi::~Enemi () {}
