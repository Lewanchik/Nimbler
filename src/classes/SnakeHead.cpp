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

unsigned short SnakeHead::getDirrection()
{
    return _direction;
}

s_coordinates SnakeHead::getPossition() const
{
    return _possition;
}

bool SnakeHead::isFoodInside()
{
    return _foodInside;
}

std::string SnakeHead::getAvatar() const
{
    return *_avatar;
}

void SnakeHead::setCoordinates(s_coordinates possition)
{
    _possition = possition;
}

void SnakeHead::setDirection(unsigned short direction)
{
    _direction = direction;
}
