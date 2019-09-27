//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_SINGLEGAME_HPP
#define NIMBLER_SINGLEGAME_HPP

#include <vector>
#include "Snake.hpp"
#include "Field.hpp"
#include "BonusFood.hpp"
#include "../../includes/includes.hpp"
#include "../../includes/freeCells.hpp"

template <unsigned short width, unsigned short height>
class SingleGame
{
public:
	SingleGame()
	{
		_foodEatenCounter = 0;
		_score = 0;
		_gameSpeed = 1;
		_frameCounter = 0;
		_snake = new Snake(
				new std::string("B"),
				SnakeHead(
						new std::string("H"),
						s_coordinates{width / 2, height / 2}
						)
				);
		_bonusFood = new BonusFood(new std::string("#"), 20, {-1, -1}, width + height);
		_food = new Food(new std::string("*"), 10, {-1, -1});
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

	unsigned	getFreeCells()
	{
		return _freeCells;
	}

	int			getFoodEatenCounter()
	{
		return _foodEatenCounter;
	}

	void		setFreeCells(unsigned freeCells)
	{
		_freeCells = freeCells;
	}

	void 		setFrameCounter(int frameCounter)
	{
		_frameCounter = frameCounter;
	}

	int			getFrameCounter()
	{
		return _frameCounter;
	}

	void 		setCoordinatesFood(int typeOfFood)
	{
		int				random;
		int				counter;

		random = randomSellForFood(_freeCells);
		std::cout << "Random number: " << random << std::endl;
		counter = 0;
		for (int i = 1; i < height - 1; i++)
		{
			for (int j = 1; j < width - 1; j++)
			{
				if (counter == random)
				{
					if (typeOfFood == food)
					{
						_food->setCoordinates({j, i});
						if (_bonusFood->getDyingFrame() == 0)
							_foodEatenCounter++;
					}
					else if(typeOfFood == bonusFood)
					{
						_bonusFood->setCoordinates({j, i});
						_bonusFood->setDyingFrame(_bonusFood->getTimeToDestroy()
						+ _frameCounter);
					}
					else
						return;
					_freeCells--;
					return ;
				}
				if (_field[i][j] == nullptr)
					counter++;
			}
		}
	}

private:
	int						_score;
	int						_gameSpeed;
	Snake					*_snake;
	Field<width, height>	_field;
	BonusFood				*_bonusFood;
	Food					*_food;
	unsigned				_freeCells;
	int 					_foodEatenCounter;
	int 					_frameCounter;
};


#endif //NIMBLER_SINGLEGAME_HPP
