#ifndef __PLAYER__
#define __PLAYER__

#include <string>
#include "position.h"
#include "weapon.h"
#include "bullet.h"
#include "character.h"

class Player : public Character  {
	private:
		std::string pseudo;
    public:
        Player (std::string pseudo,double x,double y);
        ~Player ();
};

#endif
