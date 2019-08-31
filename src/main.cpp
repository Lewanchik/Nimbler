
#include <string>
#include <iostream>
#include <list>
#include "classes/SnakeHead.hpp"
#include "classes/Snake.hpp"
#include "classes/SingleGame.hpp"


int main()
{
	Field<5, 5> field;
	SnakeHead *snakeHead = new SnakeHead(new std::string("Head avatar path"));
//	Snake *snake = new Snake(snakeHead);
	IEntity *iEntity = dynamic_cast<IEntity *>(snakeHead);

	field[1][2] = iEntity;
	std::cout << field[1][2]->getAvatar();

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
