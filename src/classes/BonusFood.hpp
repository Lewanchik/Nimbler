//
// Created by lewan on 31.08.19.
//

#ifndef NIMBLERGIT_BONUSFOOD_HPP
#define NIMBLERGIT_BONUSFOOD_HPP


#include "Food.hpp"

class BonusFood : public Food {
public:
    explicit BonusFood(std::string *avatar, unsigned score, int timeToDestroy);
    explicit BonusFood(std::string *avatar, unsigned score, s_coordinates position, int timeToDestroy);

    int             getType() const override;      // type of entity (bodySnake, obstacle etc.)
    s_coordinates   getPosition() const override; // x and y coordinates
    std::string     getAvatar() const override;    //path to avatar
    void            setCoordinates(s_coordinates position) override ;

    unsigned        getScore() const ;
    int             getTimeToDestroy() const;

private:
    int _timeToDestroy;
};


#endif //NIMBLERGIT_BONUSFOOD_HPP
