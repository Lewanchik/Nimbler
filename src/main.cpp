
#include <string>
#include <iostream>
#include <list>
#include "classes/SnakeHead.hpp"
#include "classes/Snake.hpp"

int main()
{
    std::list<int> tmp = {1, 2, 3, 4, 5};
	SnakeHead snakeHead(new std::string("Head avatar path"));
	Snake snake(snakeHead);

	std::cout << "<tail(x:" << snake.getBody().begin()->getPossition().x << ", y:" <<
			snake.getBody().begin()->getPossition().y << ")";
    for (auto i = snake.getBody().begin(); i != snake.getBody().end(); i = std::next(i, 1))
    {
    	auto next_part = std::next(i, 1);
        if (next_part != snake.getBody().end())
            std::cout << "(x:" << next_part->getPossition().x << ", y:" << next_part->getPossition().y << ")";
    }
    std::cout << "(x:" << snake.getHead().getPossition().x << ", y:"
    		<< snake.getHead().getPossition().y << ")head}" << std::endl;
}
