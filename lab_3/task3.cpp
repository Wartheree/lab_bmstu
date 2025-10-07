//
// Created by danil on 01.10.
#include <iostream>
int main()
{
    int *arr = new int[20];
    for(int i=0;i<20;i++) {std::cout<<"element " << i << " "; std::cin >> arr[i]; };
    std::swap(arr[0],arr[20-3]);
    std::swap(arr[1],arr[20-2]);
    std::swap(arr[2],arr[20-1]);
    for (int i = 0; i < 20; i++) std::cout << arr[i] << " ";
    delete [] arr;
    return 0;
}