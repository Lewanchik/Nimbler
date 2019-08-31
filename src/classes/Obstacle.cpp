//
// Created by anton on 8/31/19.
//

#include "Obstacle.hpp"

int Obstacle::getType() const
{
	return _type;
}

s_coordinates Obstacle::getPossition() const
{
	return _position;
}

std::string Obstacle::getAvatar() const
{
	return *_avatar;
}

void Obstacle::setCoordinates(s_coordinates possition)
{
	_position = possition;
}

Obstacle::Obstacle(std::string *avatar, const s_coordinates &position)
		: _avatar(avatar), _position(position)
{
}
