#include "../includes/includes.hpp"
#include "../includes/fieldActions.hpp"


int		main()
{
	const unsigned short WIDTH = 20;
	const unsigned short HEIGHT = 10;
	SingleGame<WIDTH, HEIGHT> singleGame;
	s_coordinates head_pos = singleGame.getSnake().getHead().getPosition();
	char direction;

	zeroingField(singleGame);
	singleGame.setFreeCells(countFreeCells<WIDTH, HEIGHT>(singleGame.getField()));

	while (true)
	{
		newFrame<WIDTH, HEIGHT>(singleGame);
		printMapInTerm<WIDTH, HEIGHT>(singleGame);
		std::cout << std::endl;
		std::cin >> direction;
		switch (direction)
		{
			case 'w':
				if (singleGame.getSnake().getHead().getDirection() != down)
					singleGame.getSnake().getHead().setDirection(up);
				break;
			case 's':
				if (singleGame.getSnake().getHead().getDirection() != up)
					singleGame.getSnake().getHead().setDirection(down);
				break;
			case 'a':
				if (singleGame.getSnake().getHead().getDirection() != right)
					singleGame.getSnake().getHead().setDirection(left);
				break;
			case 'd':
				if (singleGame.getSnake().getHead().getDirection() != left)
					singleGame.getSnake().getHead().setDirection(right);
				break;
			case 'e':
				break;
		}
	}

//
//	singleGame.getSnake().addBodyPart();
//	singleGame.getSnake().moveSnake();
//	head_pos.y++;
//	singleGame.getSnake().getHead().setCoordinates(head_pos);
//
//	zeroingField(singleGame);
//	setSnakeOnField<WIDTH, HEIGHT>(singleGame);
//	printMapInTerm<WIDTH, HEIGHT>(singleGame);
//	std::cout << std::endl;
//
//	singleGame.getSnake().moveSnake();
//	head_pos.y++;
//	singleGame.getSnake().getHead().setCoordinates(head_pos);
//
//	zeroingField(singleGame);
//	setSnakeOnField<WIDTH, HEIGHT>(singleGame);
//	printMapInTerm<WIDTH, HEIGHT>(singleGame);
//	std::cout << std::endl;
//
//	singleGame.getSnake().moveSnake();
//	head_pos.x++;
//	singleGame.getSnake().getHead().setCoordinates(head_pos);
//
//	zeroingField(singleGame);
//	setSnakeOnField<WIDTH, HEIGHT>(singleGame);
//	printMapInTerm<WIDTH, HEIGHT>(singleGame);
//	std::cout << std::endl;
//
//	singleGame.getSnake().moveSnake();
//	head_pos.x++;
//	singleGame.getSnake().getHead().setCoordinates(head_pos);
//
//	zeroingField(singleGame);
//	setSnakeOnField<WIDTH, HEIGHT>(singleGame);
//	printMapInTerm<WIDTH, HEIGHT>(singleGame);
//	std::cout << std::endl;
}
