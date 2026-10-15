#ifndef __POSITION__
#define __POSITION__

#include "constants.h"

class Position {
    private:
        double maxX;
        double maxY;
	    double x;
	    double y;
	public:
		Position (double x,double y);
		~Position ();
		void generate_position ();
		bool set_position (double x, double y);
        double get_x ();
        double get_y ();
};

#endif

