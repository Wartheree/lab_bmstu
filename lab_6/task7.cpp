//
// Created by danil on 14.10.2025.
//
#include <iostream>
#include <list>
#include <ostream>

void reverseNum(std::list<int>& );

int main() {
    std::list<int> nums = {1, 5, 4, -3};
    reverseNum(nums);
    std::list<int>::iterator it=nums.begin();
    for (it;it!=nums.end();it++) {std::cout << *it << " ";}
    return 0;
}

void reverseNum(std::list<int>& nums) {
    std::list<int>::iterator it=nums.begin();
    for (it;it!=nums.end();++it) {
        nums.insert(it,-(*it));
    }
}


