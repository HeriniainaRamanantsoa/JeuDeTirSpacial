#include <iostream>
#include "../headers/player.h"
#include "../headers/bullet.h"
#include "../headers/enemi.h"

int main () {
    Player player ("Heriniaina",0,0);
    std::cout << "----------------------------------------------" << std::endl;
    Enemi enemi (0,500);
    std::cout << "----------------------------------------------" << std::endl;
    player.move_forward ();
    std::cout << "----------------------------------------------" << std::endl;
    player.move_right ();
    std::cout << "----------------------------------------------" << std::endl;
    Bullet bullet = player.shoot ();
    std::cout << "----------------------------------------------" << std::endl;
    player.move_backward ();
    std::cout << "----------------------------------------------" << std::endl;
    player.move_left ();
    std::cout << "----------------------------------------------" << std::endl;
    bullet = player.shoot ();
    std::cout << "----------------------------------------------" << std::endl;
    enemi.move_left ();
    std::cout << "----------------------------------------------" << std::endl;
    Bullet bulletEnemi = enemi.shoot ();
    std::cout << "----------------------------------------------" << std::endl;
    player.reload ();
    std::cout << "----------------------------------------------" << std::endl;
    return 0;
}
