
#include <string>
#include <iostream>
#include <list>
#include "classes/SingleGame.hpp"

template <unsigned short Twidth, unsigned short Theight>
void	setSnakeOnField(SingleGame<Twidth, Theight> &singleGame, IEntity **tmp)
{
	Field<Twidth, Theight> &field = singleGame.getField();
	auto &snake = singleGame.getSnake().getBody();

	for (unsigned short i = 0; i < Twidth; i++)
	{
		for (unsigned short j = 0; j < Theight; j++)
			field[i][j] = nullptr;
	}
	field[singleGame.getSnake().getHead().getPosition().y][singleGame.getSnake().getHead().getPosition().x] = &singleGame.getSnake().getHead();
	for (auto &i : snake)
	{
		field[i.getPosition().y][i.getPosition().x] = dynamic_cast<IEntity *>(&i);
	}
	*tmp = field[5][2];
}


int		main()
{
	const unsigned short WIDTH = 10;
	const unsigned short HEIGHT = 10;
	SingleGame<WIDTH, HEIGHT> singleGame;
	IEntity *tmp;

	setSnakeOnField<WIDTH, HEIGHT>(singleGame, &tmp);

	for (unsigned short i = 0; i < HEIGHT; i++)
	{
		for (unsigned short j = 0; j < WIDTH; j++)
		{
			if (singleGame.getField()[i][j] == nullptr)
				std::cout << "O";
			else
				std::cout << singleGame.getField()[i][j]->getAvatar();
		}
		std::cout << std::endl;
	}



//    std::list<int> tmp = {1, 2, 3, 4, 5};

//
//	std::cout << "<tail(x:" << snake.getBody().begin()->getPosition().x << ", y:" <<
//			snake.getBody().begin()->getPosition().y << ")";
//    for (auto i = snake.getBody().begin(); i != snake.getBody().end(); i = std::next(i, 1))
//    {
//    	auto next_part = std::next(i, 1);
//        if (next_part != snake.getBody().end())
//            std::cout << "(x:" << next_part->getPosition().x << ", y:" << next_part->getPosition().y << ")";
//    }
//    std::cout << "(x:" << snake.getHead().getPosition().x << ", y:"
//    		<< snake.getHead().getPosition().y << ")head}" << std::endl;
}
