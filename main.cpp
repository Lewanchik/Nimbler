//
// Created by lewan on 26.08.19.
//

#include <string>
#include <iostream>


enum Entity
{
    snakePart,
    food,
    bonusFood,
    obstacle
};

int main()
{
    int a = Entity::snakePart;

    std::pair<std::string, int> a1("q2", 1);

    std::cout << a;
}