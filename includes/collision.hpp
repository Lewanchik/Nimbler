//
// Created by lewan on 26.09.19.
//


#ifndef NIMBLERGIT_COLLISION_HPP
#define NIMBLERGIT_COLLISION_HPP
#include "../src/classes/SingleGame.hpp"

template <unsigned short Twidth, unsigned short Theight>
void	collision(SingleGame<Twidth, Theight> &singleGame)
{
    s_coordinates head_coord = singleGame.getSnake().getHead().getPosition();

    switch (singleGame.getSnake().getHead().getDirection())
    {
        case (right):
            head_coord.x++;
        case (down):
            head_coord.y++;
        case (left):
            head_coord.x--;
        case (up):
            head_coord.y--;
        default:
            ;
    }
    if (singleGame.getField()[head_coord.y][head_coord.x] != nullptr &&
        (singleGame.getField()[head_coord.y][head_coord.x]->getType() == food ||
         singleGame.getField()[head_coord.y][head_coord.x]->getType()) == bonusFood)
    {
        singleGame.addScore(dynamic_cast<Food *>(singleGame.getField()[head_coord.y][head_coord.x])->getScore());
        singleGame.getField()[head_coord.y][head_coord.x] = nullptr;
    }
    else
    {
        std::cout << "GAMEOVER" << std::endl;
        exit(0);//GAMEOVER
    }
}

#endif //NIMBLERGIT_COLLISION_HPP

