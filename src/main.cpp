
#include <string>
#include <iostream>
#include <list>

int main()
{
    std::list<int> tmp = {1, 2, 3, 4, 5};

<<<<<<< HEAD
=======
    for (auto i = tmp.begin(); i != tmp.end(); i = std::next(i, 1))
    {
        if (std::next(i, 1) != tmp.end())
            std::cout << *std::next(i, 1) << std::endl;
    }
>>>>>>> parent of 2925ada... The constructor of the snake class.
}
