#ifndef NIMBLER_FIELDACTIONS_HPP
#define NIMBLER_FIELDACTIONS_HPP

#include "../src/classes/SingleGame.hpp"
#include "../src/classes/Obstacle.hpp"
#include "collision.hpp"

template <unsigned short Twidth, unsigned short Theight>
void	zeroingField(SingleGame<Twidth, Theight> &singleGame)
{
	Field<Twidth, Theight> &field = singleGame.getField();
	s_coordinates pos = {0, 0};

	for (unsigned short i = 0; i < Theight; i++)
	{
		for (unsigned short j = 0; j < Twidth; j++)
		{
			if (i == 0 || i == Theight - 1 || j == 0 || j == Twidth - 1)
			{
				pos.x = j;
				pos.y = i;
				field[i][j] = new Obstacle(new std::string("X"), pos);
			}
			else
				field[i][j] = nullptr;
		}
	}
}

template <unsigned short Twidth, unsigned short Theight>
void	setSnakeOnField(SingleGame<Twidth, Theight> &singleGame)
{
	Field<Twidth, Theight> &field = singleGame.getField();
	auto &snakeBody = singleGame.getSnake().getBody();

	field[singleGame.getSnake().getHead().getPosition().y]
	[singleGame.getSnake().getHead().getPosition().x] =
			&singleGame.getSnake().getHead();
	for (auto &i : snakeBody)
		field[i.getPosition().y][i.getPosition().x] = dynamic_cast<IEntity *>(&i);
}

template <unsigned short Twidth, unsigned short Theight>
void	printMapInTerm(SingleGame<Twidth, Theight> &singleGame)
{
	for (unsigned short i = 0; i < Theight; i++)
	{
		for (unsigned short j = 0; j < Twidth; j++)
		{
			if (singleGame.getField()[i][j] == nullptr)
				std::cout << " ";
			else
				std::cout << singleGame.getField()[i][j]->getAvatar();
		}
		std::cout << std::endl;
	}
	std::cout << "Score: " << singleGame.getScore() << std::endl;
}

template <unsigned short Twidth, unsigned short Theight>
void removeNecessaryElements(SingleGame<Twidth, Theight> &singleGame)
{
	Field<Twidth, Theight> &field = singleGame.getField();
	auto &snakeBody = singleGame.getSnake().getBody();

	field[singleGame.getSnake().getHead().getPosition().y]
	[singleGame.getSnake().getHead().getPosition().x] = nullptr;
	for (auto &i : snakeBody)
		field[i.getPosition().y][i.getPosition().x] = nullptr;
}

bool	isEntityOnField(IEntity *iEntity, unsigned short width, unsigned short height)
{
	return iEntity->getPosition().y >= 0 &&
		iEntity->getPosition().x >= 0 &&
		iEntity->getPosition().y < height &&
		iEntity->getPosition().x < width;
}

template <unsigned short Twidth, unsigned short Theight>
void	newFrame(SingleGame<Twidth, Theight> &singleGame)
{
	collision<Twidth, Theight>(singleGame);
	removeNecessaryElements<Twidth, Theight>(singleGame);
	singleGame.getSnake().moveSnake();
	singleGame.getSnake().getHead().move();
	setSnakeOnField<Twidth, Theight>(singleGame);
	if (singleGame.getBonusFood().getDyingFrame() == singleGame.getFrameCounter())
	{
		singleGame.getField()[singleGame.getBonusFood().getPosition().y]
		[singleGame.getBonusFood().getPosition().x] = nullptr;
		singleGame.getBonusFood().setCoordinates({-1, -1});
		singleGame.setFreeCells(singleGame.getFreeCells() + 1);
	}
	if (!isEntityOnField(dynamic_cast<IEntity *>(&singleGame.getFood()), Twidth, Theight))
	{
		singleGame.setCoordinatesFood(food);
		singleGame.getField()[singleGame.getFood().getPosition().y]
		[singleGame.getFood().getPosition().x] =
				&singleGame.getFood();
	}
	if (singleGame.getFoodEatenCounter() != 0 && singleGame.getFoodEatenCounter() % 5 == 0 && !isEntityOnField(dynamic_cast<IEntity *>(&singleGame.getBonusFood()), Twidth, Theight))
	{
		if (singleGame.getBonusFood().getDyingFrame() == singleGame.getFrameCounter() || singleGame.getBonusFood().getDyingFrame() == 0)
		{
			singleGame.setCoordinatesFood(bonusFood);
			singleGame.getField()[singleGame.getBonusFood().getPosition().y]
			[singleGame.getBonusFood().getPosition().x] =
					&singleGame.getBonusFood();
		}
	}
	std::cout << "Food coordinates: " << singleGame.getFood().getPosition().y << " " << singleGame.getFood().getPosition().x << std::endl;
	std::cout << "Free cells number: " << countFreeCells<Twidth, Theight>(singleGame.getField()) << std::endl;
	singleGame.setFrameCounter(singleGame.getFrameCounter() + 1);
}


#endif //NIMBLER_FIELDACTIONS_HPP
