//
// Created by danil on 05.10.2025.
//
#include <iostream>
#include <vector>
#include "lab04.h"

int main()
{
    std::vector<float> arr{ 1,2,3,4,5,6,7,8 };
    std::cout << mean(arr);
    return 0;
}
float mean(const std::vector <float>& vec) {
    float sum=0;
    for (int i = 0; i < vec.size(); i++) sum += vec[i];
    return (sum / vec.size());
}