#include "../src/classes/SingleGame.hpp"
#include <vector>
#include <random>

template <unsigned int Twidth, unsigned Theight>
unsigned	countFreeCells(Field<Twidth, Theight> field)
{
	unsigned	freeCellsNumber = 0;

	for (unsigned int i = 0; i < Theight; i++)
		for (unsigned int j = 0; j < Twidth; j++)
			if (field[i][j] == nullptr)
				freeCellsNumber++;
	return (freeCellsNumber);
}

int randomSellForFood(int count)
{
	std::random_device random;
	std::mt19937 generator(random());

	return (int(generator() % count));
}