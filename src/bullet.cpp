#include <iostream>
#include "../headers/bullet.h"

Bullet::Bullet (double x,double y,int speed) :
position (x,y),
speed (speed) {
    std::cout << "balle créée" << std::endl;
}

Bullet::~Bullet () {}

void Bullet::move () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    this->position.set_position (x + speed,y);
    std::cout << "balle déplacée" << std::endl;
}
