//
// Created by Denis LEWANDOWSKI on 2019-08-28.
//

#include "SnakePart.hpp"
#include <random>


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

SnakePart::SnakePart(std::string *avatar) :
	_avatar(avatar),
	_type(Type::bodySnake)
{
	s_coordinates position{255,255}; //TODO: Изменить установку координат на центр экрана
	this->_possition = position;
}
