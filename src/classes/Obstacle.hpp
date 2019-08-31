//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_OBSTACLE_HPP
#define NIMBLER_OBSTACLE_HPP


#include "IEntity.hpp"

class Obstacle : public IEntity
{
public:
	Obstacle(std::string *avatar, const s_coordinates &position);

	int getType() const override ;

	s_coordinates getPosition() const override;

	std::string getAvatar() const override;

	void setCoordinates(s_coordinates position) override;

private:
	std::string		*_avatar;
	s_coordinates	_position;
	int 			_type;
};


#endif //NIMBLER_OBSTACLE_HPP
