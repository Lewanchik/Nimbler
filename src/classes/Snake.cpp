
#include "Snake.hpp"

Snake::Snake(std::string *bodyAvatar, SnakeHead head) : _head(std::move(head))
{
	s_coordinates position = head.getPosition();

	for (int i = 0; i < START_NUMBER_SNAKE_BODY_PARTS; i++)
	{
		position.x--;
		_body.push_front(SnakePart(bodyAvatar, position));
	}

}

void Snake::moveSnake()
{
    for (auto i = _body.begin(); i != _body.end(); i = std::next(i, 1))
    {
        auto next = std::next(i, 1);

        if (next != _body.end())
            (*i).setCoordinates((*next).getPosition());
        else
            (*i).setCoordinates(_head.getPosition());
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