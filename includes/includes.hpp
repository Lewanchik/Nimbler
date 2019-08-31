
#ifndef NIMBLERGIT_INCLUDES_HPP
#define NIMBLERGIT_INCLUDES_HPP

#include <string>
#include <vector>
#include "../src/classes/SnakePart.hpp"
#include "../src/classes/IEntity.hpp"

class IEntity;

struct s_coordinates
{
    int x;
    int y;
};

struct s_field
{
	unsigned short						width;
	unsigned short						height;
	std::vector<std::vector<IEntity *>> field;
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
