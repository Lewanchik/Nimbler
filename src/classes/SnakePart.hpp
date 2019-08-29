//
// Created by Denis LEWANDOWSKI on 2019-08-28.
//

#ifndef NIMBLER_SNAKEPART_HPP
#define NIMBLER_SNAKEPART_HPP


#include "IEntity.hpp"

class SnakePart : public IEntity {
public:
    explicit SnakePart(std::string *avatar, s_coordinates coordinates);

    int             getType() const;      // type of entity (bodySnake, obstacle etc.)
    s_coordinates   getPossition() const; // x and y coordinates
    std::string     getAvatar() const;    //path to avatar
    void            setCoordinates(s_coordinates possition);

protected:
	explicit SnakePart(std::string *avatar);
protected:
    std::string     *_avatar;
    s_coordinates   _possition;
    int             _type;
};


#endif //NIMBLER_SNAKEPART_HPP
