//
// Created by lewan on 31.08.19.
//

#include "BonusFood.hpp"

s_coordinates BonusFood::getPosition() const
{
    return _possition;
}

std::string BonusFood::getAvatar() const
{
    return *_avatar;
}

unsigned BonusFood::getScore() const
{
    return _score;
}

int BonusFood::getTimeToDestroy() const
{
    return _timeToDestroy;
}

int BonusFood::getType() const
{
    return _type;
}

void BonusFood::setCoordinates(s_coordinates possition)
{
    _possition = possition;
}

BonusFood::BonusFood(std::string *avatar, unsigned score, int timeToDestroy) : Food(avatar, score)
{
    _timeToDestroy = timeToDestroy;
}

BonusFood::BonusFood(std::string *avatar, unsigned score,
                     s_coordinates possition, int timeToDestoy) : Food(avatar, score, possition)
{
    _timeToDestroy = timeToDestoy;
}