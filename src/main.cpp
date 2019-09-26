#include "../includes/includes.hpp"
#include "../includes/fieldActions.hpp"


int		main()
{
	const unsigned short WIDTH = 20;
	const unsigned short HEIGHT = 10;
	SingleGame<WIDTH, HEIGHT> singleGame;
	s_coordinates head_pos = singleGame.getSnake().getHead().getPosition();

	zeroingField(singleGame);
	singleGame.getField()[singleGame.getFood().getPosition().y]
	[singleGame.getFood().getPosition().x] =
			&singleGame.getFood();
	setSnakeOnField<WIDTH, HEIGHT>(singleGame);
	printMapInTerm<WIDTH, HEIGHT>(singleGame);
	std::cout << std::endl;
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
