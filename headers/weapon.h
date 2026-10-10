#ifndef __WEAPON__
#define __WEAPON__

#include <vector>
#include "bullet.h"
#include "Position.h"
#define BULLET_SPEED 2

class Weapon {
    private:
        int maxBullet;
        std::vector<Bullet> cartridge;
        Position position;
    public:
        Weapon (int maxBullet,double x,double y);
        ~Weapon ();
        void reload ();
        Bullet shoot ();
};

#endif
