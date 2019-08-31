//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_SINGLEGAME_HPP
#define NIMBLER_SINGLEGAME_HPP

#include "Snake.hpp"
#include "../../includes/includes.hpp"

template <unsigned short width, unsigned short height>
class SingleGame
{
public:
	int getScore() const
	{
		return _score;
	}

	int getGameSpeed() const
	{
		return _gameSpeed;
	}

	Snake *getSnake() const
	{
		return _snake;
	}

	void addScore(int score)
	{
		return _snake;
	}

	const Field<width, height> &getField() const
	{
		return _field;
	}

private:
	int						_score;
	int						_gameSpeed;
	Snake					*_snake;
	Field<width, height>	_field;
};


#endif //NIMBLER_SINGLEGAME_HPP
