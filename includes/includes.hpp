
#ifndef NIMBLERGIT_INCLUDES_HPP
#define NIMBLERGIT_INCLUDES_HPP

#include <string>
#include <vector>
#include "../src/classes/IEntity.hpp"


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
