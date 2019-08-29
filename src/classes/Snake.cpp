
#include "Snake.hpp"

Snake::Snake(SnakeHead head) : _head(std::move(head))
{
    
}

void Snake::moveSnake()
{
    for (auto i = _body.begin(); i != _body.end(); i = std::next(i, 1))
    {
        auto next = std::next(i, 1);

        if (next != _body.end())
            (*i).setCoordinates((*next).getPossition());
    }
}

void Snake::addBodyPart()
{
    _body.push_front(*_body.begin());
}

std::forward_list<SnakePart> &Snake::getBody()
{
    return _body;
}

SnakeHead& Snake::getHead()
{
    return _head;
}