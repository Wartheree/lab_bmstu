//
// Created by danil on 04.10.2025.
//
#include <iostream>
#include <string>

int main()
{
    std::string word,cut_word;
    int m, n;
    std::cout << "word = "; std::cin >> word;
    std::cout << "m = "; std::cin >> m;
    std::cout << "n = "; std::cin >> n;
    for (m; m <= n; m++) cut_word += word[m - 1];
    std::cout << cut_word;
    return 0;
}