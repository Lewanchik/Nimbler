//
// Created by anton on 8/31/19.
//

#include "SingleGame.hpp"

int SingleGame::getScore() const
{
	return _score;
}

int SingleGame::getGameSpeed() const
{
	return _gameSpeed;
}

Snake *SingleGame::getSnake() const
{
	return _snake;
}

const s_field &SingleGame::getField() const
{
	return _field;
}

void SingleGame::addScore(int score)
{
	_score += score;

}
