//
// Created by lewan on 31.08.19.
//

#include "BonusFood.hpp"

s_coordinates BonusFood::getPosition() const
{
    return _position;
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

void BonusFood::setCoordinates(s_coordinates position)
{
	_position = position;
}

void BonusFood::setDyingFrame(int dyingFrame)
{
	_dyingFrame = dyingFrame;
}

BonusFood::BonusFood(std::string *avatar, unsigned score, int timeToDestroy) : Food(avatar, score)
{
    _timeToDestroy = timeToDestroy;
}

BonusFood::BonusFood(std::string *avatar, unsigned score,
					 s_coordinates position, int timeToDestroy) : Food(avatar, score, position)
{
    _timeToDestroy = timeToDestroy;
    _type = bonusFood;
    _dyingFrame = 0;
}

int BonusFood::getDyingFrame() const
{
	return _dyingFrame;
}
