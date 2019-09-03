//
// Created by lewan on 31.08.19.
//

#ifndef NIMBLERGIT_BONUSFOOD_HPP
#define NIMBLERGIT_BONUSFOOD_HPP


#include "Food.hpp"

class BonusFood : public Food {
public:
    explicit BonusFood(std::string *avatar, unsigned score, int timeToDestoy);
    explicit BonusFood(std::string *avatar, unsigned score, s_coordinates possition, int timeToDestoy);

    int             getType() const override;      // type of entity (bodySnake, obstacle etc.)
    s_coordinates   getPosition() const override; // x and y coordinates
    std::string     getAvatar() const override;    //path to avatar
    void            setCoordinates(s_coordinates possition) override ;

    unsigned        getScore() const ;
    int             getTimeToDestroy() const;

private:
    int _timeToDestroy;
};


#endif //NIMBLERGIT_BONUSFOOD_HPP
