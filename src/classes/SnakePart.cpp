//
// Created by Denis LEWANDOWSKI on 2019-08-28.
//

#include "SnakePart.hpp"

int SnakePart::getType() const
{
    return _type;
}

s_coordinates SnakePart::getPossition() const
{
    return _possition;
}

std::string SnakePart::getAvatar() const
{
    return *_avatar;
}

void SnakePart::setCoordinates(s_coordinates possition)
{
    _possition = possition;
}

SnakePart::SnakePart(std::string *avatar, s_coordinates coordinates) :
    _avatar(avatar),
    _possition(coordinates)
{
    _type = Type::bodySnake;
}

