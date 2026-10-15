#ifndef __PLAYER__
#define __PLAYER__

#include <string>
#include "position.h"
#include "weapon.h"
#include "bullet.h"

class Player {
	private:
		std::string pseudo;
        Position position;
        Weapon weapon;
        int healthPoints;
        int vitesse;
    public:
        Player (std::string pseudo,double x,double y);
        ~Player ();
        void move_forward ();
        void move_backward ();
        void move_right ();
        void move_left ();
        Bullet shoot ();
        void reload ();
};

#endif
