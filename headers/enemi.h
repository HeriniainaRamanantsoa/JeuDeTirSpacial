#ifndef __ENEMI__
#define __ENEMI__

#include "position.h"
#include "weapon.h"

class Enemi {
    private:
        Position position;
        Weapon weapon;
        int healtPoints;
        int vitesse;
    public:
        Enemi ();
        ~Enemi ();
        void move_forward ();
        void move_backward ();
        void move_right ();
        void move_left ();
}

#endif
