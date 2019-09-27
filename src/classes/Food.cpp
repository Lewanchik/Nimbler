#include "Food.hpp"

Food::Food(std::string *avatar, unsigned score) : _avatar(avatar), _score(score)
{
	_position = {-1, -1};
    _type = Type::food;
}

Food::Food(std::string *avatar, unsigned score, s_coordinates position) :
		_avatar(avatar), _score(score), _position(position)
{
    _type = Type::food;
}


int Food::getType() const
{
    return _type;
}

std::string Food::getAvatar() const
{
    return *_avatar;
}

s_coordinates Food::getPosition() const
{
    return _position;
}

unsigned Food::getScore() const
{
    return _score;
}

void Food::setCoordinates(s_coordinates position)
{
	_position = position;
}

