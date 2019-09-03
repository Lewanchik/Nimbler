//
// Created by lewan on 31.08.19.
//

#ifndef NIMBLERGIT_FOOD_HPP
#define NIMBLERGIT_FOOD_HPP


#include "IEntity.hpp"

class Food : public IEntity {
public:
    explicit Food(std::string *avatar, unsigned score);
    explicit Food(std::string *avatar, unsigned score, s_coordinates possition);
    int             getType() const override;      // type of entity (bodySnake, obstacle etc.)
    s_coordinates   getPosition() const override ; // x and y coordinates
    std::string     getAvatar() const override;    //path to avatar
    void            setCoordinates(s_coordinates possition) override;

    virtual unsigned        getScore() const;

protected:
    int             _type;
    unsigned        _score;
    std::string     *_avatar;
    s_coordinates   _possition;
};


#endif //NIMBLERGIT_FOOD_HPP
