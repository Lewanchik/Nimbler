
#include "Snake.hpp"

void Snake::moveSnake()
{
    for (auto i = _body.begin(); i != _body.end(); i = std::next(i, 1))
    {
        auto next = std::next(i, 1);

        if (next != _body.end())
            (*i).setCoordinates((*next).getPossition());
    }
}
