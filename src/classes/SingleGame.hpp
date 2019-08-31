//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_SINGLEGAME_HPP
#define NIMBLER_SINGLEGAME_HPP

#include "Snake.hpp"
#include "../../includes/includes.hpp"

class SingleGame
{
public:
	int getScore() const;

	int getGameSpeed() const;

	Snake *getSnake() const;

	const s_field &getField() const;

	void addScore(int score);

private:
	int		_score;
	int		_gameSpeed;
	Snake	*_snake;
	s_field	_field;
};


#endif //NIMBLER_SINGLEGAME_HPP
