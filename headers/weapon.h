#ifndef __WEAPON__
#define __WEAPON__

#include <vector>
#include "bullet.h"
#include "position.h"

class Weapon {
    private:
        int maxBullet;
        int puissance;
        std::vector<Bullet> cartridge;
        Position position;
    public:
        Weapon (int puissance,int maxBullet,double x,double y);
        ~Weapon ();
        void reload ();
        Bullet shoot ();
};

#endif
