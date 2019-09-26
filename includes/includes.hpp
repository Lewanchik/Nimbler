#ifndef NIMBLERGIT_INCLUDES_HPP
#define NIMBLERGIT_INCLUDES_HPP

#include <string>
#include <iostream>
#include <list>

#define START_NUMBER_SNAKE_BODY_PARTS 3

struct s_coordinates
{
    int x;
    int y;
};



enum Type
{
    headSnake,
    bodySnake,
    food,
    bonusFood,
    obstacle
};

enum Direction
{
    right,
    down,
    left,
    up
};


#endif
