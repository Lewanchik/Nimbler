#ifndef NIMBLER_FIELDACTIONS_HPP
#define NIMBLER_FIELDACTIONS_HPP

#include "../src/classes/SingleGame.hpp"
#include "../src/classes/Obstacle.hpp"

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
void	newFrame(SingleGame<Twidth, Theight> &singleGame)
{

}


#endif //NIMBLER_FIELDACTIONS_HPP
