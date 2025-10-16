//
// Created by danil on 14.10.2025.
//
#include <iostream>
#include <vector>

std::vector<int>::iterator Find(std::vector<int>::iterator, std::vector<int>::iterator, int);

int main() {
    std::vector<int> v = {6, 8, 1, 2, 3, 4, 5};
    std::vector<int>::iterator it = Find(v.begin(), v.end(), 9);
    std::cout << distance(v.begin(),it) << std::endl;
    return 0;
}

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    while (first != last) {
        if (*first == el) return first;
        ++first;
    }
    return last;
}