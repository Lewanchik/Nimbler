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
			break;
        case (down):
            head_coord.y++;
			break;
        case (left):
            head_coord.x--;
			break;
        case (up):
            head_coord.y--;
			break;
        default:
            ;
    }
    if (singleGame.getField()[head_coord.y][head_coord.x] != nullptr &&
			(singleGame.getField()[head_coord.y][head_coord.x]->getType() == food ||
			 singleGame.getField()[head_coord.y][head_coord.x]->getType() == bonusFood))
    {
        singleGame.addScore(dynamic_cast<Food *>(singleGame.getField()[head_coord.y][head_coord.x])->getScore());
        singleGame.getSnake().getHead().setFoodInside(true);
        singleGame.getSnake().addBodyPart();
		singleGame.getField()[head_coord.y][head_coord.x]->setCoordinates({-1, -1});
        singleGame.getField()[head_coord.y][head_coord.x] = nullptr;
    }
    else if (singleGame.getField()[head_coord.y][head_coord.x] != nullptr &&
    (singleGame.getField()[head_coord.y][head_coord.x]->getType() == obstacle ||
    singleGame.getField()[head_coord.y][head_coord.x]->getType() == bodySnake))
    {
        std::cout << "GAMEOVER" << std::endl;
        exit(0);//GAMEOVER
    }
}

#endif //NIMBLERGIT_COLLISION_HPP

