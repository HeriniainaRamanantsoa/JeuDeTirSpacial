#ifndef __BULLET__
#define __BULLET__

#include "position.h"

class Bullet {
    private:
        Position position;
        int speed;
        int power;
    public:
        Bullet (double x,double y,int speed);
        ~Bullet ();
        void move ();
};

#endif
