//
// Created by danil on 05.10.2025.
//

#include <iostream>
#include <vector>
#include "lab04.h"

int main()
{
    std::vector<float> arr{1,2,3,4,5,6,0,12,3,-1};
    std::cout << argmax(arr);
    return 0;
}
int argmax(const std::vector<float>& vec) {
    if (vec.empty()) return -1;
    int indx, max = -1000;
    for (int i = 0; i < vec.size(); i++) if (vec[i] > max) { indx = i; max = vec[i]; }
    return indx;
}
