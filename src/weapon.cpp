#include <iostream>
#include "../headers/weapon.h"

Weapon::Weapon (int puissance,int maxBullet,double x,double y) :
puissance (puissance),
maxBullet (maxBullet),
position (x,y) {
    while (cartridge.size() < maxBullet) {
        Bullet bullet (x, y, this->puissance * 1.5);
        this->cartridge.push_back (bullet);
    }
    std::cout << "arme créée" << std::endl;
}

Weapon::~Weapon () {}

void Weapon::reload () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    while (this->cartridge.size() < this->maxBullet) {
        Bullet bullet (x, y, this->puissance * 1.5);
        this->cartridge.push_back (bullet);
    }
    std::cout << "Cartouche rechargée !! total minution : " << this->cartridge.size() << std::endl;
}

Bullet Weapon::shoot () {
    if (this->cartridge.size() == 0) {
        reload ();
    }
    Bullet bullet = this->cartridge.back ();
    this->cartridge.pop_back ();
    std::cout << "Tire effectué !! reste minutions : " << this->cartridge.size() << std::endl;
    return bullet;
}
