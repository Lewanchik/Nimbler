//
// Created by Denis LEWANDOWSKI on 2019-08-28.
//

#include "SnakePart.hpp"
#include <random>


int SnakePart::getType() const
{
    return _type;
}

s_coordinates SnakePart::getPosition() const
{
    return _position;
}

std::string SnakePart::getAvatar() const
{
    return *_avatar;
}

void SnakePart::setCoordinates(s_coordinates position)
{
    _position = position;
}

SnakePart::SnakePart(std::string *avatar, s_coordinates coordinates) :
    _avatar(avatar),
    _position(coordinates)
{
    _type = Type::bodySnake;
}

SnakePart::SnakePart(std::string *avatar) :
	_avatar(avatar),
	_type(Type::bodySnake)
{
	s_coordinates position{255,255}; //TODO: Изменить установку координат на центр экрана
	this->_position = position;
}
