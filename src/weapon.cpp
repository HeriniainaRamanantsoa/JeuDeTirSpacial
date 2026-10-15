#include <iostream>
#include "../headers/weapon.h"
#include "../headers/constants.h"

Weapon::Weapon (double x,double y) :
puissance (PUISSANCE_WEAPON),
maxBullet (MAX_BULLET),
position (x,y) {
    while (cartridge.size() < maxBullet) {
        Bullet bullet (x, y, this->puissance * COEFF_VITESSE_BULLET);
        this->cartridge.push_back (bullet);
    }
    std::cout << "arme créée" << std::endl;
}

Weapon::~Weapon () {}

void Weapon::reload () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    while (this->cartridge.size() < this->maxBullet) {
        Bullet bullet (x, y, this->puissance * COEFF_VITESSE_BULLET);
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
