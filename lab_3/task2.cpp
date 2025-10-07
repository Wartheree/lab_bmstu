#include <iostream>
//
// Created by danil on 04.10.2025.
//
int sum(int*&, const int&);
int square_sum(int*&, const int&);
int sum_six(int*&, const int&);
int sum_k(int*&, const int&);
float mean(int*&, const int&);
float mean_k(int*&, const int&);

int main() {
    int n;
    std::cout << "length of array = ";  std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) { std::cout << "element " << i << " "; std::cin >> arr[i]; };
    int task;
    std::cout << "select a task number ";  std::cin >> task;
    switch (task) {
        case 1: std::cout<<sum(arr,n);break;
        case 2: std::cout<<square_sum(arr,n);break;
        case 3: std::cout<<sum_six(arr,n);break;
        case 4: std::cout<<sum_k(arr,n);break;
        case 5: std::cout<<mean(arr,n);break;
        case 6: std::cout<<mean_k(arr,n);break;
        default: std::cout<<"Invalid task number";
    }
    delete []arr;
    return 0;
}
// задание 1
int sum(int*& arr, const int& length) {
    int rez = 0;
    for (int i = 0; i < length; i++)  rez += arr[i];
    return rez;
}
// задание 2
int square_sum(int*& arr, const int& length) {
    int rez = 0;
    for (int i = 0; i < length; i++)  rez += arr[i]*arr[i];
    return rez;
}
// задание 3
int sum_six(int*& arr, const int& length) {
    if (length <= 6) return sum(arr, length);
    int rez = 0;
    for (int i = 0; i < 6; i++)  rez += arr[i];
    return rez;
}
// задание 4
int sum_k(int*& arr, const int& length) {
    int k1, k2;
    std::cout << "k1 = ";  std::cin >> k1; std::cout << "k2 = ";  std::cin >> k2;
    if ((k1 > k2) || (k2 >= length)) { std::cout << "Invalid data "; return 0; };
    int rez = 0;
    for (int i = k1; i <= k2; i++)  rez += arr[i];
    return rez;
}
//задание 5
float mean(int*& arr, const int& length) {
    return (sum(arr, length)) / float(length);
}
// задание 6
float mean_k(int*& arr, const int& length) {
    int s1, s2;
    std::cout << "s1 = ";  std::cin >> s1; std::cout << "s2 = ";  std::cin >> s2;
    if ((s1 > s2) || (s2 >= length)) { std::cout << "Invalid data "; return 0; };
    float rez = 0;
    for (int i = s1; i <= s2; i++)  rez += arr[i];
    return (rez / (s2 - s1 + 1));
}