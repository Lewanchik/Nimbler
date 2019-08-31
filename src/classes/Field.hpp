//
// Created by anton on 8/31/19.
//

#ifndef NIMBLER_FIELD_HPP
#define NIMBLER_FIELD_HPP

#include "IEntity.hpp"

template <unsigned short width, unsigned short height>
class Field
{
public:
	unsigned short getWidth() const
	{
		return width;
	}

	unsigned short getHeight() const
	{
		return height;
	}

	IEntity **operator[](int i)
	{
		return field[i];
	}

private:
	IEntity	*field[width][height];
};

#endif //NIMBLER_FIELD_HPP
