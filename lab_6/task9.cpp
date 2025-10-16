//
// Created by danil on 14.10.2025.
//
#include <iostream>
#include <list>
#include <algorithm>


void Sort(std::list<int>&);

int main() {
    std::list<int> nums = {1, 5, 4, -3};
    Sort(nums);
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}

void Sort(std::list<int>& nums) {
    //nums.sort();
    int swaps=1;
    std::list<int>::iterator it = nums.begin();
    std::list<int>::iterator next;
    while (swaps != 0){
        swaps = 0;
        for (it; it != --nums.end(); it++) {
            next = std::next(it);
            if (*it < *next) {std::iter_swap(it,next); ++swaps;}
        }
    }
}