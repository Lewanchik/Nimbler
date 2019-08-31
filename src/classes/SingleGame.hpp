//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_SINGLEGAME_HPP
#define NIMBLER_SINGLEGAME_HPP

#include "Snake.hpp"
#include "Field.hpp"
#include "../../includes/includes.hpp"

template <unsigned short width, unsigned short height>
class SingleGame
{
public:
	SingleGame()
	{
		_score = 0;
		_gameSpeed = 1;
		_snake = Snake(SnakeHead(new std::string("H")));
	}

	int getScore() const
	{
		return _score;
	}

	int getGameSpeed() const
	{
		return _gameSpeed;
	}

	Snake &getSnake() const
	{
		return _snake;
	}

	void addScore(int score)
	{
		_score += score;
	}

	Field<width, height> &getField()
	{
		return _field;
	}

private:
	int						_score;
	int						_gameSpeed;
	Snake					_snake;
	Field<width, height>	_field;
};


#endif //NIMBLER_SINGLEGAME_HPP
