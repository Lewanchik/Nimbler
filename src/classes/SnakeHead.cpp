//
// Created by lewan on 29.08.19.
//

#include "SnakeHead.hpp"

SnakeHead::SnakeHead(std::string *avatar, s_coordinates coordinates)
        : SnakePart(avatar, coordinates) {
    _type = Type ::headSnake;
    _foodInside = false;
    _direction = Direction::right;
}

int SnakeHead::getType() const
{
    return _type;
}

unsigned short SnakeHead::getDirection()
{
    return _direction;
}

s_coordinates SnakeHead::getPosition() const
{
    return _position;
}

bool SnakeHead::isFoodInside()
{
    return _foodInside;
}

std::string SnakeHead::getAvatar() const
{
    return *_avatar;
}

void SnakeHead::setCoordinates(s_coordinates position)
{
    _position = position;
}

void SnakeHead::setDirection(unsigned short direction)
{
    _direction = direction;
}
