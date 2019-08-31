//
// Created by lewan on 31.08.19.
//

#include "Food.hpp"

Food::Food(std::string *avatar, unsigned score) : _avatar(avatar), _score(score)
{
    _possition = {-1, -1};
    _type = Type::food;
}

Food::Food(std::string *avatar, unsigned score, s_coordinates possition) :
        _avatar(avatar), _score(score), _possition(possition)
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

s_coordinates Food::getPossition() const
{
    return  _possition;
}

unsigned Food::getScore() const
{
    return _score;
}

void Food::setCoordinates(s_coordinates possition)
{
    _possition = possition;
}

