//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>

int main()
{
    std::string town;
    std::cout<<"enter a town name ";std::cin >> town;
    if (town.length() % 2 == 0) std::cout << "even";
    else std::cout << "odd";
    return 0;
}

