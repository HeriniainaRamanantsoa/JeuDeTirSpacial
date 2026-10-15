#include <iostream>
#include "../headers/character.h"
#include "../headers/constants.h"

Character::Character (double x,double y) :
weapon (PUISSANCE_WEAPON,MAX_BULLET,x,y),
healthPoints (MAX_HEALTH_POINT),
position (x,y),
resistance (CHARACTER_RESISTANCE),
vitesse (CHARACTER_VITESSE) {
    std::cout << "Caractère créé" << std::endl;
}

Character::~Character () {}

void Character::move_forward () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    y += this->vitesse;
    this->position.set_position (x,y);
    std::cout << "Caractère déplacé vers l'avant" << std::endl;
}

void Character::move_backward () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    y -= this->vitesse;
    this->position.set_position (x,y);
    std::cout << "Caractère déplacé vers l'arrière" << std::endl;
}

void Character::move_right () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    x += this->vitesse;
    position.set_position (x,y);
    std::cout << "Caractère déplacé vers la droite" << std::endl;
}

void Character::move_left () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    x -= this->vitesse;
    position.set_position (x,y);
    std::cout << "Caractère déplacé vers la gauche" << std::endl;
}

Bullet Character::shoot () {
    Bullet bullet = this->weapon.shoot ();
    return bullet;
}

void Character::reload () {
    this->weapon.reload ();
}



















