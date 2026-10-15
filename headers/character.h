#ifndef __CHARACTER__
#define __CHARACTER__

#include "position.h"
#include "weapon.h"
#include "bullet.h";
#define MAX_X 600
#define MAX_Y 600

class Character {
    private:
        Position position;
        Weapon weapon;
        int resistance;
        int healthPoints;
        int vitesse;
    public:
        Character (double x,double y);
        ~Character ();
        void move_forward ();
        void move_backward ();
        void move_right ();
        void move_left ();
        Bullet shoot ();
        void reload ();
};

#endif
