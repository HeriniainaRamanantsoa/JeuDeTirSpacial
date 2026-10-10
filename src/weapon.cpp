#include "weapon.h"

Weapon::Weapon (int maxBullet,double x,double y) {
    this->maxBullet = maxBullet;
    this->position.set_position (x, y);
    for (int x(0);x < maxBullet;x++) {
        Bullet bullet (x, y, BULLET_SPEED);
        this->cartridge.push_back (bullet);
    }
    std::cout << "arme créée" << std::endl;
}

Weapon::~Weapon () {}

void Weapon::reload () {
    double x = this->position.get_x ();
    double y = this->position.get_y ();
    while (this->cartridge.size() < this->maxBullet) {
        Bullet bullet (x, y, BULLET_SPEED);
        this->cartridge.push_back (bullet);
    }
    std::cout << "Cartouche rechargée" << std::endl;
}

Bullet Weapon::shoot () {
    if (this->cartridge.size() == 0) {
        reload ();
    }
    Bullet bullet = this->cartridge.back ();
    this->cartridge.pop_back ();
    std::cout << "Tire effectué" << std::endl;
    return bullet;
}
