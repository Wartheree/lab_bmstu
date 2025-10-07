//
// Created by danil on 05.10.2025.
//
#include <iostream>
#include <vector>
#include "lab04.h"

int main()
{
    std::vector<int> arr{ 2,5,9,0,3,-1,2,3,3,4 };
    int removed_element=0;
    std::cout << remove_first_negative_element(arr, removed_element) << " " << removed_element;
    return 0;
}
bool remove_first_negative_element(std::vector<int>& vec, int& removed_element) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < 0) {
            removed_element = vec[i];
            vec.erase(vec.begin() + i);
        }
    }
    if (removed_element == 0) return false;
    return true;
}
