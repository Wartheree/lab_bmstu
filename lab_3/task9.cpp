//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "word = "; std::cin >> word;
    std::string stars ="";
    for (int i = 0 ; i < word.length(); i++) {
        stars += "*";
    }
    std::cout<<word+stars;
    return 0;
}