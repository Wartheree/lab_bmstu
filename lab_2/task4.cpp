//
// Created by danil on 05.10.2025.
//
#include <iostream>

int main()
{
    int a, b;
    unsigned long long rez = 1;
    std::cout << "a = "; std::cin >> a; std::cout << "b = ";  std::cin >> b;
    if (1 < a && a < 20 && 1 < b && b < 20 && b >= a) {
        //задание 1
        for (int i = 8; i < 16; i++) rez *= i;
        std::cout << rez << std::endl;
        rez = 1;
        //задание 2
        for (int i = a; i < 21; i++) rez *= i;
        std::cout << rez << std::endl;
        rez = 1;
        //задание 3
        for (int i = 1; i < b + 1; i++) rez *= i;
        std::cout << rez << std::endl;
        rez = 1;
        //задание 4
        for (int i = a; i < b + 1; i++) rez *= i;
        std::cout << rez << std::endl;
    }
    else std::cout << "Invalid data";
    return 0;
}
