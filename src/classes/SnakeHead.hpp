//
// Created by lewan on 29.08.19.
//

#ifndef NIMBLERGIT_SNAKEHEAD_HPP
#define NIMBLERGIT_SNAKEHEAD_HPP


#include "SnakePart.hpp"

class SnakeHead : public SnakePart {
public:
    explicit SnakeHead(std::string *avatar, s_coordinates coordinates);
    explicit SnakeHead(std::string *avatar);
    int             getType() const;      // type of entity (bodySnake, obstacle etc.)
    s_coordinates   getPossition() const; // x and y coordinates
    std::string     getAvatar() const;    //path to avatar
    void            setCoordinates(s_coordinates possition);
    unsigned short  getDirrection();
    void            setDirection(unsigned short direction);
    bool            isFoodInside();

private:
    bool            _foodInside;
    unsigned short  _direction;
};


#endif //NIMBLERGIT_SNAKEHEAD_HPP
