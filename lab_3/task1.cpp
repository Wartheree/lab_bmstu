//
// Created by danil on 04.10.2025.
//
#include <iostream>
void multi_2(int*&, const int&);
void reduce_a(int*&, const int&);
void div_on_first(int*&, const int&);
int main() {
    int n;
    std::cout << "length of array = ";  std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) { std::cout << "element " << i << " "; std::cin >> arr[i]; };
    int task;
    std::cout << "select a task number ";  std::cin >> task;
    switch (task) {
        case 1: multi_2(arr,n); break;
        case 2: reduce_a(arr,n); break;
        case 3: div_on_first(arr,n); break;
        default: std::cout<<"Invalid task number";
    }
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    delete[] arr;
    return 0;
}
// задание 1
void multi_2(int*& arr, const int& length) {
    for (int i = 0; i < length; i++)  arr[i] *= 2;
}
// задание 2
void reduce_a(int*& arr, const int& length) {
    int a;
    std::cout << "a = ";  std::cin >> a;
    for (int i = 0; i < length; i++)  arr[i] -= a;
}
// задание 3
void div_on_first(int*& arr, const int& length) {
    int x = *arr;
    for (int i = 0; i < length; i++)  arr[i] /= x;
}