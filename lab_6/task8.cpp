//
// Created by danil on 14.10.2025.
//
#include <iostream>
#include <vector>

void plusesDeleter(std::vector<int> &);

int main() {
    std::vector<int> v = {1, 0,3, -8, -9, 0, 10, 23,-1,12, -7};
    plusesDeleter(v);
    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
    return 0;
}
void plusesDeleter(std::vector<int> &v) {
    std::vector<int>::iterator it = v.begin();
    for (it;it != v.end(); it++) {
        if (*it > 0) {v.erase(it); --it;}
    }
}