//
// Created by lewan on 26.08.19.
//

#ifndef IENTITY_HPP
#define IENTITY_HPP

#include "includes.hpp"

class IEntity
{
public:
    virtual int         getType() = 0;      // type of entity (bodySnake, obstacle etc.)
    virtual Coordinates getPossition() = 0; // x and y coordinates
    virtual std::string *getAvatar() = 0;    //path to avatar
};

#endif //NIMBLERGIT_IENTITY_HPP
