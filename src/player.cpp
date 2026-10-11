#include <iostream>
#include "../headers/player.h"
#include "../headers/constants.h"

Player::Player (std::string pseudo,double  x,double y) :
pseudo (pseudo),
healthPoints (MAX_HEALTH_POINT),
vitesse (PLAYER_VITESSE),
position(x,y),
weapon (PUISSANCE_WEAPON,MAX_BULLET,x,y) {
    std::cout << "Joueur créé" << std::endl;
}

Player::~Player () {}

void Player::move_forward () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    y += this->vitesse;
    this->position.set_position (x,y);
    std::cout << "Joueur déplacé vers l'avant" << std::endl;
}

void Player::move_backward () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    y -= this->vitesse;
    this->position.set_position (x,y);
    std::cout << "Joueur déplacé vers l'arrière" << std::endl;
}

void Player::move_right () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    x += this->vitesse;
    this->position.set_position (x,y);
    std::cout << "Joueur déplacé vers la droite" << std::endl;
}

void Player::move_left () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    x -= this->vitesse;
    this->position.set_position (x,y);
    std::cout << "Joueur déplacé vers la gauche" << std::endl;
}

Bullet Player::shoot () {
    Bullet bullet = this->weapon.shoot ();
    return bullet;
}

void Player::reload () {
    this->weapon.reload ();
}











