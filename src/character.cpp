#include <iostream>
#include "../headers/character.h"
#include "../headers/constants.h"

Character::Character (double x,double y) :
healthPoints (MAX_HEALTH_POINT),
vitesse (CHARACTER_VITESSE),
position (x,y),
weapon (PUISSANCE_WEAPON,MAX_BULLET,x,y)
