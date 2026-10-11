#include <iostream>
#include <random>
#include "../headers/position.h"

Position::Position (double x,double y) :
maxX (DEFAULT_WIDTH),
maxY (DEFAULT_HEIGHT),
x (x),
y (y) {
    std::cout << "position créée : (" << this->x << "," << this->y << ")" << std::endl; 
}

Position::~Position () {}

void Position::generate_position () {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distribX(0.0,this->maxX);
    std::uniform_real_distribution<double> distribY(0.0,this->maxY);
    double randomX = distribX(gen);
    double randomY = distribY(gen);
    std::cout << "position initialisée : (" << randomX << "," << randomY << ")" << std::endl;
}

void Position::set_position (double x,double y) {
    if (x >= 0 && x <= this->maxX && y >= 0 && y <= this->maxY) {
        this->x = x;
        this->y = y;
        std::cout << "position modifiée : (" << x << "," << y << ")" << std::endl;
    }
    else {
        std::cout << "position incorrecte : (" << x << "," << y << ")" << std::endl; 
    }
}

double Position::get_x () {
    return this->x;
}

double Position::get_y () {
    return this->y;
}
