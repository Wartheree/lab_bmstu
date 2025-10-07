//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>

int main() {
    std::string surname1, surname2;
    std::cout << "Surname 1 "; std::cin >> surname1; std::cout << "Surname 2 "; std::cin >> surname2;
    bool task = (surname1.length() > surname2.length());
    std::cout << task;
    return 0;
}