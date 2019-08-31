//
// Created by lewan on 29.08.19.
//

#ifndef NIMBLERGIT_SNAKE_HPP
#define NIMBLERGIT_SNAKE_HPP


#include "SnakeHead.hpp"
#include <forward_list>

class Snake {
public:
    Snake();
    std::forward_list<SnakePart>    getBody();
    void                            addBodyPart();
    void                            moveSnake();

private:
    SnakeHead                           _head;
    std::forward_list<SnakePart>        _body;
};


#endif //NIMBLERGIT_SNAKE_HPP
