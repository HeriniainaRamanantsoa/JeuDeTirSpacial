#include <iostream>
#include "../headers/player.h"
#include "../headers/bullet.h"

int main () {
    Player player ("Heriniaina",0,0);
    player.move_forward ();
    Bullet bullet = player.shoot ();
    player.reload ();
    return 0;
}
