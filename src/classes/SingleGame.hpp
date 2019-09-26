//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_SINGLEGAME_HPP
#define NIMBLER_SINGLEGAME_HPP

#include "Snake.hpp"
#include "Field.hpp"
#include "BonusFood.hpp"
#include "../../includes/includes.hpp"

template <unsigned short width, unsigned short height>
class SingleGame
{
public:
	SingleGame()
	{
		_score = 0;
		_gameSpeed = 1;
		_snake = new Snake(
				new std::string("B"),
				SnakeHead(
						new std::string("H"),
						s_coordinates{width / 2, height / 2}
						)
				);
		_bonusFood = new BonusFood(new std::string("#"), 10, {-1,-1}, 5);
		_food = new Food(new std::string("*"), 10, {-1,-1});

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
		return *_snake;
	}

	void addScore(int score)
	{
		_score += score;
	}

	Field<width, height> &getField()
	{
		return _field;
	}

	BonusFood &getBonusFood() const
	{
		return *_bonusFood;
	}

	Food &getFood() const
	{
		return *_food;
	}

private:
	int						_score;
	int						_gameSpeed;
	Snake					*_snake;
	Field<width, height>	_field;
	BonusFood				*_bonusFood;
	Food					*_food;
};


#endif //NIMBLER_SINGLEGAME_HPP
