
#include "Snake.hpp"

<<<<<<< HEAD
=======
Snake::Snake(SnakeHead head) : _head(std::move(head))
{
    
}

>>>>>>> parent of 2925ada... The constructor of the snake class.
void Snake::moveSnake()
{
    for (auto i = _body.begin(); i != _body.end(); i = std::next(i, 1))
    {
        auto next = std::next(i, 1);

        if (next != _body.end())
            (*i).setCoordinates((*next).getPossition());
    }
}
