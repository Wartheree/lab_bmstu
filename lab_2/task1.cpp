//
// Created by danil on 05.10.2025.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, z;
    std::cout << "X = "; std::cin >> x;
    std::cout << "Y = "; std::cin >> y;
    std::cout << "Z = "; std::cin >> z;
    //условие 1
    std::cout << "каждое из чисел X и Y нечётное - ";
    if (x % 2 == 1 && y % 2 == 1) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;
    //условие 2
    std::cout << "только одно из чисел X и Y меньше 20 - ";
    if ((x < 20 && y >= 20) || (y < 20 && x >= 20)) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;
    //условие 3
    std::cout << "хотя бы одно из чисел X и Y равно нулю - ";
    if ((x == 0) || (y == 0)) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;
    //условие 4
    std::cout << "каждое из чисел X, Y, Z отрицательное - ";
    if ((x < 0) && (y < 0) && (z < 0)) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;
    //условие 5
    std::cout << "только одно из чисел X, Y и Z кратно пяти - ";
    if ((x * y * z % 25 != 0) && (x * y * z % 5 == 0)) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;
    //условие 6
    std::cout << "хотя бы одно из чисел X, Y, Z больше 100 - ";
    if ((x > 100) && (y > 100) && (z > 100)) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;
    return 0;
}