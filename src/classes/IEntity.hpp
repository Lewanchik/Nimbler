//
// Created by lewan on 26.08.19.
//

#ifndef IENTITY_HPP
#define IENTITY_HPP

#include "../../includes/includes.hpp"

class IEntity
{
public:
    virtual int             getType() const = 0;      // type of entity (bodySnake, obstacle etc.)
    virtual s_coordinates   getPossition() const = 0; // x and y coordinates
    virtual std::string     getAvatar() const = 0;    //path to avatar
    virtual void            setCoordinates(s_coordinates possition) = 0;
};

#endif //NIMBLERGIT_IENTITY_HPP
