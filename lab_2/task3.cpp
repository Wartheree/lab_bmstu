//
// Created by danil on 05.10.2025.
//

#include <iostream>

int main()
{
    int N;
    for (int i = 1; i < 10; i++) std::cout << i << " x 7 = " << i * 7 << std::endl;
    std::cout << "N = "; std::cin >> N;
    for (int i = 1; i < 10; i++) std::cout << i << " x "<< N << " = " << i * N << std::endl;
    return 0;
}
